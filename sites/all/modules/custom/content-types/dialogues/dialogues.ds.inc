<?php
/**
 * @file
 * dialogues.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function dialogues_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dialogue|colorbox';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dialogue';
  $ds_fieldsetting->view_mode = 'colorbox';
  $ds_fieldsetting->settings = array(
    'question_and_answer_colorbox' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:1:"4";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_2";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:25:"profile_questions_answers";}',
        'load_terms' => 1,
      ),
    ),
  );
  $export['node|dialogue|colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dialogue|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dialogue';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'question_and_answer_full_content' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|dialogue|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dialogue|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dialogue';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'question_and_answer_full_content' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|dialogue|print'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function dialogues_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'question_and_answer_colorbox';
  $ds_field->label = 'Question and answer colorbox';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'comment' => 'comment',
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
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
  $export['question_and_answer_colorbox'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'question_and_answer_full_content';
  $ds_field->label = 'Question and answer full content';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'views|7db3831b093872af21a56d09f89f7dcf',
    'block_render' => '1',
  );
  $export['question_and_answer_full_content'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function dialogues_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dialogue|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dialogue';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'question_and_answer_colorbox',
      ),
    ),
    'fields' => array(
      'question_and_answer_colorbox' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|dialogue|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dialogue|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dialogue';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'question_and_answer_full_content',
      ),
    ),
    'fields' => array(
      'question_and_answer_full_content' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|dialogue|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dialogue|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dialogue';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'question_and_answer_full_content',
      ),
    ),
    'fields' => array(
      'question_and_answer_full_content' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|dialogue|print'] = $ds_layout;

  return $export;
}
