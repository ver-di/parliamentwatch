<?php
/**
 * @file
 * pw_user_revision_switch.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_user_revision_switch_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_revision_switch';
  $ds_field->label = 'User Revision Switch';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|pw_user_revision_switch-block_1',
    'block_render' => '1',
  );
  $export['user_revision_switch'] = $ds_field;

  return $export;
}
