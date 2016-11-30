<?php
/**
 * @file
 * pw_globals.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_globals_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'candidate_header';
  $ds_field->label = 'Candidate Header';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="candidate-header">
<div class="row">
    <div class="col-xs-12">
        <img src="[user:field-user-parliament:field_parliament_logo]" alt="[user:field-user-parliament:name]" class="img-responsive pull-right candidate-detail-logo">
        <a href="#" class="back-button"><i class="fa fa-angle-left"></i></a>
    </div>
</div>
</div>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['candidate_header'] = $ds_field;

  return $export;
}
