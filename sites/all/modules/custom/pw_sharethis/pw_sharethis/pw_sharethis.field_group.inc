<?php
/**
 * @file
 * pw_sharethis.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_sharethis_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_admin|user|user|form';
  $field_group->group_name = 'group_user_admin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin Settings',
    'weight' => '15',
    'children' => array(
      0 => 'field_user_first_letter_lname',
      1 => 'field_user_external_url',
      2 => 'field_user_roles_for_view_mode_s',
      3 => 'field_share_sum',
      4 => 'ckeditor',
      5 => 'piwik',
      6 => 'redirect',
      7 => 'timezone',
      8 => 'xmlsitemap',
      9 => 'locale',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Admin Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_user_admin|user|user|form'] = $field_group;

  return $export;
}
