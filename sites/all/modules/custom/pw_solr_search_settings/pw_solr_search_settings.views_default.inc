<?php
/**
 * @file
 * pw_solr_search_settings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_solr_search_settings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profile_list_solr';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_pw_user_solr';
  $view->human_name = 'profile_list_solr';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Find your politician';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '21';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'prev';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'profiles-list-compact';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Result summary */
  $handler->display->display_options['empty']['result']['id'] = 'result';
  $handler->display->display_options['empty']['result']['table'] = 'views';
  $handler->display->display_options['empty']['result']['field'] = 'result';
  $handler->display->display_options['empty']['result']['empty'] = TRUE;
  /* Relationship: Indexed User: Committee */
  $handler->display->display_options['relationships']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['relationships']['field_user_commitee']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['relationships']['field_user_commitee']['field'] = 'field_user_commitee';
  /* Field: Indexed User: Revision ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vid']['separator'] = '';
  $handler->display->display_options['fields']['vid']['link_to_entity'] = 0;
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Field: Profile picture: The file. (indexed) */
  $handler->display->display_options['fields']['field_user_picture_file']['id'] = 'field_user_picture_file';
  $handler->display->display_options['fields']['field_user_picture_file']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_picture_file']['field'] = 'field_user_picture_file';
  $handler->display->display_options['fields']['field_user_picture_file']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture_file']['alter']['text'] = '<div class="profiles-list-compact-wrapper">[field_user_picture_file]';
  $handler->display->display_options['fields']['field_user_picture_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_picture_file']['display'] = 'view';
  $handler->display->display_options['fields']['field_user_picture_file']['view_mode'] = 'pw_file_portrait_m';
  /* Field: | name start */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = '| name start';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '<h4>';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['label'] = '';
  $handler->display->display_options['fields']['field_user_party']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party']['alter']['text'] = '[field_user_fname] [field_user_lname], [field_user_party]';
  $handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['empty'] = '[field_user_fname] [field_user_lname]';
  $handler->display->display_options['fields']['field_user_party']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_party']['view_mode'] = 'full';
  /* Field: | name end */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = '| name end';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '</h4>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['text'] = '[field_user_questions_get] question(s)';
  $handler->display->display_options['fields']['field_user_questions_get']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed User: Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['label'] = '';
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['text'] = ', [field_user_answers_give] answer(s)';
  $handler->display->display_options['fields']['field_user_answers_give']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: |more info start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '|more info start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="element-hidden profile-list-compact-info">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'profile-image';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_fname_1']['id'] = 'field_user_fname_1';
  $handler->display->display_options['fields']['field_user_fname_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_fname_1']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname_1']['alter']['text'] = '<h3>[field_user_fname_1]';
  $handler->display->display_options['fields']['field_user_fname_1']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Last name */
  $handler->display->display_options['fields']['field_user_lname_1']['id'] = 'field_user_lname_1';
  $handler->display->display_options['fields']['field_user_lname_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_lname_1']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname_1']['alter']['text'] = '[field_user_lname_1]</h3>';
  $handler->display->display_options['fields']['field_user_lname_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname_1']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Party */
  $handler->display->display_options['fields']['field_user_party_1']['id'] = 'field_user_party_1';
  $handler->display->display_options['fields']['field_user_party_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_party_1']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_party_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_party_1']['element_wrapper_class'] = 'bg-white row party push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_party_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_party_1']['view_mode'] = 'full';
  /* Field: Indexed User: Constituency */
  $handler->display->display_options['fields']['field_user_constituency']['id'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_constituency']['field'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['label'] = '';
  $handler->display->display_options['fields']['field_user_constituency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_constituency']['element_wrapper_class'] = 'bg-white row constituency push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_constituency']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['view_mode'] = 'full';
  /* Field: Indexed User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get_1']['id'] = 'field_user_questions_get_1';
  $handler->display->display_options['fields']['field_user_questions_get_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_questions_get_1']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['alter']['text'] = '[field_user_questions_get_1] question(s)';
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_wrapper_class'] = 'row push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Answers (reused) */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Answers (reused)';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_user_answers_give]';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'row push-bottom-xs';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = TRUE;
  /* Field: Indexed User: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'Go to profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['url']['element_wrapper_class'] = 'link-profile row bg-white';
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: | more info end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| more info end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: | compact end */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| compact end';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Committee */
  $handler->display->display_options['fields']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_commitee']['field'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_commitee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_commitee']['view_mode'] = 'full';
  /* Sort criterion: Indexed User: user_first_letter_lname */
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['id'] = 'field_user_first_letter_lname';
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['field'] = 'field_user_first_letter_lname';
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['expose']['label'] = 'Last name';
  /* Sort criterion: Indexed User: Answers Give */
  $handler->display->display_options['sorts']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['sorts']['field_user_answers_give']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['sorts']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['sorts']['field_user_answers_give']['expose']['label'] = 'Answers';
  /* Contextual filter: Indexed User: Committee */
  $handler->display->display_options['arguments']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['arguments']['field_user_commitee']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['arguments']['field_user_commitee']['field'] = 'field_user_commitee';
  $handler->display->display_options['arguments']['field_user_commitee']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_commitee']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_user_commitee']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_commitee']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_commitee']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_user_commitee']['validate_options']['vocabularies'] = array(
    'committee' => 'committee',
  );
  $handler->display->display_options['arguments']['field_user_commitee']['break_phrase'] = 0;
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    181527986 => '181527986',
  );
  /* Filter criterion: Indexed User: user_first_letter_lname */
  $handler->display->display_options['filters']['field_user_first_letter_lname']['id'] = 'field_user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['field'] = 'field_user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['expose']['operator_id'] = 'field_user_first_letter_lname_op';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['expose']['label'] = 'user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['expose']['operator'] = 'field_user_first_letter_lname_op';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['expose']['identifier'] = 'field_user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_user_first_letter_lname']['group_info']['label'] = 'user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['group_info']['identifier'] = 'field_user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'S',
      'operator' => '=',
      'value' => 'S',
    ),
    2 => array(
      'title' => 'T',
      'operator' => '=',
      'value' => 'T',
    ),
    3 => array(
      'title' => 'R',
      'operator' => '=',
      'value' => 'R',
    ),
    4 => array(
      'title' => 'Q',
      'operator' => '=',
      'value' => 'Q',
    ),
    5 => array(
      'title' => 'P',
      'operator' => '=',
      'value' => 'P',
    ),
    6 => array(
      'title' => 'U',
      'operator' => '=',
      'value' => 'U',
    ),
    7 => array(
      'title' => 'V',
      'operator' => '=',
      'value' => 'V',
    ),
    8 => array(
      'title' => 'Z',
      'operator' => '=',
      'value' => 'Z',
    ),
    10 => array(
      'title' => 'Y',
      'operator' => '=',
      'value' => 'Y',
    ),
    11 => array(
      'title' => 'X',
      'operator' => '=',
      'value' => 'X',
    ),
    12 => array(
      'title' => 'W',
      'operator' => '=',
      'value' => 'W',
    ),
    13 => array(
      'title' => 'O',
      'operator' => '=',
      'value' => 'O',
    ),
    14 => array(
      'title' => 'N',
      'operator' => '=',
      'value' => 'N',
    ),
    15 => array(
      'title' => 'L',
      'operator' => '=',
      'value' => 'L',
    ),
    16 => array(
      'title' => 'M',
      'operator' => '=',
      'value' => 'M',
    ),
    17 => array(
      'title' => 'A',
      'operator' => '=',
      'value' => 'A',
    ),
    18 => array(
      'title' => 'B',
      'operator' => '=',
      'value' => 'B',
    ),
    19 => array(
      'title' => 'C',
      'operator' => '=',
      'value' => 'C',
    ),
    20 => array(
      'title' => 'D',
      'operator' => '=',
      'value' => 'D',
    ),
    21 => array(
      'title' => 'E',
      'operator' => '=',
      'value' => 'E',
    ),
    22 => array(
      'title' => 'F',
      'operator' => '=',
      'value' => 'F',
    ),
    23 => array(
      'title' => 'G',
      'operator' => '=',
      'value' => 'G',
    ),
    24 => array(
      'title' => 'H',
      'operator' => '=',
      'value' => 'H',
    ),
    25 => array(
      'title' => 'I',
      'operator' => '=',
      'value' => 'I',
    ),
    26 => array(
      'title' => 'J',
      'operator' => '=',
      'value' => 'J',
    ),
    27 => array(
      'title' => 'K',
      'operator' => '=',
      'value' => 'K',
    ),
    28 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );

  /* Display: Profiles list parliament */
  $handler = $view->new_display('page', 'Profiles list parliament', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: Revision ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vid']['separator'] = '';
  $handler->display->display_options['fields']['vid']['link_to_entity'] = 0;
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Field: Profile picture: The file. (indexed) */
  $handler->display->display_options['fields']['field_user_picture_file']['id'] = 'field_user_picture_file';
  $handler->display->display_options['fields']['field_user_picture_file']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_picture_file']['field'] = 'field_user_picture_file';
  $handler->display->display_options['fields']['field_user_picture_file']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture_file']['alter']['text'] = '<div class="profiles-list-compact-wrapper">[field_user_picture_file]';
  $handler->display->display_options['fields']['field_user_picture_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_picture_file']['display'] = 'view';
  $handler->display->display_options['fields']['field_user_picture_file']['view_mode'] = 'pw_file_portrait_m';
  /* Field: | name start */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = '| name start';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '<h4>';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['label'] = '';
  $handler->display->display_options['fields']['field_user_party']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party']['alter']['text'] = '[field_user_fname] [field_user_lname], [field_user_party]';
  $handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['empty'] = '[field_user_fname] [field_user_lname]';
  $handler->display->display_options['fields']['field_user_party']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_party']['view_mode'] = 'full';
  /* Field: | name end */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = '| name end';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '</h4>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['text'] = '[field_user_questions_get] question(s)';
  $handler->display->display_options['fields']['field_user_questions_get']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed User: Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['label'] = '';
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['text'] = '[field_user_questions_get], [field_user_answers_give] answer(s)';
  $handler->display->display_options['fields']['field_user_answers_give']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['empty'] = '[field_user_questions_get]';
  $handler->display->display_options['fields']['field_user_answers_give']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: |more info start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '|more info start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="element-hidden profile-list-compact-info">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'profile-image';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_fname_1']['id'] = 'field_user_fname_1';
  $handler->display->display_options['fields']['field_user_fname_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_fname_1']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname_1']['alter']['text'] = '<h3>[field_user_fname_1]';
  $handler->display->display_options['fields']['field_user_fname_1']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Last name */
  $handler->display->display_options['fields']['field_user_lname_1']['id'] = 'field_user_lname_1';
  $handler->display->display_options['fields']['field_user_lname_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_lname_1']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname_1']['alter']['text'] = '[field_user_lname_1]</h3>';
  $handler->display->display_options['fields']['field_user_lname_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname_1']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Party */
  $handler->display->display_options['fields']['field_user_party_1']['id'] = 'field_user_party_1';
  $handler->display->display_options['fields']['field_user_party_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_party_1']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_party_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_party_1']['element_wrapper_class'] = 'bg-white row party push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_party_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_party_1']['view_mode'] = 'full';
  /* Field: Indexed User: Constituency */
  $handler->display->display_options['fields']['field_user_constituency']['id'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_constituency']['field'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['label'] = '';
  $handler->display->display_options['fields']['field_user_constituency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_constituency']['element_wrapper_class'] = 'bg-white row constituency push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_constituency']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['view_mode'] = 'full';
  /* Field: Indexed User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get_1']['id'] = 'field_user_questions_get_1';
  $handler->display->display_options['fields']['field_user_questions_get_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_questions_get_1']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['alter']['text'] = '[field_user_questions_get_1] question(s)';
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_wrapper_class'] = 'row push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Answers (reused) */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Answers (reused)';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_user_answers_give]';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'row push-bottom-xs';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = TRUE;
  /* Field: Indexed User: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'Go to profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['url']['element_wrapper_class'] = 'link-profile row bg-white';
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: | more info end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| more info end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: | compact end */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| compact end';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Committee */
  $handler->display->display_options['fields']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_commitee']['field'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_commitee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_commitee']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed User: Answers Give */
  $handler->display->display_options['sorts']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['sorts']['field_user_answers_give']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['sorts']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['sorts']['field_user_answers_give']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_user_answers_give']['expose']['label'] = 'Answers';
  /* Sort criterion: Indexed User: Questions Get */
  $handler->display->display_options['sorts']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['sorts']['field_user_questions_get']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['sorts']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['sorts']['field_user_questions_get']['order'] = 'DESC';
  /* Sort criterion: Indexed User: user_first_letter_lname */
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['id'] = 'field_user_first_letter_lname';
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['field'] = 'field_user_first_letter_lname';
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['expose']['label'] = 'Last name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed User: Parliament */
  $handler->display->display_options['arguments']['field_user_parliament']['id'] = 'field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['arguments']['field_user_parliament']['field'] = 'field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_parliament']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_user_parliament']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_parliament']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_parliament']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_user_parliament']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_user_parliament']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_user_parliament']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_user_parliament']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_user_parliament']['break_phrase'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    181527986 => '181527986',
  );
  /* Filter criterion: Indexed User: user_first_letter_lname */
  $handler->display->display_options['filters']['field_user_first_letter_lname']['id'] = 'field_user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['field'] = 'field_user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_first_letter_lname']['expose']['operator_id'] = 'field_user_first_letter_lname_op';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['expose']['label'] = 'user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['expose']['operator'] = 'field_user_first_letter_lname_op';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['expose']['identifier'] = 'field_user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_user_first_letter_lname']['group_info']['label'] = 'user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['group_info']['identifier'] = 'field_user_first_letter_lname';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_user_first_letter_lname']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'S',
      'operator' => '=',
      'value' => 'S',
    ),
    2 => array(
      'title' => 'T',
      'operator' => '=',
      'value' => 'T',
    ),
    3 => array(
      'title' => 'R',
      'operator' => '=',
      'value' => 'R',
    ),
    4 => array(
      'title' => 'Q',
      'operator' => '=',
      'value' => 'Q',
    ),
    5 => array(
      'title' => 'P',
      'operator' => '=',
      'value' => 'P',
    ),
    6 => array(
      'title' => 'U',
      'operator' => '=',
      'value' => 'U',
    ),
    7 => array(
      'title' => 'V',
      'operator' => '=',
      'value' => 'V',
    ),
    8 => array(
      'title' => 'Z',
      'operator' => '=',
      'value' => 'Z',
    ),
    10 => array(
      'title' => 'Y',
      'operator' => '=',
      'value' => 'Y',
    ),
    11 => array(
      'title' => 'X',
      'operator' => '=',
      'value' => 'X',
    ),
    12 => array(
      'title' => 'W',
      'operator' => '=',
      'value' => 'W',
    ),
    13 => array(
      'title' => 'O',
      'operator' => '=',
      'value' => 'O',
    ),
    14 => array(
      'title' => 'N',
      'operator' => '=',
      'value' => 'N',
    ),
    15 => array(
      'title' => 'L',
      'operator' => '=',
      'value' => 'L',
    ),
    16 => array(
      'title' => 'M',
      'operator' => '=',
      'value' => 'M',
    ),
    17 => array(
      'title' => 'A',
      'operator' => '=',
      'value' => 'A',
    ),
    18 => array(
      'title' => 'B',
      'operator' => '=',
      'value' => 'B',
    ),
    19 => array(
      'title' => 'C',
      'operator' => '=',
      'value' => 'C',
    ),
    20 => array(
      'title' => 'D',
      'operator' => '=',
      'value' => 'D',
    ),
    21 => array(
      'title' => 'E',
      'operator' => '=',
      'value' => 'E',
    ),
    22 => array(
      'title' => 'F',
      'operator' => '=',
      'value' => 'F',
    ),
    23 => array(
      'title' => 'G',
      'operator' => '=',
      'value' => 'G',
    ),
    24 => array(
      'title' => 'H',
      'operator' => '=',
      'value' => 'H',
    ),
    25 => array(
      'title' => 'I',
      'operator' => '=',
      'value' => 'I',
    ),
    26 => array(
      'title' => 'J',
      'operator' => '=',
      'value' => 'J',
    ),
    27 => array(
      'title' => 'K',
      'operator' => '=',
      'value' => 'K',
    ),
    28 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  $handler->display->display_options['path'] = 'politicians/%';

  /* Display: Profile list commitees */
  $handler = $view->new_display('block', 'Profile list commitees', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed User: Committee */
  $handler->display->display_options['relationships']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['relationships']['field_user_commitee']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['relationships']['field_user_commitee']['field'] = 'field_user_commitee';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: Revision ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vid']['separator'] = '';
  $handler->display->display_options['fields']['vid']['link_to_entity'] = 0;
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Field: Profile picture: The file. (indexed) */
  $handler->display->display_options['fields']['field_user_picture_file']['id'] = 'field_user_picture_file';
  $handler->display->display_options['fields']['field_user_picture_file']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_picture_file']['field'] = 'field_user_picture_file';
  $handler->display->display_options['fields']['field_user_picture_file']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture_file']['alter']['text'] = '<div class="profiles-list-compact-wrapper">[field_user_picture_file]';
  $handler->display->display_options['fields']['field_user_picture_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_picture_file']['display'] = 'view';
  $handler->display->display_options['fields']['field_user_picture_file']['view_mode'] = 'pw_file_portrait_m';
  /* Field: | name start */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = '| name start';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '<h4>';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['label'] = '';
  $handler->display->display_options['fields']['field_user_party']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party']['alter']['text'] = '[field_user_fname] [field_user_lname], [field_user_party]';
  $handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['empty'] = '[field_user_fname] [field_user_lname]';
  $handler->display->display_options['fields']['field_user_party']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_party']['view_mode'] = 'full';
  /* Field: | name end */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = '| name end';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '</h4>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['text'] = '[field_user_questions_get] question(s),';
  $handler->display->display_options['fields']['field_user_questions_get']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed User: Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['label'] = '';
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['text'] = '[field_user_answers_give] answer(s)';
  $handler->display->display_options['fields']['field_user_answers_give']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: |more info start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '|more info start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="element-hidden profile-list-compact-info">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'profile-image';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_fname_1']['id'] = 'field_user_fname_1';
  $handler->display->display_options['fields']['field_user_fname_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_fname_1']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname_1']['alter']['text'] = '<h3>[field_user_fname_1]';
  $handler->display->display_options['fields']['field_user_fname_1']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Last name */
  $handler->display->display_options['fields']['field_user_lname_1']['id'] = 'field_user_lname_1';
  $handler->display->display_options['fields']['field_user_lname_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_lname_1']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname_1']['alter']['text'] = '[field_user_lname_1]</h3>';
  $handler->display->display_options['fields']['field_user_lname_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname_1']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Party */
  $handler->display->display_options['fields']['field_user_party_1']['id'] = 'field_user_party_1';
  $handler->display->display_options['fields']['field_user_party_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_party_1']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_party_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_party_1']['element_wrapper_class'] = 'bg-white row party push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_party_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_party_1']['view_mode'] = 'full';
  /* Field: Indexed User: Constituency */
  $handler->display->display_options['fields']['field_user_constituency']['id'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_constituency']['field'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['label'] = '';
  $handler->display->display_options['fields']['field_user_constituency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_constituency']['element_wrapper_class'] = 'bg-white row constituency push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_constituency']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['view_mode'] = 'full';
  /* Field: Indexed User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get_1']['id'] = 'field_user_questions_get_1';
  $handler->display->display_options['fields']['field_user_questions_get_1']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_questions_get_1']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['alter']['text'] = '[field_user_questions_get_1] question(s)';
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_wrapper_class'] = 'row push-bottom-xxs';
  $handler->display->display_options['fields']['field_user_questions_get_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Answers (reused) */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Answers (reused)';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_user_answers_give]';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'row push-bottom-xs';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = TRUE;
  /* Field: Indexed User: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'Go to profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['url']['element_wrapper_class'] = 'link-profile row bg-white';
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: | more info end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| more info end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: | compact end */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| compact end';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Committee */
  $handler->display->display_options['fields']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_commitee']['field'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_commitee']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_commitee']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    181527986 => '181527986',
  );

  /* Display: User Search */
  $handler = $view->new_display('page', 'User Search', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Politicians';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: First Last */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['ui_name'] = 'First Last';
  $handler->display->display_options['filters']['search_api_views_fulltext']['value'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search by first or last name';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    181527986 => 0,
    51622513 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'name' => 'name',
    'field_user_fname' => 'field_user_fname',
    'field_user_lname' => 'field_user_lname',
  );
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    181527986 => '181527986',
  );
  $handler->display->display_options['filters']['roles']['group'] = 1;
  $handler->display->display_options['path'] = 'search-user';

  /* Display: Search Polls */
  $handler = $view->new_display('block', 'Search Polls', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find your Representative';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'arrow-item pw-list-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Area Codes */
  $handler->display->display_options['relationships']['field_constituency_area_codes']['id'] = 'field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes']['table'] = 'entity_taxonomy_term';
  $handler->display->display_options['relationships']['field_constituency_area_codes']['field'] = 'field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_constituency_area_codes']['relationship'] = 'field_user_constituency_field_voc_constituency_zip_field_constituency_area_codes';
  /* Relationship: Constituency: Area Codes (indexed) */
  $handler->display->display_options['relationships']['field_user_constituency_field_constituency_area_codes']['id'] = 'field_user_constituency_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_user_constituency_field_constituency_area_codes']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['relationships']['field_user_constituency_field_constituency_area_codes']['field'] = 'field_user_constituency_field_constituency_area_codes';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: Revision ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['link_to_entity'] = 0;
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Field: Indexed User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'float-left file-image';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Field: | content wraper start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '| content wraper start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="push-left-xl">';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['alter']['text'] = '<h4>[field_user_fname]';
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['label'] = '';
  $handler->display->display_options['fields']['field_user_party']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party']['alter']['text'] = '<h4>[field_user_fname] [field_user_lname], [field_user_party]</h4>';
  $handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_user_party']['element_wrapper_class'] = 'field-party';
  $handler->display->display_options['fields']['field_user_party']['empty'] = '<h4>[field_user_fname] [field_user_lname]</h4>';
  $handler->display->display_options['fields']['field_user_party']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_party']['view_mode'] = 'full';
  /* Field: Indexed User: Constituency */
  $handler->display->display_options['fields']['field_user_constituency']['id'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_constituency']['field'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['label'] = '';
  $handler->display->display_options['fields']['field_user_constituency']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_constituency']['element_wrapper_class'] = 'subtitle';
  $handler->display->display_options['fields']['field_user_constituency']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_constituency']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_constituency']['view_mode'] = 'full';
  /* Field: Indexed User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['text'] = '[field_user_questions_get] question(s)';
  $handler->display->display_options['fields']['field_user_questions_get']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed User: Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['label'] = '';
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['text'] = '[field_user_questions_get], [field_user_answers_give] answer(s)';
  $handler->display->display_options['fields']['field_user_answers_give']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_answers_give']['element_wrapper_class'] = 'subtitle push-bottom-xs';
  $handler->display->display_options['fields']['field_user_answers_give']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed User: Committee */
  $handler->display->display_options['fields']['field_user_commitee']['id'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_commitee']['field'] = 'field_user_commitee';
  $handler->display->display_options['fields']['field_user_commitee']['label'] = '';
  $handler->display->display_options['fields']['field_user_commitee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_commitee']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_commitee']['element_wrapper_class'] = 'icon-taxonomy push-bottom-xs light';
  $handler->display->display_options['fields']['field_user_commitee']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_commitee']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_commitee']['view_mode'] = 'full';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'span';
  $handler->display->display_options['fields']['php']['element_class'] = 'block [php]';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'poll-behavior';
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if(is_numeric(arg(1))){
        $nid = arg(1);
      }else{
        $nid = arg(2);
      }

$sql = "SELECT entity_id, value FROM {votingapi_vote} WHERE entity_id=:nid AND uid=:uid";
$result  = db_query($sql,array(\':nid\'=>$nid,\':uid\'=>$data->_entity_properties[\'uid\']));
$record = $result->fetchObject();

if($record->value == 0){
 echo t(\'yes\');
}else if($record->value == 1){
 echo t(\'no\');
}else if($record->value == 2){
 echo t(\'absent\');
}else{
 echo t(\'blank\');
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: | content wrapper end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| content wrapper end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Indexed User: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'Go to profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['url']['element_wrapper_class'] = 'link-profile float-right';
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 1;
  /* Field: Indexed User: Parliament */
  $handler->display->display_options['fields']['field_user_parliament']['id'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_parliament']['field'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['label'] = '';
  $handler->display->display_options['fields']['field_user_parliament']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_parliament']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_parliament']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_parliament']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed User: user_first_letter_lname */
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['id'] = 'field_user_first_letter_lname';
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['sorts']['field_user_first_letter_lname']['field'] = 'field_user_first_letter_lname';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed User: Parliament */
  $handler->display->display_options['arguments']['field_user_parliament']['id'] = 'field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['arguments']['field_user_parliament']['field'] = 'field_user_parliament';
  $handler->display->display_options['arguments']['field_user_parliament']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_user_parliament']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_parliament']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_parliament']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_user_parliament']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_user_parliament']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_user_parliament']['break_phrase'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    181527986 => '181527986',
  );
  /* Filter criterion: Constituency » Area Codes: Name (indexed) */
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['id'] = 'field_user_constituency_field_constituency_area_codes_name';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['field'] = 'field_user_constituency_field_constituency_area_codes_name';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['operator_id'] = 'field_user_constituency_field_constituency_area_codes_name_op';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['label'] = 'Constituency or Area ';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['description'] = 'Find out how the TDs from your constituency voted, by filling in your constituency or area:';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['operator'] = 'field_user_constituency_field_constituency_area_codes_name_op';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['identifier'] = 'field_user_constituency_field_constituency_area_codes_name';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    181527986 => 0,
    51622513 => 0,
  );

  /* Display: Profiles list constituency search page */
  $handler = $view->new_display('page', 'Profiles list constituency search page', 'constituency');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'arrow-item pw-list-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found';
  $handler->display->display_options['empty']['area']['format'] = 'managed_content';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Constituency: Area Codes (indexed) */
  $handler->display->display_options['relationships']['field_user_constituency_field_constituency_area_codes']['id'] = 'field_user_constituency_field_constituency_area_codes';
  $handler->display->display_options['relationships']['field_user_constituency_field_constituency_area_codes']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['relationships']['field_user_constituency_field_constituency_area_codes']['field'] = 'field_user_constituency_field_constituency_area_codes';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: Revision ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vid']['separator'] = '';
  $handler->display->display_options['fields']['vid']['link_to_entity'] = 0;
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  $handler->display->display_options['fields']['uid']['link_to_entity'] = 0;
  /* Field: Indexed User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'float-left file-image';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Field: Indexed User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['alter']['text'] = '<h4>[field_user_fname]';
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: Indexed User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  /* Field: Indexed User: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['label'] = '';
  $handler->display->display_options['fields']['field_user_party']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party']['alter']['text'] = '<h4>[field_user_fname] [field_user_lname], [field_user_party]</h4>';
  $handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['empty'] = '<h4>[field_user_fname] [field_user_lname]</h4>';
  $handler->display->display_options['fields']['field_user_party']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_user_party']['view_mode'] = 'full';
  /* Field: Indexed User: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'Go to profile';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['url']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed User: User roles */
  $handler->display->display_options['filters']['roles']['id'] = 'roles';
  $handler->display->display_options['filters']['roles']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['roles']['field'] = 'roles';
  $handler->display->display_options['filters']['roles']['value'] = array(
    181527986 => '181527986',
  );
  /* Filter criterion: Constituency » Area Codes: Name (indexed) */
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['id'] = 'field_user_constituency_field_constituency_area_codes_name';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['table'] = 'search_api_index_pw_user_solr';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['field'] = 'field_user_constituency_field_constituency_area_codes_name';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['operator_id'] = 'field_user_constituency_field_constituency_area_codes_name_op';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['label'] = 'Constituency or Area';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['operator'] = 'field_user_constituency_field_constituency_area_codes_name_op';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['identifier'] = 'query';
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_user_constituency_field_constituency_area_codes_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    181527986 => 0,
    51622513 => 0,
  );
  $handler->display->display_options['path'] = 'search-constituency';
  $translatables['profile_list_solr'] = array(
    t('Master'),
    t('Find your politician'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('prev'),
    t('next'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('Committee'),
    t('.'),
    t('<div class="profiles-list-compact-wrapper">[field_user_picture_file]'),
    t('<h4>'),
    t('[field_user_fname] [field_user_lname], [field_user_party]'),
    t('[field_user_fname] [field_user_lname]'),
    t('</h4>'),
    t('[field_user_questions_get] question(s)'),
    t(', [field_user_answers_give] answer(s)'),
    t('<div class="element-hidden profile-list-compact-info">'),
    t('<h3>[field_user_fname_1]'),
    t('[field_user_lname_1]</h3>'),
    t('[field_user_questions_get_1] question(s)'),
    t('[field_user_answers_give]'),
    t('Go to profile'),
    t('</div>'),
    t('Last name'),
    t('Answers'),
    t('All'),
    t('user_first_letter_lname'),
    t('Profiles list parliament'),
    t('[field_user_questions_get], [field_user_answers_give] answer(s)'),
    t('[field_user_questions_get]'),
    t('Profile list commitees'),
    t('[field_user_questions_get] question(s),'),
    t('[field_user_answers_give] answer(s)'),
    t('User Search'),
    t('Search Politicians'),
    t('Search by first or last name'),
    t('Search Polls'),
    t('Find your Representative'),
    t('Area Codes'),
    t('Revision ID'),
    t(','),
    t('<div class="push-left-xl">'),
    t('<h4>[field_user_fname]'),
    t('<h4>[field_user_fname] [field_user_lname], [field_user_party]</h4>'),
    t('<h4>[field_user_fname] [field_user_lname]</h4>'),
    t('Constituency or Area '),
    t('Find out how the TDs from your constituency voted, by filling in your constituency or area:'),
    t('Profiles list constituency search page'),
    t('No results found'),
    t('Constituency or Area'),
  );
  $export['profile_list_solr'] = $view;

  return $export;
}
