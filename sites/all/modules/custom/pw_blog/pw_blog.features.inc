<?php
/**
 * @file
 * pw_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_blog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_blog_node_info() {
  $items = array(
    'blogpost' => array(
      'name' => t('Blogpost'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function pw_blog_weight_features_default_settings() {
  $settings = array();

  $settings['blogpost'] = array(
    'enabled' => '0',
    'range' => '20',
    'menu_weight' => '0',
    'default' => '0',
    'sync_translations' => '0',
  );

  return $settings;
}
