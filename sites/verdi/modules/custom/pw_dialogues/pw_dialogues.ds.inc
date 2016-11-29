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
  $ds_fieldsetting->id = 'comment|comment_node_dialogue|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_dialogue';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_dialogue_documents' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Anhang',
          'lb-el' => 'h2',
        ),
      ),
    ),
  );
  $export['comment|comment_node_dialogue|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dialogue|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dialogue';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'dialogues_arrow_navigation' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'dialogues_asked' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'comments' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h1',
          'fi-cl' => 'blockquote',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_dialogue_recipient' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_dialogue_sender_name' => array(
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
  $ds_fieldsetting->id = 'node|dialogue|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dialogue';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'button_dialogue' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'text-serif',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_dialogue_annotation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => 'text-serif',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_dialogue_recipient' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_dialogue_sender_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|dialogue|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_dialogues_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'button_dialogue';
  $ds_field->label = 'Button Dialogue';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[node:url]" class="btn btn-primary">Details anzeigen</a>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['button_dialogue'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dialogues_arrow_navigation';
  $ds_field->label = 'Dialogues Arrow Navigation';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a class="question-intro-control question-intro-prev hidden-xs"><i class="fa fa-angle-left"></i></a>
<a class="question-intro-control question-intro-next hidden-xs"><i class="fa fa-angle-right"></i></a>',
      'format' => 'php_code',
    ),
    'use_token' => 0,
  );
  $export['dialogues_arrow_navigation'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dialogues_asked';
  $ds_field->label = 'Dialogues Asked (date)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => ' fragte am [node:created:short]',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['dialogues_asked'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pw_dialogue_questions_block';
  $ds_field->label = 'PW Dialogue Questions Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|pw_dialogue_questions-block',
    'block_render' => '3',
  );
  $export['pw_dialogue_questions_block'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_dialogues_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_dialogue|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_dialogue';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_dialogue_recipient',
        1 => 'field_dialogue_comment_body',
        2 => 'field_dialogue_documents',
      ),
    ),
    'fields' => array(
      'field_dialogue_recipient' => 'ds_content',
      'field_dialogue_comment_body' => 'ds_content',
      'field_dialogue_documents' => 'ds_content',
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
  $export['comment|comment_node_dialogue|default'] = $ds_layout;

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
        0 => 'field_dialogue_recipient',
        1 => 'comments',
        2 => 'group_question_intro',
        3 => 'group_question_answer',
        4 => 'group_question_intro_submitted',
        5 => 'body',
        6 => 'dialogues_arrow_navigation',
        7 => 'field_dialogue_sender_name',
        8 => 'dialogues_asked',
      ),
    ),
    'fields' => array(
      'field_dialogue_recipient' => 'ds_content',
      'comments' => 'ds_content',
      'group_question_intro' => 'ds_content',
      'group_question_answer' => 'ds_content',
      'group_question_intro_submitted' => 'ds_content',
      'body' => 'ds_content',
      'dialogues_arrow_navigation' => 'ds_content',
      'field_dialogue_sender_name' => 'ds_content',
      'dialogues_asked' => 'ds_content',
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
  $export['node|dialogue|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dialogue|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dialogue';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_dialouge_question',
        1 => 'group_dialouge_question_info',
        2 => 'body',
        3 => 'field_dialogue_sender_name',
        4 => 'post_date',
        5 => 'group_dialouge_answer',
        6 => 'button_dialogue',
        7 => 'field_dialogue_recipient',
        8 => 'group_dialouge_answer_info',
        9 => 'field_dialogue_annotation',
      ),
    ),
    'fields' => array(
      'group_dialouge_question' => 'ds_content',
      'group_dialouge_question_info' => 'ds_content',
      'body' => 'ds_content',
      'field_dialogue_sender_name' => 'ds_content',
      'post_date' => 'ds_content',
      'group_dialouge_answer' => 'ds_content',
      'button_dialogue' => 'ds_content',
      'field_dialogue_recipient' => 'ds_content',
      'group_dialouge_answer_info' => 'ds_content',
      'field_dialogue_annotation' => 'ds_content',
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
  $export['node|dialogue|teaser'] = $ds_layout;

  return $export;
}
