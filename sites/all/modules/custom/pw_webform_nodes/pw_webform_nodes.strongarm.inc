<?php
/**
 * @file
 * pw_webform_nodes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_webform_nodes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_mysql_views_views';
  $strongarm->value = array(
    10508 => 'webform_views_untersttzen_sie_abgeordnetenwatchde',
  );
  $export['webform_mysql_views_views'] = $strongarm;

  return $export;
}
