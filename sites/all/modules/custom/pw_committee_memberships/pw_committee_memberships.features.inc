<?php
/**
 * @file
 * pw_committee_memberships.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_committee_memberships_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_committee_memberships_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_committee_memberships_node_info() {
  $items = array(
    'cm_calendar_entry' => array(
      'name' => t('CM Calendar Entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
