<?php
/**
 * @file
 * pw_calendar_entries.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_calendar_entries_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'calendar_entries_political_roles';
  $ds_field->label = 'Calendar Entries Political Roles';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|36d901285357fe94e63faa7578669d10',
    'block_render' => '1',
  );
  $export['calendar_entries_political_roles'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'calendar_entries_sidejobs';
  $ds_field->label = 'Calendar Entries Sidejobs';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|pw_calendar_entries-sidejobs',
    'block_render' => '1',
  );
  $export['calendar_entries_sidejobs'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'calendar_entries_speeches';
  $ds_field->label = 'Calendar Entries Speeches';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|pw_calendar_entries-speeches',
    'block_render' => '1',
  );
  $export['calendar_entries_speeches'] = $ds_field;

  return $export;
}
