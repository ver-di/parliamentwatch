<?php
/**
 * @file
 * pw_poll.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_poll_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grid_6|node|poll|search_result';
  $field_group->group_name = 'group_grid_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'poll';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grid 6 Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_parliament',
      1 => 'title',
      2 => 'node_link',
      3 => 'search_snippet',
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
        'id' => 'node_poll_search_result_group_grid_6',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grid_6|node|poll|search_result'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Grid 6 Wrapper');

  return $field_groups;
}
