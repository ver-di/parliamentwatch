<?php

/**
 * @file pw_maintenance.admin.inc
 * 
 */


/**
 * Form builder.
 */
function pw_maintenance_clear_constituencies($form, &$form_state) {

  // parliament for clearing constituencies
  $voc = taxonomy_vocabulary_machine_name_load('parliaments');
  $terms = taxonomy_term_load_multiple(array(), array('vid' => $voc->vid));
  foreach ($terms as $tid => $term) {
    $empty_term_ids = pw_maintenance_get_empty_term_ids($tid);
    $options[$tid] = $term->name . " (" . sizeof($empty_term_ids) . " empty terms)";
  }
  $form['pw_maintenance_clear_constituencies_parliament'] = array(
    '#type' => 'select',
    '#title' => t('Parliament'),
    '#options' => $options,
    '#required' => TRUE,
  );

  // add submit button
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Clear Empty Constituencies',
  );

  // add custom submit handler
  $form['#submit'][] = 'pw_maintenance_clear_constituencies_submit';
  return $form;
}

/**
 * Form submit handler.
 */
function pw_maintenance_clear_constituencies_submit($form, &$form_state) {

  // selected parliament
  $parliament_tid = $form['pw_maintenance_clear_constituencies_parliament']['#value'];

  // get empty terms
  $empty_term_ids = pw_maintenance_get_empty_term_ids($parliament_tid);

  // delete terms
  $terms = taxonomy_term_load_multiple($empty_term_ids);
  foreach ($terms as $tid => $term) {
    drupal_set_message($term->name . ', ' . $term->uuid . ' - deleted');
    taxonomy_term_delete($tid);
  }

  drupal_set_message(sizeof($empty_term_ids) . " terms deleted");
}

/**
 * Get emtpy terms in vocabulary constituency
 */
function pw_maintenance_get_empty_term_ids($parliament_tid) {

  $empty_term_ids = array();

  // constituency
  $constituency_voc = taxonomy_vocabulary_machine_name_load('constituency');

  // query for all constituency terms tagged with parliament
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term')
  ->propertyCondition('vid', $constituency_voc->vid)
  ->fieldCondition('field_parliament', 'tid', $parliament_tid);
  $result = $query->execute();
  if ($result['taxonomy_term']) {
    $term_ids = array_keys($result['taxonomy_term']);

    // load terms which have no users in relation and have no childs
    $empty_term_ids = db_query("SELECT td.tid 
      FROM taxonomy_term_data td
      LEFT OUTER JOIN field_revision_field_user_constituency fr_const ON fr_const.entity_type = 'user' AND fr_const.field_user_constituency_tid  = td.tid
      LEFT OUTER JOIN taxonomy_term_hierarchy th ON td.tid = th.parent
      WHERE fr_const.entity_id IS NULL AND th.tid IS NULL AND td.tid IN (:term_ids)
      GROUP BY td.tid", array(':term_ids' => $term_ids))->fetchCol();
    $terms = taxonomy_term_load_multiple($empty_term_ids);
  }

  return $empty_term_ids;
}
