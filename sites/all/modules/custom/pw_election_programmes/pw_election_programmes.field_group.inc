<?php
/**
 * @file
 * pw_election_programmes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_election_programmes_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_6|node|election_programme|default';
  $field_group->group_name = 'group_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'election_programme';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grid 6 Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_election_programme_open',
      1 => 'field_pdf_download',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Grid 6 Wrapper',
      'instance_settings' => array(
        'classes' => 'grid-6 omega group-6 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_election_programme_full_group_6',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_6|node|election_programme|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grid_6|node|election_programme|search_result';
  $field_group->group_name = 'group_grid_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'election_programme';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grid 6 Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_election_programme_open',
      1 => 'field_pdf_download',
      2 => 'title',
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
        'id' => 'node_election_programme_search_result_group_grid_6',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grid_6|node|election_programme|search_result'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Grid 6 Wrapper');

  return $field_groups;
}
