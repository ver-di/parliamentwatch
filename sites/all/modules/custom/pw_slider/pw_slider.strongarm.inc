<?php
/**
 * @file
 * pw_slider.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_slider_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_pw_slider';
  $strongarm->value = '0';
  $export['comment_anonymous_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_pw_slider';
  $strongarm->value = 1;
  $export['comment_default_mode_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_pw_slider';
  $strongarm->value = '50';
  $export['comment_default_per_page_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_pw_slider';
  $strongarm->value = 1;
  $export['comment_form_location_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_pw_slider';
  $strongarm->value = '1';
  $export['comment_preview_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_pw_slider';
  $strongarm->value = '1';
  $export['comment_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_pw_slider';
  $strongarm->value = 1;
  $export['comment_subject_field_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_pw_slider';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_pw_slider';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_pw_slider';
  $strongarm->value = '2';
  $export['language_content_type_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_pw_slider';
  $strongarm->value = array();
  $export['menu_options_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_pw_slider';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_pw_slider';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_pw_slider';
  $strongarm->value = '1';
  $export['node_preview_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_pw_slider';
  $strongarm->value = 0;
  $export['node_submitted_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pw_slider_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pw_slider_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pw_slider_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_pw_slider_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_display_pw_slider';
  $strongarm->value = '0';
  $export['siblingmenutree_display_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_enable_pw_slider';
  $strongarm->value = 0;
  $export['siblingmenutree_enable_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_title_pw_slider';
  $strongarm->value = '';
  $export['siblingmenutree_title_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'siblingmenutree_weight_pw_slider';
  $strongarm->value = '0';
  $export['siblingmenutree_weight_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_display_pw_slider';
  $strongarm->value = '0';
  $export['submenutree_display_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_enable_pw_slider';
  $strongarm->value = 0;
  $export['submenutree_enable_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_node_type_pw_slider';
  $strongarm->value = '0';
  $export['submenutree_node_type_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_title_pw_slider';
  $strongarm->value = '';
  $export['submenutree_title_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'submenutree_weight_pw_slider';
  $strongarm->value = '0';
  $export['submenutree_weight_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_default_pw_slider';
  $strongarm->value = '0';
  $export['weight_default_pw_slider'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'weight_menu_pw_slider';
  $strongarm->value = '0';
  $export['weight_menu_pw_slider'] = $strongarm;

  return $export;
}
