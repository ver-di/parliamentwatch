<?php
/**
 * @file
 * pw_dialogues.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_dialogues_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dialouge_answer_info|node|dialogue|teaser';
  $field_group->group_name = 'group_dialouge_answer_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dialogue';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_dialouge_answer';
  $field_group->data = array(
    'label' => 'Dialouge Answer Info',
    'weight' => '22',
    'children' => array(
      0 => 'field_dialogue_recipient',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Dialouge Answer Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'small',
        'element' => 'p',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_dialouge_answer_info|node|dialogue|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dialouge_answer|node|dialogue|teaser';
  $field_group->group_name = 'group_dialouge_answer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dialogue';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_dialouge_question';
  $field_group->data = array(
    'label' => 'Dialouge Answer',
    'weight' => '3',
    'children' => array(
      0 => 'field_dialogue_annotation',
      1 => 'group_dialouge_answer_info',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Dialouge Answer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'question-item-answer',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_dialouge_answer|node|dialogue|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dialouge_question_info|node|dialogue|teaser';
  $field_group->group_name = 'group_dialouge_question_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dialogue';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_dialouge_question';
  $field_group->data = array(
    'label' => 'Dialouge Question Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_dialogue_sender_name',
      1 => 'post_date',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Dialouge Question Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'small',
        'element' => 'p',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_dialouge_question_info|node|dialogue|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dialouge_question|node|dialogue|teaser';
  $field_group->group_name = 'group_dialouge_question';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dialogue';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dialouge Question',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'group_dialouge_question_info',
      2 => 'group_dialouge_answer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Dialouge Question',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'question-item',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_dialouge_question|node|dialogue|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grid_6|node|dialogue|search_result';
  $field_group->group_name = 'group_grid_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dialogue';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grid 6 Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_dialogue_recipient',
      1 => 'node_link',
      2 => 'search_snippet',
      3 => 'group_sender',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Grid 6 Wrapper',
      'instance_settings' => array(
        'classes' => 'grid-6 omega group-grid-6 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_dialogue_search_result_group_grid_6',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grid_6|node|dialogue|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sender|node|dialogue|search_result';
  $field_group->group_name = 'group_sender';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dialogue';
  $field_group->mode = 'search_result';
  $field_group->parent_name = 'group_grid_6';
  $field_group->data = array(
    'label' => 'Sender Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_dialogue_sender_name',
      1 => 'field_dialogue_topic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sender Wrapper',
      'instance_settings' => array(
        'classes' => 'push-bottom-s group-sender field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_dialogue_search_result_group_sender',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sender|node|dialogue|search_result'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dialouge Answer');
  t('Dialouge Answer Info');
  t('Dialouge Question');
  t('Dialouge Question Info');
  t('Grid 6 Wrapper');
  t('Sender Wrapper');

  return $field_groups;
}
