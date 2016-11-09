<?php
/**
 * @file
 * pw_frontpage_header.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_frontpage_header_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_frontpage_header_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_frontpage_header_node_info() {
  $items = array(
    'frontpage_header' => array(
      'name' => t('Frontpage Header'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
