<?php
/**
 * @file
 * pw_kandidatencheck.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_kandidatencheck_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pw_kandidatencheck';
  $ds_field->label = 'PW Kandidatencheck';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['pw_kandidatencheck'] = $ds_field;

  return $export;
}
