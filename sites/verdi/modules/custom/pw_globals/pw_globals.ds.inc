<?php
/**
 * @file
 * pw_globals.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_globals_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|parliaments|parliament_logo';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'parliaments';
  $ds_fieldsetting->view_mode = 'parliament_logo';
  $ds_fieldsetting->settings = array(
    'field_parliament_logo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'question-teaser-item-head-brand',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['taxonomy_term|parliaments|parliament_logo'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_globals_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'candidate_header';
  $ds_field->label = 'Candidate Header Profile';
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
        <div class="candidate-detail-logo-wrapper"><img src="[user:field-user-parliament:field_parliament_logo]" alt="[user:field-user-parliament:name]" class="img-responsive candidate-detail-logo"></div>
        <a href="[site:url]" class="back-button"><i class="fa fa-angle-left"></i> <span>Zur Übersicht</span></a>
    </div>
</div>
</div>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['candidate_header'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'candidate_header_question';
  $ds_field->label = 'Candidate Header Question';
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
        <div class="candidate-detail-logo-wrapper"><img src="[user:field-user-parliament:field_parliament_logo]" alt="[user:field-user-parliament:name]" class="img-responsive candidate-detail-logo"></div>
        <a href="[user:url]" class="back-button"><i class="fa fa-angle-left"></i> <span>Zum Kandidaten</span></a>
    </div>
</div>
</div>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['candidate_header_question'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'linked_user_name';
  $ds_field->label = 'Linked User-Name';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[user:url]" title="Zum Profil von [user:field_user_fname] [user:field_user_lname]">[user:field_user_fname] [user:field_user_lname]</a>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['linked_user_name'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_globals_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|parliaments|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'parliaments';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_parliament_logo',
        1 => 'description',
      ),
    ),
    'fields' => array(
      'field_parliament_logo' => 'ds_content',
      'description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|parliaments|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|parliaments|parliament_logo';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'parliaments';
  $ds_layout->view_mode = 'parliament_logo';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_parliament_logo',
      ),
    ),
    'fields' => array(
      'field_parliament_logo' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|parliaments|parliament_logo'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pw_globals_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'parliament_logo';
  $ds_view_mode->label = 'Parliament Logo';
  $ds_view_mode->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['parliament_logo'] = $ds_view_mode;

  return $export;
}
