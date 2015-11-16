<?php
/**
 * @file
 * pw_dialogues.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_dialogues_ds_field_settings_info() {
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
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:12:"link_to_view";i:0;s:9:"use_pager";i:0;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:1:"1";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:38:"profile_questions_answers-full_content";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
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
    'question_form' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="pw_block_user_questionform"',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'dialogue_full_content' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:12:"link_to_view";i:0;s:9:"use_pager";i:0;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:1:"1";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:38:"profile_questions_answers-full_content";}',
        'load_terms' => 1,
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'short_profile_dialogue' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dialogue|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dialogue';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read complete question and answer',
        'wrapper' => 'span',
        'class' => 'read-more',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'text-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_date_only_short',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'grid-2 alpha',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'arrow-item',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'search_snippet' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'push-bottom-s',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
    ),
    'field_dialogue_recipient' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Question to',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_dialogue_sender_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'von  ',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'light',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
        ),
      ),
    ),
    'field_dialogue_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => '  zum Thema  ',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'light',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|dialogue|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_dialogues_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dialogue_full_content';
  $ds_field->label = 'Dialogue full content';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
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
  $export['dialogue_full_content'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'short_profile_dialogue';
  $ds_field->label = 'Short profile dialogue';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|bdbf278faddbdf4cc4ddd6543ed40cb5',
    'block_render' => '1',
  );
  $export['short_profile_dialogue'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_dialogues_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dialogue|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dialogue';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'question_and_answer_colorbox',
      ),
    ),
    'fields' => array(
      'question_and_answer_colorbox' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
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
    'regions' => array(
      'ds_content' => array(
        0 => 'short_profile_dialogue',
        1 => 'dialogue_full_content',
      ),
      'ds_hidden' => array(
        2 => 'question_form',
      ),
    ),
    'fields' => array(
      'short_profile_dialogue' => 'ds_content',
      'dialogue_full_content' => 'ds_content',
      'question_form' => 'ds_hidden',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dialogue|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dialogue';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'post_date',
        1 => 'field_dialogue_recipient',
        2 => 'group_grid_6',
        3 => 'group_sender',
        4 => 'field_dialogue_sender_name',
        5 => 'field_dialogue_topic',
        6 => 'search_snippet',
        7 => 'node_link',
      ),
    ),
    'fields' => array(
      'post_date' => 'ds_content',
      'field_dialogue_recipient' => 'ds_content',
      'group_grid_6' => 'ds_content',
      'group_sender' => 'ds_content',
      'field_dialogue_sender_name' => 'ds_content',
      'field_dialogue_topic' => 'ds_content',
      'search_snippet' => 'ds_content',
      'node_link' => 'ds_content',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['node|dialogue|search_result'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pw_dialogues_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_dialogue_search_snippet';
  $ds_view_mode->label = 'User dialogue search snippet';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_dialogue_search_snippet'] = $ds_view_mode;

  return $export;
}
