<?php
/**
 * @file
 * pw_newsletter.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_newsletter_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|newsletter|default';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metainformation',
    'weight' => '2',
    'children' => array(
      0 => 'field_blogpost_categories',
      1 => 'field_politician',
      2 => 'sharebuttons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metainformation',
      'instance_settings' => array(
        'classes' => 'push-bottom-m medium group-meta field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_newsletter_full_group_meta',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_meta|node|newsletter|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|newsletter|teaser';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'newsletter';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_teaser_image',
      2 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => 'clearfix push-bottom-s group-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_newsletter_teaser_group_wrapper',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper|node|newsletter|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metainformation');
  t('Wrapper');

  return $field_groups;
}
