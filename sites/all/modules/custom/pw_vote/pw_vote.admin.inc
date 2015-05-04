<?php

/**
 * @file pw_vote.admin.inc
 * 
 */


/**
 * Form builder.
 */
function pw_vote_settings_form($form, &$form_state) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'pw_petition')
    ->propertyCondition('status', NODE_PUBLISHED);
  $result = $query->execute();

  $options = array();
  if (isset($result['node'])) {
    $nodes = node_load_multiple(array_keys($result['node']));
    foreach ($nodes as $nid => $node) {
      $options[$nid] = $node->title;
    }
  }
  $form['pw_vote_generate_votes_petition'] = array(
    '#type' => 'select',
    '#title' => t('Petition, to generate votes for'),
    '#options' => $options,
    '#default_value' => variable_get('pw_vote_generate_votes_petition'),
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Generate Votes',
  );
  $form['#validate'][] = 'pw_vote_settings_form_validate';
  $form['#submit'][] = 'pw_vote_settings_form_submit';
  return $form;
}


/**
 * Form validate handler.
 */
function pw_vote_settings_form_validate($form, &$form_state) {

  // check yes / no
  $voc = taxonomy_vocabulary_machine_name_load('votes');
  $terms = taxonomy_term_load_multiple(array(), array('vid' => $voc->vid));
  $vote_tids = array_keys($terms);
  if (sizeof($vote_tids) == 0) {
    form_set_error('error', 'No items found in taxonomy votes.');
  }
}

/**
 * Form submit handler.
 */
function pw_vote_settings_form_submit($form, &$form_state) {

  global $user;

  // selected node
  $nid = $form['pw_vote_generate_votes_petition']['#value'];
  $node = node_load($nid);
  variable_set('pw_vote_generate_votes_petition', $nid);

  // wrap node 
  $petition = entity_metadata_wrapper('node', $node);

  // parliament
  $parliament = $petition->field_parliament->value();

  // load yes/no etc
  $voc = taxonomy_vocabulary_machine_name_load('votes');
  $terms = taxonomy_term_load_multiple(array(), array('vid' => $voc->vid));
  $vote_tids = array_keys($terms);

  // delete votes on this node
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'vote')
    ->fieldCondition('field_vote_node', 'target_id', $nid);
  $result = $query->execute();
  if ($result['node']) {
    $nids = array_keys($result['node']);
    node_delete_multiple($nids);
  }

  // retrieve all deputies of related parliament
  $deputies = db_query("SELECT uac.uid FROM user_archive_cache uac WHERE uac.user_role = 'deputy' AND .uac.parliament_name = :name", array(':name' => $petition->field_parliament->label()))->fetchCol();

  // create vote for each deputy
  foreach ($deputies as $uid) {

    // user fields
    $deputy = user_load($uid);
    $field_firstname = field_get_items('user', $deputy, 'field_user_fname');
    $field_lastname = field_get_items('user', $deputy, 'field_user_lname');

    $vote = new stdClass();
    $vote->title = "Vote by " . $field_firstname[0]['value'] . ' ' . $field_lastname[0]['value'] . ' (default)';
    $vote->type = "vote";
    $vote->language = LANGUAGE_NONE;
    $vote->status = 1;
    $vote->uid = $user->uid;
    $vote->field_vote_node[LANGUAGE_NONE][]['target_id'] = $nid;
    $vote->field_parliament[LANGUAGE_NONE][]['tid'] = $parliament[0]->tid;
    $vote->field_vote_user[LANGUAGE_NONE][]['target_id'] = $uid;
    $vote->field_vote[LANGUAGE_NONE][]['tid'] = $vote_tids[rand(0, sizeof($vote_tids) - 1)];
    $vote->body[LANGUAGE_NONE][]['value'] = 'Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ip';
    $vote->body[LANGUAGE_NONE][]['format']= 'plain_text';
    node_save($vote);
  }

  drupal_set_message(sizeof($deputies) . " votes generated!");
}
