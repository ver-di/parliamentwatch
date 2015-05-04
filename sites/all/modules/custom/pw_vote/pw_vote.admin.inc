<?php

/**
 * @file pw_vote.admin.inc
 * 
 */

/**
 * Form builder.
 */
function pw_vote_settings_form($form, &$form_state) {

  $form['pw_vote_vote_tolerance'] = array(
    '#type' => 'textfield',
    '#title' => t('Set tolerance for voting in seconds'),
    '#default_value' => variable_get('pw_vote_vote_tolerance'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}


/**
 * Form builder.
 */
function pw_vote_generate_votes_form($form, &$form_state) {

  // select all petitions and build select box
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
  $form['pw_vote_admin_petition'] = array(
    '#type' => 'select',
    '#title' => t('Petition, to generate votes for'),
    '#options' => $options,
    '#default_value' => variable_get('pw_vote_generate_votes_petition'),
    '#required' => TRUE,
  );

  // add default voting behavior
  $voc = taxonomy_vocabulary_machine_name_load('votes');
  $terms = taxonomy_term_load_multiple(array(), array('vid' => $voc->vid));
  $options = array('random' => t('By random'));
  $default_tid = 'random';
  foreach ($terms as $tid => $term) {
    $options[$tid] = $term->field_votes_label[LANGUAGE_NONE][0]['value'];
    if($term->name == 'no-show') {
      $default_tid = $tid;
    }
  }
  $form['pw_vote_admin_default_vote'] = array(
    '#type' => 'select',
    '#title' => t('Default voting behavior'),
    '#options' => $options,
    '#default_value' => $default_tid,
    '#required' => TRUE,
  );

  $form['pw_vote_admin_delete_existing'] = array(
    '#type' => 'checkbox',
    '#title' => t('Delete all votes for this petition before generate new ones'),
  );

  // add submit button
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Generate Votes',
  );

  // add custom validation
  $form['#validate'][] = 'pw_vote_settings_form_validate';

  // add custom submit handler
  $form['#submit'][] = 'pw_vote_settings_form_submit';
  return $form;
}


/**
 * Form validate handler.
 */
function pw_vote_settings_form_validate($form, &$form_state) {

  // check if yes / no in vocabulary votes exists
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
  $nid = $form['pw_vote_admin_petition']['#value'];
  $node = node_load($nid);
  variable_set('pw_vote_generate_votes_petition', $nid);

  // wrap node 
  $petition = entity_metadata_wrapper('node', $node);

  // parliament
  $parliament = $petition->field_parliament->value();

  // load yes/no etc
  if($form['pw_vote_admin_default_vote']['#value'] == 'random') {
    $voc = taxonomy_vocabulary_machine_name_load('votes');
    $terms = taxonomy_term_load_multiple(array(), array('vid' => $voc->vid));
    $vote_tids = array_keys($terms);
  }

  // delete votes on this node
  if($form['pw_vote_admin_delete_existing']['#value'] == 1) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'vote')
      ->fieldCondition('field_vote_node', 'target_id', $nid);
    $result = $query->execute();
    if ($result['node']) {
      $nids = array_keys($result['node']);
      node_delete_multiple($nids);
    }
  }

  // retrieve all deputies of related parliament
  $deputies = db_query("SELECT uac.uid FROM user_archive_cache uac WHERE uac.user_role = 'deputy' AND uac.parliament_name = :name", array(':name' => $petition->field_parliament->label()))->fetchCol();

  // create vote for each deputy
  $count_generated = 0;
  foreach ($deputies as $uid) {

    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'vote')
      ->fieldCondition('field_vote_node', 'target_id', $nid)
      ->fieldCondition('field_vote_user', 'target_id', $uid);
    $result = $query->count()->execute();
    if($result == 0) {

      // user fields
      $deputy = user_load($uid);
      $field_firstname = field_get_items('user', $deputy, 'field_user_fname');
      $field_lastname = field_get_items('user', $deputy, 'field_user_lname');

      // create new vote
      $vote = new stdClass();
      $vote->title = "Vote by " . $field_firstname[0]['value'] . ' ' . $field_lastname[0]['value'] . ' (default)';
      $vote->type = "vote";
      $vote->language = LANGUAGE_NONE;
      $vote->status = 1;
      $vote->uid = $user->uid;
      $vote->field_vote_node[LANGUAGE_NONE][]['target_id'] = $nid;
      $vote->field_parliament[LANGUAGE_NONE][]['tid'] = $parliament[0]->tid;
      $vote->field_vote_user[LANGUAGE_NONE][]['target_id'] = $uid;
      $vote->body[LANGUAGE_NONE][]['format']= 'plain_text';

      // voting behavior
      if($form['pw_vote_admin_default_vote']['#value'] == 'random') {
        $vote->field_vote[LANGUAGE_NONE][]['tid'] = $vote_tids[rand(0, sizeof($vote_tids) - 1)];
      }
      else {
        $vote->field_vote[LANGUAGE_NONE][]['tid'] = $form['pw_vote_admin_default_vote']['#value'];
      }

      // save vote
      node_save($vote);

      // count for user output
      $count_generated++;
    }
  }

  drupal_set_message($count_generated . " votes generated.");
}
