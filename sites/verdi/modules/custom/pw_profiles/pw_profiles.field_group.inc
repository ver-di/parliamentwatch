<?php
/**
 * @file
 * pw_profiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_profiles_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basics|user|user|default';
  $field_group->group_name = 'group_basics';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basics ID Wrapper',
    'weight' => '19',
    'children' => array(
      0 => 'group_user_basics',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Basics ID Wrapper',
      'instance_settings' => array(
        'classes' => 'add-sharethis clear-both group-basics field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'user_user_full_group_basics',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_basics|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_info_list|user|user|default';
  $field_group->group_name = 'group_candidate_info_list';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_tabs_info_row';
  $field_group->data = array(
    'label' => 'Info-List',
    'weight' => '14',
    'children' => array(
      0 => 'field_user_birthday',
      1 => 'field_user_commitee',
      2 => 'field_user_constituency',
      3 => 'field_user_fname',
      4 => 'field_user_fraction',
      5 => 'field_user_job_skills',
      6 => 'field_user_lname',
      7 => 'field_user_political_roles',
      8 => 'field_user_title',
      9 => 'field_verdi_fields',
      10 => 'field_verdi_regions',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Info-List',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-candidate-info-list field-group-html-element dl-horizontal dl-horizontal-list  col-xs-12 col-sm-8',
        'element' => 'dl',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_candidate_info_list|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_info_sidebar|user|user|default';
  $field_group->group_name = 'group_candidate_info_sidebar';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_tabs_info_row';
  $field_group->data = array(
    'label' => 'Candidate Tabs Info Sidebar',
    'weight' => '15',
    'children' => array(
      0 => 'field_user_links_more',
      1 => 'field_user_twitter_account',
      2 => 'twitter',
      3 => 'candidate_social_links',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Candidate Tabs Info Sidebar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-candidate-info-sidebar field-group-html-element col-xs-12 col-sm-4',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_candidate_info_sidebar|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_intro_info|user|user|default';
  $field_group->group_name = 'group_candidate_intro_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_intro_left';
  $field_group->data = array(
    'label' => 'Candidate Intro Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_list',
      1 => 'field_user_list_position',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Candidate Intro Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'p',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_candidate_intro_info|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_intro_left|user|user|default';
  $field_group->group_name = 'group_candidate_intro_left';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_intro_row';
  $field_group->data = array(
    'label' => 'Candidate Intro Left',
    'weight' => '45',
    'children' => array(
      0 => 'field_user_quote',
      1 => 'candidate_stats_questions_get',
      2 => 'group_candidate_intro_info',
      3 => 'group_user_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Candidate Intro Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-candidate-intro-left field-group-div col-xs-12 col-sm-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_candidate_intro_left|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_intro_right|user|user|default';
  $field_group->group_name = 'group_candidate_intro_right';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_intro_row';
  $field_group->data = array(
    'label' => 'Candidate Intro Right',
    'weight' => '44',
    'children' => array(
      0 => 'field_user_picture',
      1 => 'field_user_picture_copyright',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Candidate Intro Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-candidate-intro-right field-group-div col-xs-12 col-sm-4',
        'element' => 'figure',
        'show_label' => '0',
        'label_element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_candidate_intro_right|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_intro_row|user|user|default';
  $field_group->group_name = 'group_candidate_intro_row';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_intro';
  $field_group->data = array(
    'label' => 'Candidate Intro Row',
    'weight' => '43',
    'children' => array(
      0 => 'group_candidate_intro_left',
      1 => 'group_candidate_intro_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Candidate Intro Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-candidate-intro-row field-group-div row row-rtl',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_candidate_intro_row|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_intro|user|user|default';
  $field_group->group_name = 'group_candidate_intro';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Candidate Intro',
    'weight' => '1',
    'children' => array(
      0 => 'group_candidate_intro_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Candidate Intro',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-candidate-intro field-group-div candidate-intro',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_candidate_intro|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_slider_info|user|user|user_slider_item';
  $field_group->group_name = 'group_candidate_slider_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_slider_item';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Candidate Slider Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_list',
      1 => 'field_user_list_position',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Candidate Slider Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'p',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_candidate_slider_info|user|user|user_slider_item'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_tabs_info_row|user|user|default';
  $field_group->group_name = 'group_candidate_tabs_info_row';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_tabs_info';
  $field_group->data = array(
    'label' => 'Candidate Tabs Info Row',
    'weight' => '13',
    'children' => array(
      0 => 'group_candidate_info_list',
      1 => 'group_candidate_info_sidebar',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Candidate Tabs Info Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-candidate-tabs-info-row field-group-html-element row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_candidate_tabs_info_row|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_tabs_info|user|user|default';
  $field_group->group_name = 'group_candidate_tabs_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_tabs_wrapper';
  $field_group->data = array(
    'label' => 'Steckbrief',
    'weight' => '24',
    'children' => array(
      0 => 'group_candidate_tabs_info_row',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Steckbrief',
      'instance_settings' => array(
        'id' => 'tab_personal_description',
        'classes' => 'group-candidate-tabs-info field-group-htab tab-pane',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'h3',
        'attributes' => 'role="tabpanel"',
      ),
    ),
  );
  $field_groups['group_candidate_tabs_info|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_tabs_questions|user|user|default';
  $field_group->group_name = 'group_candidate_tabs_questions';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_tabs_wrapper';
  $field_group->data = array(
    'label' => 'Fragen & Antworten',
    'weight' => '23',
    'children' => array(
      0 => 'dialogues_profile',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Fragen & Antworten',
      'instance_settings' => array(
        'id' => 'tab_questions_answers',
        'classes' => 'group-candidate-tabs-questions field-group-htab tab-pane active',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'h3',
        'attributes' => 'role="tabpanel"',
      ),
    ),
  );
  $field_groups['group_candidate_tabs_questions|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_tabs_wrapper|user|user|default';
  $field_group->group_name = 'group_candidate_tabs_wrapper';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_tabs';
  $field_group->data = array(
    'label' => 'Candidate Tabs Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'group_candidate_tabs_info',
      1 => 'group_candidate_tabs_questions',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Candidate Tabs Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-candidate-tabs-wrapper field-group-div tab-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_candidate_tabs_wrapper|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_candidate_tabs|user|user|default';
  $field_group->group_name = 'group_candidate_tabs';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Candidate Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'candidate_tab_navigation',
      1 => 'group_candidate_tabs_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Candidate Tabs',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-candidate-tabs field-group-htabs candidate-detail-tabs',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_candidate_tabs|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grid_6|user|user|search_result';
  $field_group->group_name = 'group_grid_6';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grid 6 Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_answers_give',
      1 => 'field_user_fname',
      2 => 'field_user_lname',
      3 => 'field_user_questions_get',
      4 => 'field_user_parliament',
      5 => 'field_user_party',
      6 => 'field_user_title',
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
        'id' => 'user_user_search_result_group_grid_6',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grid_6|user|user|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_managed_content|user|user|form';
  $field_group->group_name = 'group_managed_content';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Managed Content',
    'weight' => '6',
    'children' => array(
      0 => 'field_user_gender',
      1 => 'field_user_picture_copyright',
      2 => 'field_user_question_form_closed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-managed-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_managed_content|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_premium|user|user|form';
  $field_group->group_name = 'group_premium';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Premium',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-premium field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_premium|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profiles_mouseover|user|user|pw_profiles_list_compact';
  $field_group->group_name = 'group_profiles_mouseover';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'pw_profiles_list_compact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mouseover',
    'weight' => '7',
    'children' => array(
      0 => 'field_user_commitee',
      1 => 'field_user_constituency',
      2 => 'field_user_parliament',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Mouseover',
      'instance_settings' => array(
        'classes' => ' group-profiles-mouseover field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'user_user_pw_profiles_list_compact_group_profiles_mouseover',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_profiles_mouseover|user|user|pw_profiles_list_compact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_roles|user|user|default';
  $field_group->group_name = 'group_roles';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Roles ID Wrapper',
    'weight' => '17',
    'children' => array(
      0 => 'group_user_commitee',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Roles ID Wrapper',
      'instance_settings' => array(
        'classes' => 'add-sharethis clear-both group-roles field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'user_user_full_group_roles',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_roles|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_admin|user|user|form';
  $field_group->group_name = 'group_user_admin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin Settings',
    'weight' => '8',
    'children' => array(
      0 => 'field_user_external_url',
      1 => 'field_user_first_letter_lname',
      2 => 'field_user_roles_for_view_mode_s',
      3 => 'ckeditor',
      4 => 'redirect',
      5 => 'timezone',
      6 => 'locale',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Admin Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-user-admin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_user_admin|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_affiliation|user|user|form';
  $field_group->group_name = 'group_user_affiliation';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Political Affiliation',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_commitee',
      1 => 'field_user_constituency_won',
      2 => 'field_user_election_result',
      3 => 'field_user_fraction',
      4 => 'field_user_joined',
      5 => 'field_user_list_won',
      6 => 'field_user_parliament',
      7 => 'field_user_party',
      8 => 'field_user_political_roles',
      9 => 'field_user_retired',
      10 => 'field_user_valid',
      11 => 'field_verdi_fields',
      12 => 'field_verdi_regions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Political Affiliation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-user-affiliation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_user_affiliation|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics_additional|user|user|default';
  $field_group->group_name = 'group_user_basics_additional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_basics';
  $field_group->data = array(
    'label' => 'Additional',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Additional',
      'instance_settings' => array(
        'classes' => ' group-user-basics-additional field-group-htab',
        'description' => 'Additional Links',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_user_basics_additional|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics_additional|user|user|user_deputy';
  $field_group->group_name = 'group_user_basics_additional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_deputy';
  $field_group->parent_name = 'group_user_basics';
  $field_group->data = array(
    'label' => 'User Basics Additional',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-basics-additional field-group-htab',
      ),
    ),
  );
  $field_groups['group_user_basics_additional|user|user|user_deputy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics_basics|user|user|default';
  $field_group->group_name = 'group_user_basics_basics';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_basics';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '13',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Basics',
      'instance_settings' => array(
        'classes' => ' group-user-basics-basics field-group-htab',
        'description' => 'Basic information',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_user_basics_basics|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics_data|user|user|user_deputy';
  $field_group->group_name = 'group_user_basics_data';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_deputy';
  $field_group->parent_name = 'group_user_basics';
  $field_group->data = array(
    'label' => 'User Basics Data',
    'weight' => '8',
    'children' => array(
      0 => 'field_user_constituency',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-basics-data field-group-htab',
      ),
    ),
  );
  $field_groups['group_user_basics_data|user|user|user_deputy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics|user|user|default';
  $field_group->group_name = 'group_user_basics';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_basics';
  $field_group->data = array(
    'label' => 'Basics',
    'weight' => '31',
    'children' => array(
      0 => 'group_user_basics_additional',
      1 => 'group_user_basics_basics',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-user-basics field-group-htabs',
      ),
    ),
  );
  $field_groups['group_user_basics|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_basics|user|user|user_deputy';
  $field_group->group_name = 'group_user_basics';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_deputy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Basics',
    'weight' => '56',
    'children' => array(
      0 => 'group_user_basics_additional',
      1 => 'group_user_basics_data',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-user-basics field-group-htabs',
      ),
    ),
  );
  $field_groups['group_user_basics|user|user|user_deputy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_commitee_tab|user|user|default';
  $field_group->group_name = 'group_user_commitee_tab';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_commitee';
  $field_group->data = array(
    'label' => 'Political Roles',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Political Roles',
      'instance_settings' => array(
        'classes' => ' group-user-commitee-tab field-group-htab',
        'description' => 'Political Roles',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_user_commitee_tab|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_commitee|user|user|default';
  $field_group->group_name = 'group_user_commitee';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_roles';
  $field_group->data = array(
    'label' => 'Commitee Fieldgroup',
    'weight' => '8',
    'children' => array(
      0 => 'group_user_commitee_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-user-commitee field-group-htabs',
      ),
    ),
  );
  $field_groups['group_user_commitee|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_dialogue|user|user|form';
  $field_group->group_name = 'group_user_dialogue';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dialogue Data',
    'weight' => '7',
    'children' => array(
      0 => 'field_user_answers_give',
      1 => 'field_user_qanda_ratio',
      2 => 'field_user_questions_get',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dialogue Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-user-dialogue field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_user_dialogue|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_name|user|user|default';
  $field_group->group_name = 'group_user_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_candidate_intro_left';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '1',
    'children' => array(
      0 => 'candidate_full_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Name',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-user-name field-group-div',
        'element' => 'h1',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_user_name|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_name|user|user|premium_user';
  $field_group->group_name = 'group_user_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'premium_user';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '58',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-user-name field-group-div',
        'id' => 'user_user_premium_user_group_user_name',
      ),
    ),
  );
  $field_groups['group_user_name|user|user|premium_user'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_name|user|user|user_search';
  $field_group->group_name = 'group_user_name';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_search';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User name',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_fname',
      1 => 'field_user_lname',
      2 => 'field_user_party',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User name',
      'instance_settings' => array(
        'classes' => 'h3 group-user-name field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'user_user_user_search_group_user_name',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_user_name|user|user|user_search'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_personal_data|user|user|form';
  $field_group->group_name = 'group_user_personal_data';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Data',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_age',
      1 => 'field_user_birthday',
      2 => 'field_user_childs',
      3 => 'field_user_constituency',
      4 => 'field_user_education',
      5 => 'field_user_fname',
      6 => 'field_user_job_skills',
      7 => 'field_user_list',
      8 => 'field_user_lname',
      9 => 'field_user_marriage_status',
      10 => 'field_user_phone',
      11 => 'field_user_picture',
      12 => 'field_user_pseudonym',
      13 => 'field_user_public_mail',
      14 => 'field_user_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => ' group-user-personal-data field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_user_personal_data|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_premium_about|user|user|form';
  $field_group->group_name = 'group_user_premium_about';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_premium';
  $field_group->data = array(
    'label' => 'About me',
    'weight' => '18',
    'children' => array(
      0 => 'field_user_about',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'About me',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-user-premium-about field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_user_premium_about|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_premium_fields|user|user|form';
  $field_group->group_name = 'group_user_premium_fields';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Fields',
    'weight' => '3',
    'children' => array(
      0 => 'field_user_links_more',
      1 => 'field_user_list_position',
      2 => 'field_user_quote',
      3 => 'group_user_premium',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => ' group-user-additional-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_user_premium_fields|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_premium_gallery|user|user|form';
  $field_group->group_name = 'group_user_premium_gallery';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_premium';
  $field_group->data = array(
    'label' => 'Image Gallery',
    'weight' => '20',
    'children' => array(
      0 => 'field_user_image_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-premium-gallery field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_premium_gallery|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_premium_goals|user|user|form';
  $field_group->group_name = 'group_user_premium_goals';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_premium';
  $field_group->data = array(
    'label' => 'Political Goals',
    'weight' => '21',
    'children' => array(
      0 => 'field_user_political_goals',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-premium-goals field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_premium_goals|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_premium_links|user|user|form';
  $field_group->group_name = 'group_user_premium_links';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_premium';
  $field_group->data = array(
    'label' => 'External Links',
    'weight' => '19',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-premium-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_premium_links|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_premium_picture|user|user|form';
  $field_group->group_name = 'group_user_premium_picture';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile picture',
    'weight' => '11',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-premium-picture field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_premium_picture|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_premium_twitter|user|user|form';
  $field_group->group_name = 'group_user_premium_twitter';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_premium';
  $field_group->data = array(
    'label' => 'Twitter',
    'weight' => '22',
    'children' => array(
      0 => 'field_user_twitter_account',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-premium-twitter field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_premium_twitter|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_premium|user|user|form';
  $field_group->group_name = 'group_user_premium';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_premium_fields';
  $field_group->data = array(
    'label' => 'Premium fields',
    'weight' => '62',
    'children' => array(
      0 => 'group_user_premium_about',
      1 => 'group_user_premium_gallery',
      2 => 'group_user_premium_goals',
      3 => 'group_user_premium_links',
      4 => 'group_user_premium_twitter',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-user-premium field-group-tabs',
      ),
    ),
  );
  $field_groups['group_user_premium|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_roles_archive|user|user|user_deputy';
  $field_group->group_name = 'group_user_roles_archive';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_deputy';
  $field_group->parent_name = 'group_user_roles';
  $field_group->data = array(
    'label' => 'User Roles Archive',
    'weight' => '62',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-roles-archive field-group-htab',
      ),
    ),
  );
  $field_groups['group_user_roles_archive|user|user|user_deputy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_roles_current|user|user|user_deputy';
  $field_group->group_name = 'group_user_roles_current';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_deputy';
  $field_group->parent_name = 'group_user_roles';
  $field_group->data = array(
    'label' => 'User Roles Current',
    'weight' => '59',
    'children' => array(
      0 => 'field_user_commitee',
      1 => 'field_user_political_roles',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-roles-current field-group-htab',
      ),
    ),
  );
  $field_groups['group_user_roles_current|user|user|user_deputy'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_roles|user|user|user_deputy';
  $field_group->group_name = 'group_user_roles';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'user_deputy';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Roles',
    'weight' => '58',
    'children' => array(
      0 => 'group_user_roles_archive',
      1 => 'group_user_roles_current',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-user-roles field-group-htabs',
      ),
    ),
  );
  $field_groups['group_user_roles|user|user|user_deputy'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About me');
  t('Additional');
  t('Additional Fields');
  t('Admin Settings');
  t('Basics');
  t('Basics ID Wrapper');
  t('Candidate Intro');
  t('Candidate Intro Info');
  t('Candidate Intro Left');
  t('Candidate Intro Right');
  t('Candidate Intro Row');
  t('Candidate Slider Info');
  t('Candidate Tabs');
  t('Candidate Tabs Info Row');
  t('Candidate Tabs Info Sidebar');
  t('Candidate Tabs Wrapper');
  t('Commitee Fieldgroup');
  t('Dialogue Data');
  t('External Links');
  t('Fragen & Antworten');
  t('Grid 6 Wrapper');
  t('Image Gallery');
  t('Info-List');
  t('Managed Content');
  t('Mouseover');
  t('Name');
  t('Personal Data');
  t('Political Affiliation');
  t('Political Goals');
  t('Political Roles');
  t('Premium');
  t('Premium fields');
  t('Profile picture');
  t('Roles ID Wrapper');
  t('Steckbrief');
  t('Twitter');
  t('User Basics');
  t('User Basics Additional');
  t('User Basics Data');
  t('User Roles');
  t('User Roles Archive');
  t('User Roles Current');
  t('User name');

  return $field_groups;
}
