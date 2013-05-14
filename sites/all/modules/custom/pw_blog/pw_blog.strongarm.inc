<?php
/**
 * @file
 * pw_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_blogpost';
  $strongarm->value = '2';
  $export['comment_anonymous_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_blogpost';
  $strongarm->value = '2';
  $export['comment_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_blogpost';
  $strongarm->value = 1;
  $export['comment_default_mode_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_blogpost';
  $strongarm->value = '50';
  $export['comment_default_per_page_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_blogpost';
  $strongarm->value = 1;
  $export['comment_form_location_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_blogpost';
  $strongarm->value = '0';
  $export['comment_preview_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_blogpost';
  $strongarm->value = 0;
  $export['comment_subject_field_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_any_force';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_any_force'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_any_restricts';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_any_restricts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_negative_display';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_criteria_negative_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_negative_label';
  $strongarm->value = 'Containing none of the words';
  $export['custom_search_blocks_1_criteria_negative_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_negative_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_criteria_negative_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_negative_weight';
  $strongarm->value = '8';
  $export['custom_search_blocks_1_criteria_negative_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_or_display';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_criteria_or_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_or_label';
  $strongarm->value = 'Containing any of the words';
  $export['custom_search_blocks_1_criteria_or_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_or_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_criteria_or_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_or_weight';
  $strongarm->value = '6';
  $export['custom_search_blocks_1_criteria_or_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_phrase_display';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_criteria_phrase_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_phrase_label';
  $strongarm->value = 'Containing the phrase';
  $export['custom_search_blocks_1_criteria_phrase_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_phrase_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_criteria_phrase_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_criteria_phrase_weight';
  $strongarm->value = '7';
  $export['custom_search_blocks_1_criteria_phrase_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_custom_paths_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_custom_paths_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_custom_paths_weight';
  $strongarm->value = '9';
  $export['custom_search_blocks_1_custom_paths_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_image_path';
  $strongarm->value = 'public://custom_search/ic_search_0.png';
  $export['custom_search_blocks_1_image_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_label';
  $strongarm->value = 'Search this site';
  $export['custom_search_blocks_1_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_label_visibility';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_max_length';
  $strongarm->value = '128';
  $export['custom_search_blocks_1_max_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_node_types';
  $strongarm->value = array(
    'article' => 0,
    'page' => 0,
    'migrate_example_beer' => 0,
    'blogpost' => 0,
    'dialogue' => 0,
    'migrate_extras_media_example' => 0,
    'migrate_example_pathauto' => 0,
    'pw_poll' => 0,
    'press_release' => 0,
    'press_article' => 0,
    'slider_item' => 0,
    'trustee' => 0,
    'webform' => 0,
    'migrate_example_wine' => 0,
    'migrate_example_producer' => 0,
    'migrate_example_baseball' => 0,
  );
  $export['custom_search_blocks_1_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_node_types_excluded';
  $strongarm->value = array(
    'article' => 'article',
    'page' => 'page',
    'migrate_example_beer' => 'migrate_example_beer',
    'dialogue' => 'dialogue',
    'migrate_extras_media_example' => 'migrate_extras_media_example',
    'migrate_example_pathauto' => 'migrate_example_pathauto',
    'pw_poll' => 'pw_poll',
    'press_release' => 'press_release',
    'press_article' => 'press_article',
    'slider_item' => 'slider_item',
    'trustee' => 'trustee',
    'webform' => 'webform',
    'migrate_example_wine' => 'migrate_example_wine',
    'migrate_example_producer' => 'migrate_example_producer',
    'migrate_example_baseball' => 'migrate_example_baseball',
    'blogpost' => 0,
  );
  $export['custom_search_blocks_1_node_types_excluded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_order';
  $strongarm->value = array(
    'search_box' => array(
      'sort' => '-1',
      'region' => 'block',
    ),
    'criteria_or' => array(
      'sort' => '6',
      'region' => 'block',
    ),
    'criteria_phrase' => array(
      'sort' => '7',
      'region' => 'block',
    ),
    'criteria_negative' => array(
      'sort' => '8',
      'region' => 'block',
    ),
    'custom_paths' => array(
      'sort' => '9',
      'region' => 'block',
    ),
    'submit_button' => array(
      'sort' => '10',
      'region' => 'block',
    ),
    'content_types' => array(
      'sort' => '0',
      'region' => 'block',
    ),
  );
  $export['custom_search_blocks_1_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_other';
  $strongarm->value = array(
    'ds_search' => 'ds_search',
    'user' => 0,
  );
  $export['custom_search_blocks_1_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_paths';
  $strongarm->value = '';
  $export['custom_search_blocks_1_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_paths_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_1_paths_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_paths_selector_label';
  $strongarm->value = 'Customize your search';
  $export['custom_search_blocks_1_paths_selector_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_paths_selector_label_visibility';
  $strongarm->value = 1;
  $export['custom_search_blocks_1_paths_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_search_box_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_search_box_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_search_box_weight';
  $strongarm->value = '-1';
  $export['custom_search_blocks_1_search_box_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_size';
  $strongarm->value = '15';
  $export['custom_search_blocks_1_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_submit_button_region';
  $strongarm->value = 'block';
  $export['custom_search_blocks_1_submit_button_region'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_submit_button_weight';
  $strongarm->value = '10';
  $export['custom_search_blocks_1_submit_button_weight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_submit_text';
  $strongarm->value = 'Search';
  $export['custom_search_blocks_1_submit_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_text';
  $strongarm->value = 'Search blog';
  $export['custom_search_blocks_1_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_type_selector';
  $strongarm->value = 'select';
  $export['custom_search_blocks_1_type_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_type_selector_all';
  $strongarm->value = '-Any-';
  $export['custom_search_blocks_1_type_selector_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_type_selector_label';
  $strongarm->value = 'Search for';
  $export['custom_search_blocks_1_type_selector_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'custom_search_blocks_1_type_selector_label_visibility';
  $strongarm->value = 0;
  $export['custom_search_blocks_1_type_selector_label_visibility'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__blogpost';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'colorbox' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_blogpost';
  $strongarm->value = '2';
  $export['language_content_type_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_blogpost';
  $strongarm->value = array();
  $export['menu_options_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_blogpost';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blogpost';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_blogpost';
  $strongarm->value = '1';
  $export['node_preview_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_blogpost';
  $strongarm->value = 1;
  $export['node_submitted_blogpost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blogpost_pattern';
  $strongarm->value = 'blog/[node:created:custom:Y-m-d]/[node:title]';
  $export['pathauto_node_blogpost_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagadelic_block_tags_13';
  $strongarm->value = '12';
  $export['tagadelic_block_tags_13'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagadelic_levels';
  $strongarm->value = '6';
  $export['tagadelic_levels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagadelic_page_amount';
  $strongarm->value = '60';
  $export['tagadelic_page_amount'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagadelic_sort_order';
  $strongarm->value = 'random,none';
  $export['tagadelic_sort_order'] = $strongarm;

  return $export;
}
