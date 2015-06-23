<?php
/**
 * @file
 * pw_poll.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_poll_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_poll_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_poll_node_info() {
  $items = array(
    'poll' => array(
      'name' => t('Poll'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
