<?php

/**
 * @file
 * Includes the sharethis_check api
 */

/**
 * Iterates through nodes and adds or updates their entries in the sharethis_meta table
 * and their corresponding Content Type. Additionally sets the share_basevalue if 
 * the node type is configured in the base types variable.
 */
function pw_sharethis_check_iterateNodes($mode = 'queue') {

  // retrieve necessary configuration:
  $apikey = variable_get('pw_sharethis_check_apikey', false);
  $sub = variable_get('pw_sharethis_check_sub', 'beta');
  $types = variable_get('pw_sharethis_check_types', array());
  $baseTypes = variable_get('pw_sharethis_check_basetypes', array());
  $domain = '.abgeordnetenwatch.de';

  // prepare node query:
  $query = db_select('node', 'n')
          ->fields('n')
          ->condition('type', $types);

  if ($mode != 'queue') { // migration mode:
    // Which entries do we already have:
    $subquery = db_select('sharethis_meta', 'sm')
            ->fields('sm', array('entity_id'))
            ->condition('sm.entity_type', $types, 'IN');
    $query->condition('n.nid', $subquery, 'NOT IN') // select the ones we do not have yet
            ->range(0, 30); // prevent from flooding ShareThis
  } else { // queue mode:
    // Which entries are in the queue:
    $subquery = db_select('sharethis_queue', 'sq')
            ->fields('sq', array('entity_id'))
            ->condition('sq.entity_type', 'node');
    $query->condition('n.nid', $subquery, 'IN');
  }

  $results = $query->execute();

  $errorOccurred = false;

  while ($fetch = $results->fetchAssoc()) {
    $path = drupal_get_path_alias('node/' . $fetch['nid']);
    $subUrl = 'http://' . $sub . $domain . '/' . $path;
    $url = 'http://www' . $domain . '/' . $path;

    // prepare record for sharethis_meta:
    $record['entity_id'] = $fetch['nid'];
    $record['entity_type'] = $fetch['type'];
    $record['url'] = $url;

    // prepare record for field_revision_field_share_sum (content type field table)
    $record_sum['entity_type'] = 'node';
    $record_sum['bundle'] = $fetch['type'];
    $record_sum['deleted'] = 0;
    $record_sum['entity_id'] = $fetch['nid'];
    $record_sum['revision_id'] = 0;
    $record_sum['language'] = 'und';
    $record_sum['delta'] = 0;

    if (in_array($record['entity_type'], $baseTypes)) {

      $content = drupal_http_request('http://rest.sharethis.com/v1/count/urlinfo?url='
              . $subUrl . '&api_key=' . $apikey);

      if (isset($content->error)) {
        $errorOccurred = true;
        break;
      }

      $json = json_decode($content->data, true);
      $record['share_basevalue'] = $json['total']['inbound'];
    } else {
      $record['share_basevalue'] = 0;
    }

    $content = drupal_http_request('http://rest.sharethis.com/v1/count/urlinfo?url='
            . $url . '&api_key=' . $apikey);

    if (isset($content->error)) {
      $errorOccurred = true;
      break;
    }

    $json = json_decode($content->data, true);
    $record['share_sum'] = $record['share_basevalue'] + $json['total']['inbound'];
    $record_sum['field_share_sum_value'] = $record['share_sum'];

    $exists = db_select('sharethis_meta', 'sm')
            ->fields('sm')
            ->condition('url', $record['url'])
            ->range(0, 1)
            ->execute()
            ->rowCount();

    if ($exists) {
      db_update('sharethis_meta')
              ->condition('url', $record['url'])
              ->fields($record)
              ->execute();
    } else {
      db_insert('sharethis_meta')
              ->fields($record)
              ->execute();
    }

    $exists_sum = db_select('field_revision_field_share_sum', 's')
            ->fields('s')
            ->condition('entity_id', $record_sum['entity_id'])
            ->condition('entity_type', 'user')
            ->range(0, 1)
            ->execute()
            ->rowCount();

    if ($exists_sum) {
      db_update('field_revision_field_share_sum')
              ->condition('entity_id', $record_sum['entity_id'])
              ->condition('entity_type', 'node')
              ->fields($record_sum)
              ->execute();
    } else {
      db_insert('field_revision_field_share_sum')
              ->fields($record_sum)
              ->execute();
    }
  }

  // delete queued entries if no error occurred before:
  if (!$errorOccurred && $mode == 'queue') {
    db_delete('sharethis_queue')
            ->condition('entity_type', 'node')
            ->execute();
  }
}

/**
 * Iterates through users and adds or updates their entries in the sharethis_meta table
 * and their corresponding Content Type.
 */
function pw_sharethis_check_iterateUsers($mode = 'queue') {

  // retrieve necessary configuration:
  $apikey = variable_get('pw_sharethis_check_apikey', false);
  $domain = '.abgeordnetenwatch.de';
  
  // prepare user query:
  $query = db_select('user_revision', 'u')
          ->fields('u');

  if ($mode == 'migration') {
    // Which entries do we already have, assuming we import all their revisions en bloc:
    $subquery = db_select('sharethis_meta', 'sm')
      ->fields('sm', array('entity_id'))
      ->condition('sm.entity_type', 'user');
    $query->condition('u.uid', $subquery, 'NOT IN')
          ->range(0, 30); // do not flood ShareThis
  } else { // queue mode:
    // Which entries are in the queue:
    $subqueryQueue = db_select('sharethis_queue', 'sq')
          ->fields('sq', array('entity_id'))
          ->condition('sq.entity_type', 'user');
    $query->condition('u.uid', $subqueryQueue, 'IN');
  }

  $results = $query->execute();
  
  $errorOccurred = false;

  while ($fetch = $results->fetchAssoc()) {

    $path = drupal_get_path_alias('user/' . $fetch['uid']);
    $url = 'http://www' . $domain . '/' . $path . '/archive/' . $fetch['vid']; // this limits the request to archive entries
    
    // record for sharethis_meta table:
    $record['entity_id'] = $fetch['uid'];
    $record['entity_type'] = 'user';
    $record['url'] = $url;
    $record['share_basevalue'] = 0;
    $record['revision_id'] = $fetch['vid'];

    // record for field_revision_field_share_sum table:
    $record_sum['entity_type'] = 'user';
    $record_sum['bundle'] = 'user';
    $record_sum['deleted'] = 0;
    $record_sum['entity_id'] = $fetch['uid'];
    $record_sum['revision_id'] = $fetch['vid'];
    $record_sum['language'] = 'und';
    $record_sum['delta'] = 0;

    $content = drupal_http_request('http://rest.sharethis.com/v1/count/urlinfo?url='
            . $url . '&api_key=' . $apikey);

    if (isset($content->error)) {
      $errorOccurred = true;
      break;
    }

    $json = json_decode($content->data, true);
    $record['share_sum'] = $record['share_basevalue'] + $json['total']['inbound'];
    $record_sum['field_share_sum_value'] = $record['share_sum'];

    $exists = db_select('sharethis_meta', 'sm')
            ->fields('sm')
            ->condition('url', $record['url'])
            ->range(0, 1)
            ->execute()
            ->rowCount();

    if ($exists) {
      db_update('sharethis_meta')
              ->condition('url', $record['url'])
              ->fields($record)
              ->execute();
    } else {
      db_insert('sharethis_meta')
              ->fields($record)
              ->execute();
    }

    $exists_sum = db_select('field_revision_field_share_sum', 's')
            ->fields('s')
            ->condition('entity_id', $record_sum['entity_id'])
            ->condition('revision_id', $record_sum['revision_id'])
            ->condition('entity_type', 'user')
            ->range(0, 1)
            ->execute()
            ->rowCount();

    if ($exists_sum) {
      db_update('field_revision_field_share_sum')
              ->condition('entity_id', $record_sum['entity_id'])
              ->condition('revision_id', $record_sum['revision_id'])
              ->condition('entity_type', 'user')
              ->fields($record_sum)
              ->execute();
    } else {
      db_insert('field_revision_field_share_sum')
              ->fields($record_sum)
              ->execute();
    }
  }

  if ($mode != 'migration' && !$errorOccurred) {
    db_delete('sharethis_queue')
            ->condition('entity_type', 'user')
            ->execute();
  }
}
