<?php
/**
 * @file
 * pw_poll.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_poll_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|poll|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'poll';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_blogpost_categories' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_parliament' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_poll_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|poll|teaser'] = $ds_fieldsetting;

  return $export;
}
