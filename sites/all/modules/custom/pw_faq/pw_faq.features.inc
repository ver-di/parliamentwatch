<?php
/**
 * @file
 * pw_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_faq_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_faq_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_faq_node_info() {
  $items = array(
    'faq_item' => array(
      'name' => t('FAQ-Element'),
      'base' => 'node_content',
      'description' => t('Adds a new question/answer to the faq-section of this page.'),
      'has_title' => '1',
      'title_label' => t('Frage'),
      'help' => '',
    ),
  );
  return $items;
}
