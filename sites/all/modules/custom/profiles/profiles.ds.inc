<?php
/**
 * @file
 * profiles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function profiles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'polls_archive_view' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'polls_profile_last' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'question_form' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'qa_asking_anchor' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'qa_link_counter' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'questions_and_answers' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_constituency' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item field-name-field-user-constituency clearfix',
      ),
    ),
    'field_user_fname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_job_skills' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item field-name-field-user-job-skills clearfix even',
      ),
    ),
    'field_user_lname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_parliament' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => '',
      ),
    ),
    'field_user_party' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_picture' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'file-image float-left push-bottom-l',
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function profiles_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'polls_archive_view';
  $ds_field->label = 'Polls archive view';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|polls_profile-block',
    'block_render' => '1',
  );
  $export['polls_archive_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'polls_profile_last';
  $ds_field->label = 'Polls profile last';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|polls_profile-last',
    'block_render' => '1',
  );
  $export['polls_profile_last'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'question_form';
  $ds_field->label = 'Question form';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'webform|client-block-17',
    'block_render' => '1',
  );
  $export['question_form'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function profiles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'polls_archive_view',
        1 => 'field_user_picture',
        2 => 'polls_profile_last',
        3 => 'group_user_name',
        4 => 'group_user_commitee_tab',
        5 => 'field_user_parliament',
        6 => 'field_user_fname',
        7 => 'field_user_lname',
        8 => 'group_audience',
        9 => 'qa_asking_anchor',
        10 => 'field_user_commitee',
        11 => 'field_user_party',
        12 => 'field_user_political_roles',
        13 => 'qa_link_counter',
        14 => 'group_basics',
        15 => 'group_polls',
        16 => 'questions_and_answers',
        17 => 'group_user_commitee',
        18 => 'group_user_polls',
        19 => 'question_form',
        20 => 'field_user_more',
        21 => 'group_roles',
        22 => 'group_user_basics',
        23 => 'group_user_basics_basics',
        24 => 'field_user_job_skills',
        25 => 'field_user_constituency',
        26 => 'group_user_basics_additional',
        27 => 'group_user_polls_last',
        28 => 'group_user_polls_archive',
      ),
    ),
    'fields' => array(
      'polls_archive_view' => 'ds_content',
      'field_user_picture' => 'ds_content',
      'polls_profile_last' => 'ds_content',
      'group_user_name' => 'ds_content',
      'group_user_commitee_tab' => 'ds_content',
      'field_user_parliament' => 'ds_content',
      'field_user_fname' => 'ds_content',
      'field_user_lname' => 'ds_content',
      'group_audience' => 'ds_content',
      'qa_asking_anchor' => 'ds_content',
      'field_user_commitee' => 'ds_content',
      'field_user_party' => 'ds_content',
      'field_user_political_roles' => 'ds_content',
      'qa_link_counter' => 'ds_content',
      'group_basics' => 'ds_content',
      'group_polls' => 'ds_content',
      'questions_and_answers' => 'ds_content',
      'group_user_commitee' => 'ds_content',
      'group_user_polls' => 'ds_content',
      'question_form' => 'ds_content',
      'field_user_more' => 'ds_content',
      'group_roles' => 'ds_content',
      'group_user_basics' => 'ds_content',
      'group_user_basics_basics' => 'ds_content',
      'field_user_job_skills' => 'ds_content',
      'field_user_constituency' => 'ds_content',
      'group_user_basics_additional' => 'ds_content',
      'group_user_polls_last' => 'ds_content',
      'group_user_polls_archive' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}
