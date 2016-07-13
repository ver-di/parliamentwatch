<?php
/**
 * @file
 * pw_press.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_press_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grid_6|node|press_article|search_result';
  $field_group->group_name = 'group_grid_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_article';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grid 6 Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_press_article_attachment',
      1 => 'field_press_article_link',
      2 => 'field_press_article_publisher',
      3 => 'field_press_article_video',
      4 => 'field_press_article_sound',
      5 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Grid 6 Wrapper',
      'instance_settings' => array(
        'classes' => 'grid-6 omega group-grid-6 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_press_article_search_result_group_grid_6',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grid_6|node|press_article|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grid_6|node|press_release|search_result';
  $field_group->group_name = 'group_grid_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'press_release';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grid 6 Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'node_link',
      2 => 'search_snippet',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Grid 6 Wrapper',
      'instance_settings' => array(
        'classes' => 'grid-6 omega group-grid-6 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_press_release_search_result_group_grid_6',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grid_6|node|press_release|search_result'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Grid 6 Wrapper');

  return $field_groups;
}
