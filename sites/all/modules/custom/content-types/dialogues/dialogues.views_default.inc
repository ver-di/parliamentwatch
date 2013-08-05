<?php
/**
 * @file
 * dialogues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dialogues_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'answers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Answers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Answers';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'comment answer push-bottom-l';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Kommentar: Inhalt */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['relationship'] = 'nid';
  /* Feld: | inner start */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '| inner start';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="content-inner">';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['relationship'] = 'nid';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Feld: Benutzer: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'file-image float-left';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Feld: | header start */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = '| header start';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Feld: First name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['ui_name'] = 'First name';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Feld: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['ui_name'] = 'Last name';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['alter']['text'] = '[field_user_lname],';
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Feld: Benutzer: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'field_data_field_user_party';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_party']['label'] = '';
  $handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Datum */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'nid';
  $handler->display->display_options['fields']['created']['label'] = 'to a question from ';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'subline';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only_short';
  /* Feld: | header end */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '| header end';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</h3>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Feld: Benutzer: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['table'] = 'field_data_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_questions_get']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['text'] = '[field_user_questions_get] question(s)';
  $handler->display->display_options['fields']['field_user_questions_get']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Feld: Benutzer: Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['table'] = 'field_data_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_answers_give']['label'] = '';
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['alter']['text'] = '[field_user_questions_get], [field_user_answers_give] answer(s)';
  $handler->display->display_options['fields']['field_user_answers_give']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_user_answers_give']['element_wrapper_class'] = 'small light';
  $handler->display->display_options['fields']['field_user_answers_give']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Feld: Benutzer: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['text'] = 'Go to profile';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['uid']['element_wrapper_class'] = 'row link-profile';
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  /* Feld: | user end */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = '| user end';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'push-bottom-s clear-both';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Feld: Kommentar: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['alter']['max_length'] = '255';
  $handler->display->display_options['fields']['comment_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_body']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['comment_body']['element_default_classes'] = FALSE;
  /* Feld: Kommentar: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'comment';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'read complete question and answer';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]?width=637&height=764';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'colorbox-node read-more';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'bg-white';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  /* Feld: | inner end */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = '| inner end';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '</div>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Sort criterion: Kommentar: Datum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dialogue' => 'dialogue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Kommentar: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filter criterion: Benutzer: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['filters']['rid']['value'] = array(
    181527986 => '181527986',
  );

  /* Display: Frontpage */
  $handler = $view->new_display('block', 'Frontpage', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['answers'] = $view;

  return $export;
}
