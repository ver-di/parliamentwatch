<?php
/**
 * @file
 * pw_globals.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_globals_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_arrow_wrapper|node|page|search_result';
  $field_group->group_name = 'group_arrow_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Arrow Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'title',
      1 => 'node_link',
      2 => 'search_snippet',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Arrow Wrapper',
      'instance_settings' => array(
        'classes' => 'arrow-item',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_arrow_wrapper|node|page|search_result'] = $field_group;

  return $export;
}
