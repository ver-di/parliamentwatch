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
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'polls_profile_last' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
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
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'float-left',
      ),
    ),
    'question_and_answers_filter' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'question_and_answers_pane' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'question_form' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_user_fname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_job_skills' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'label-inline',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item clearfix even',
      ),
    ),
    'field_user_lname' => array(
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
    'field_user_constituency' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item clearfix odd',
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
    'group_polls' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'group_user_polls_archive' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'group_user_polls_last' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'group_user_polls' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

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
        1 => 'group_user_polls',
        2 => 'group_user_commitee_tab',
        3 => 'field_user_picture',
        4 => 'field_user_fname',
        5 => 'group_user_name',
        6 => 'field_user_lname',
        7 => 'field_user_parliament',
        8 => 'qa_asking_anchor',
        9 => 'field_user_commitee',
        10 => 'field_user_party',
        11 => 'qa_link_counter',
        12 => 'field_user_political_roles',
        13 => 'group_basics',
        14 => 'group_roles',
        15 => 'group_user_basics',
        16 => 'group_polls',
        17 => 'group_user_commitee',
        18 => 'question_and_answers_filter',
        19 => 'polls_profile_last',
        20 => 'field_user_more',
        21 => 'question_and_answers_pane',
        22 => 'question_form',
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
      'group_user_polls' => 'ds_content',
      'group_user_commitee_tab' => 'ds_content',
      'field_user_picture' => 'ds_content',
      'field_user_fname' => 'ds_content',
      'group_user_name' => 'ds_content',
      'field_user_lname' => 'ds_content',
      'field_user_parliament' => 'ds_content',
      'qa_asking_anchor' => 'ds_content',
      'field_user_commitee' => 'ds_content',
      'field_user_party' => 'ds_content',
      'qa_link_counter' => 'ds_content',
      'field_user_political_roles' => 'ds_content',
      'group_basics' => 'ds_content',
      'group_roles' => 'ds_content',
      'group_user_basics' => 'ds_content',
      'group_polls' => 'ds_content',
      'group_user_commitee' => 'ds_content',
      'question_and_answers_filter' => 'ds_content',
      'polls_profile_last' => 'ds_content',
      'field_user_more' => 'ds_content',
      'question_and_answers_pane' => 'ds_content',
      'question_form' => 'ds_content',
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
