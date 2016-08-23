<?php
/**
 * @file
 * pw_dialogues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_dialogues_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profile_questions_answers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Dialogues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions & Answers';
  $handler->display->display_options['css_class'] = 'pager-load-more';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'weiterlesen';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = 'first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'push-bottom-l relative';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Broken/missing handler */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="pw-messages warning">
Mit Ihrer Auswahl wurden leider keine Ergebnisse gefunden.<br/>Bitte treffen Sie eine neue Auswahl über einen der angebotenen Filter.
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'managed_content';
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'content author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['user_to_file']['id'] = 'user_to_file';
  $handler->display->display_options['relationships']['user_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['user_to_file']['field'] = 'user_to_file';
  $handler->display->display_options['relationships']['user_to_file']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['user_to_file']['label'] = 'Profilfoto';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Fieldset Question';
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['label'] = 'Thema';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_class'] = 'topic float-right';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only_short';
  /* Field: Content: Sender Name */
  $handler->display->display_options['fields']['field_dialogue_sender_name']['id'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['table'] = 'field_data_field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['field'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['label'] = 'Frage von';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['text'] = ' [field_dialogue_sender_name]<br/><span class="subline">[created]</span>
';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_class'] = 'bubble';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['empty'] = 'anonymous<br/><span class="subline">[created]</span>';
  /* Field: Excluded | Before Election */
  $handler->display->display_options['fields']['field_dialogue_before_election']['id'] = 'field_dialogue_before_election';
  $handler->display->display_options['fields']['field_dialogue_before_election']['table'] = 'field_data_field_dialogue_before_election';
  $handler->display->display_options['fields']['field_dialogue_before_election']['field'] = 'field_dialogue_before_election';
  $handler->display->display_options['fields']['field_dialogue_before_election']['ui_name'] = 'Excluded | Before Election';
  $handler->display->display_options['fields']['field_dialogue_before_election']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_before_election']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_before_election']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['element_type'] = 'div';
  $handler->display->display_options['fields']['php_3']['element_class'] = 'dialogue-election push-bottom-s';
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'content push-bottom-s';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Field: Annotation */
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['id'] = 'field_dialogue_annotation_1';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['table'] = 'field_data_field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['field'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['label'] = 'Anmerkung der Redaktion';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_label_class'] = 'small';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_wrapper_class'] = 'small annotation push-bottom-m clear';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  /* Field: excluded | edit question */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['ui_name'] = 'excluded | edit question';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit question';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_comment' => 'edit_comment',
    'edit_node' => 'edit_node',
    'uid' => 0,
    'nid' => 0,
    'sharethis' => 0,
    'fieldset_1' => 0,
    'field_dialogue_topic' => 0,
    'created' => 0,
    'field_dialogue_sender_name' => 0,
    'body' => 0,
    'field_dialogue_tags' => 0,
    'fieldset_2' => 0,
    'fieldset_3' => 0,
    'fieldset_5' => 0,
    'field_user_picture' => 0,
    'field_image_copyright' => 0,
    'field_user_fname' => 0,
    'field_user_lname' => 0,
    'created_1' => 0,
    'comment_body' => 0,
    'fieldset' => 0,
    'field_dialogue_topic_1' => 0,
    'path_1' => 0,
    'fieldset_4' => 0,
    'nothing_1' => 0,
    'path' => 0,
    'php' => 0,
    'php_2' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'dialogue' => 'dialogue',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dialogue' => 'dialogue',
  );

  /* Display: Full content */
  $handler = $view->new_display('panel_pane', 'Full content', 'full_content');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fragen an [field_user_fname] [field_user_lname]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'A content pane used on the full content of the question';
  $handler->display->display_options['defaults']['hide_attachment_summary'] = FALSE;
  $handler->display->display_options['hide_attachment_summary'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Fieldset Question';
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['label'] = 'Thema';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_class'] = 'topic float-right';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only_short';
  /* Field: Content: Sender Name */
  $handler->display->display_options['fields']['field_dialogue_sender_name']['id'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['table'] = 'field_data_field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['field'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['label'] = 'Frage von';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['text'] = ' [field_dialogue_sender_name]<br/><span class="subline">[created]</span>
 -';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_class'] = 'bubble';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['empty'] = 'anonymous<br/><span class="subline">[created]</span>';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'content push-bottom-s';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Field: Annotation */
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['id'] = 'field_dialogue_annotation_1';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['table'] = 'field_data_field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['field'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['label'] = 'Anmerkung der Redaktion';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_label_class'] = 'small';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_wrapper_class'] = 'small annotation push-bottom-m clear';
  $handler->display->display_options['fields']['field_dialogue_annotation_1']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'dialogue' => 'dialogue',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dialogue' => 'dialogue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Landingpage Parliament */
  $handler = $view->new_display('panel_pane', 'Landingpage Parliament', 'landing_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Fragen an [field_user_fname] [field_user_lname]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['display_description'] = 'A content pane used on the election landingpage';
  $handler->display->display_options['defaults']['hide_attachment_summary'] = FALSE;
  $handler->display->display_options['hide_attachment_summary'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'bfzgpesxoluceqsd',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = 'first';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'last';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'push-bottom-l relative pw-list-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Broken/missing handler */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'content author';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: Excluded | User Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_title']['ui_name'] = 'Excluded | User Title';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['hide_alter_empty'] = FALSE;
  /* Field: Excluded | User First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['ui_name'] = 'Excluded | User First Name';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['hide_alter_empty'] = FALSE;
  /* Field: Excluded | User Last Name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['ui_name'] = 'Excluded | User Last Name';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['hide_alter_empty'] = FALSE;
  /* Field: Excluded | User Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['view_user']['ui_name'] = 'Excluded | User Link';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '[field_user_title] [field_user_fname] [field_user_lname]';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Fieldset Question';
  /* Field: Field: Topic */
  $handler->display->display_options['fields']['field_dialogue_topic']['id'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['table'] = 'field_data_field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['field'] = 'field_dialogue_topic';
  $handler->display->display_options['fields']['field_dialogue_topic']['label'] = 'Thema';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_wrapper_class'] = 'topic float-right';
  $handler->display->display_options['fields']['field_dialogue_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_topic']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_topic']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only_short';
  /* Field: Content: Sender Name */
  $handler->display->display_options['fields']['field_dialogue_sender_name']['id'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['table'] = 'field_data_field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['field'] = 'field_dialogue_sender_name';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['label'] = 'Frage von';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['alter']['text'] = ' [field_dialogue_sender_name]<br/><span class="subline">an [view_user] am [created]</span>
';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_wrapper_class'] = 'bubble';
  $handler->display->display_options['fields']['field_dialogue_sender_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_sender_name']['empty'] = 'anonymous<br/><span class="subline">[created]</span>';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'content push-bottom-s';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Ganze Frage lesen';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'read-more';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'clear';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_comment_1' => 'edit_comment_1',
    'edit_node_1' => 'edit_node_1',
    'uid' => 0,
    'nid' => 0,
    'sharethis' => 0,
    'fieldset_1' => 0,
    'field_dialogue_topic' => 0,
    'created' => 0,
    'field_dialogue_sender_name' => 0,
    'body' => 0,
    'field_dialogue_annotation_1' => 0,
    'fieldset_2' => 0,
    'fieldset_3' => 0,
    'field_user_picture' => 0,
    'field_user_fname' => 0,
    'field_user_lname' => 0,
    'created_1' => 0,
    'comment_body' => 0,
    'field_dialogue_annotation' => 0,
    'fieldset' => 0,
    'field_dialogue_tags' => 0,
    'path_1' => 0,
    'fieldset_4' => 0,
    'nothing_1' => 0,
    'path' => 0,
    'php' => 0,
    'php_2' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date Question';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dialogue' => 'dialogue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Body (body:summary) */
  $handler->display->display_options['filters']['body_summary']['id'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_summary']['field'] = 'body_summary';
  $handler->display->display_options['filters']['body_summary']['operator'] = 'not empty';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Answers pane */
  $handler = $view->new_display('panel_pane', 'Answers pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Fieldset Answer';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Fieldset Answer Inner';
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'float-left push-bottom-s push-right-m';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'comment';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['text'] = '<h3>
    Antwort von [field_user_title] [field_user_fname] [field_user_lname]<br/>
    <span class="subline">[created_1]</span>
</h3>';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'date_only_short';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  /* Field: Comment: Standard reply */
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['id'] = 'field_dialogue_is_standard_reply';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['table'] = 'field_data_field_dialogue_is_standard_reply';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['field'] = 'field_dialogue_is_standard_reply';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['alter']['text'] = 'Standard-Antwort <span class="ic-info ic-right"><span class="info-title"></span><span class="info-content element-hidden">"Standard-Antworten" sind Antworten, in denen Politiker mitteilen, dass sie über abgeordnetenwatch.de grundsätzlich nicht auf Fragen eingehen wollen. Diese werden in der Statistik als "keine Antwort" gewertet.</span></span>';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['element_wrapper_class'] = 'pw-standard-reply';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['empty_zero'] = TRUE;
  /* Field: Comment: Comment Body */
  $handler->display->display_options['fields']['field_dialogue_comment_body']['id'] = 'field_dialogue_comment_body';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['table'] = 'field_data_field_dialogue_comment_body';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['field'] = 'field_dialogue_comment_body';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_comment_body']['alter']['text'] = '<div class="content clear">[field_dialogue_comment_body]</div>';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_comment_body']['empty'] = '<strong>Bisher ist noch keine Antwort eingetroffen</strong>';
  /* Field: Field: Documents */
  $handler->display->display_options['fields']['field_dialogue_documents']['id'] = 'field_dialogue_documents';
  $handler->display->display_options['fields']['field_dialogue_documents']['table'] = 'field_data_field_dialogue_documents';
  $handler->display->display_options['fields']['field_dialogue_documents']['field'] = 'field_dialogue_documents';
  $handler->display->display_options['fields']['field_dialogue_documents']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_documents']['label'] = 'Anhänge';
  $handler->display->display_options['fields']['field_dialogue_documents']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_dialogue_documents']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_documents']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_documents']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_documents']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_documents']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_dialogue_documents']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_dialogue_documents']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dialogue_documents']['multi_type'] = 'ul';
  /* Field: Field: Annotation */
  $handler->display->display_options['fields']['field_dialogue_annotation']['id'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['table'] = 'field_data_field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['field'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_annotation']['label'] = 'Anmerkung der Redaktion';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_label_class'] = 'small';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_wrapper_class'] = 'small annotation clear';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Weitere Informationen zur Antwort';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  /* Field: Comment: Response time */
  $handler->display->display_options['fields']['field_dialogue_response_time']['id'] = 'field_dialogue_response_time';
  $handler->display->display_options['fields']['field_dialogue_response_time']['table'] = 'field_data_field_dialogue_response_time';
  $handler->display->display_options['fields']['field_dialogue_response_time']['field'] = 'field_dialogue_response_time';
  $handler->display->display_options['fields']['field_dialogue_response_time']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_response_time']['label'] = 'Dauer zur eingetroffenen Antwort';
  $handler->display->display_options['fields']['field_dialogue_response_time']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_dialogue_response_time']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_response_time']['element_wrapper_class'] = 'pw-response-time';
  $handler->display->display_options['fields']['field_dialogue_response_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_response_time']['hide_empty'] = TRUE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_dialogue_tags_1']['id'] = 'field_dialogue_tags_1';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['table'] = 'field_data_field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['field'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['label'] = 'Schlagworte';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['element_wrapper_class'] = 'icon-taxonomy';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags_1']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['delta_offset'] = '0';
  /* Field: Content: Path: Print */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['ui_name'] = 'Content: Path: Print';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path_1']['alter']['text'] = 'Frage und Antwort drucken';
  $handler->display->display_options['fields']['path_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path_1']['alter']['path'] = 'print[path_1]';
  $handler->display->display_options['fields']['path_1']['alter']['link_class'] = 'print-page';
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['path_1']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'permalink-wrapper';
  /* Field: Global: Custom text: Headline */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Global: Custom text: Headline';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Permanent-Link zu obenstehender Frage und Antwort';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Global: PHP: Permalink';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php_1']['element_wrapper_class'] = 'permalink';
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = FALSE;
  /* Field: excluded | edit answer */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['relationship'] = 'cid';
  $handler->display->display_options['fields']['edit_comment']['ui_name'] = 'excluded | edit answer';
  $handler->display->display_options['fields']['edit_comment']['label'] = '';
  $handler->display->display_options['fields']['edit_comment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_comment']['text'] = 'edit answer';
  $handler->display->display_options['fields']['edit_comment']['destination'] = TRUE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_comment' => 'edit_comment',
    'edit_node' => 'edit_node',
    'uid' => 0,
    'nid' => 0,
    'sharethis' => 0,
    'fieldset_1' => 0,
    'field_dialogue_topic' => 0,
    'created' => 0,
    'field_dialogue_sender_name' => 0,
    'body' => 0,
    'field_dialogue_tags' => 0,
    'fieldset_2' => 0,
    'fieldset_3' => 0,
    'fieldset_5' => 0,
    'field_user_picture' => 0,
    'field_image_copyright' => 0,
    'field_user_fname' => 0,
    'field_user_lname' => 0,
    'created_1' => 0,
    'comment_body' => 0,
    'fieldset' => 0,
    'field_dialogue_topic_1' => 0,
    'path_1' => 0,
    'fieldset_4' => 0,
    'nothing_1' => 0,
    'path' => 0,
    'php' => 0,
    'php_2' => 0,
  );

  /* Display: Answers pane full content */
  $handler = $view->new_display('panel_pane', 'Answers pane full content', 'panel_pane_2');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="comment">
    <div class="content-inner">
        <strong><?php print t(\'Bisher ist noch keine Antwort eingetroffen\'); ?></strong>
    </div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Fieldset Answer';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Fieldset Answer Inner';
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'float-left push-bottom-s push-right-m';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'comment';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['text'] = '<h3>
    Antwort von [field_user_title] [field_user_fname] [field_user_lname]<br/>
    <span class="subline">[created_1]</span>
</h3>';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'date_only_short';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  /* Field: Comment: Standard reply */
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['id'] = 'field_dialogue_is_standard_reply';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['table'] = 'field_data_field_dialogue_is_standard_reply';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['field'] = 'field_dialogue_is_standard_reply';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['alter']['text'] = 'Standard-Antwort <span class="ic-info ic-right"><span class="info-title"></span><span class="info-content element-hidden">"Standard-Antworten" sind Antworten, in denen Politiker mitteilen, dass sie über abgeordnetenwatch.de grundsätzlich nicht auf Fragen eingehen wollen. Diese werden in der Statistik als "keine Antwort" gewertet.</span></span>';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['element_wrapper_class'] = 'pw-standard-reply';
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_is_standard_reply']['empty_zero'] = TRUE;
  /* Field: Comment: Comment Body */
  $handler->display->display_options['fields']['field_dialogue_comment_body']['id'] = 'field_dialogue_comment_body';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['table'] = 'field_data_field_dialogue_comment_body';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['field'] = 'field_dialogue_comment_body';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_comment_body']['alter']['text'] = '<div class="content clear">[field_dialogue_comment_body]</div>';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_comment_body']['empty'] = '<strong>Bisher ist noch keine Antwort eingetroffen</strong>';
  /* Field: Field: Documents */
  $handler->display->display_options['fields']['field_dialogue_documents']['id'] = 'field_dialogue_documents';
  $handler->display->display_options['fields']['field_dialogue_documents']['table'] = 'field_data_field_dialogue_documents';
  $handler->display->display_options['fields']['field_dialogue_documents']['field'] = 'field_dialogue_documents';
  $handler->display->display_options['fields']['field_dialogue_documents']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_documents']['label'] = 'Anhänge';
  $handler->display->display_options['fields']['field_dialogue_documents']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_dialogue_documents']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_documents']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_documents']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_documents']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_dialogue_documents']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_dialogue_documents']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dialogue_documents']['multi_type'] = 'ul';
  /* Field: Field: Annotation */
  $handler->display->display_options['fields']['field_dialogue_annotation']['id'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['table'] = 'field_data_field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['field'] = 'field_dialogue_annotation';
  $handler->display->display_options['fields']['field_dialogue_annotation']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_annotation']['label'] = 'Anmerkung der Redaktion';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_label_class'] = 'small';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_wrapper_class'] = 'small annotation clear';
  $handler->display->display_options['fields']['field_dialogue_annotation']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Weitere Informationen zur Antwort';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  /* Field: Comment: Response time */
  $handler->display->display_options['fields']['field_dialogue_response_time']['id'] = 'field_dialogue_response_time';
  $handler->display->display_options['fields']['field_dialogue_response_time']['table'] = 'field_data_field_dialogue_response_time';
  $handler->display->display_options['fields']['field_dialogue_response_time']['field'] = 'field_dialogue_response_time';
  $handler->display->display_options['fields']['field_dialogue_response_time']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_dialogue_response_time']['label'] = 'Dauer zur eingetroffenen Antwort';
  $handler->display->display_options['fields']['field_dialogue_response_time']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_dialogue_response_time']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_response_time']['element_wrapper_class'] = 'pw-response-time';
  $handler->display->display_options['fields']['field_dialogue_response_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_response_time']['hide_empty'] = TRUE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_dialogue_tags_1']['id'] = 'field_dialogue_tags_1';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['table'] = 'field_data_field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['field'] = 'field_dialogue_tags';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['label'] = 'Schlagworte';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['element_wrapper_class'] = 'icon-taxonomy';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_tags_1']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_dialogue_tags_1']['delta_offset'] = '0';
  /* Field: Content: Path: Print */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['ui_name'] = 'Content: Path: Print';
  $handler->display->display_options['fields']['path_1']['label'] = '';
  $handler->display->display_options['fields']['path_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path_1']['alter']['text'] = 'Frage und Antwort drucken';
  $handler->display->display_options['fields']['path_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path_1']['alter']['path'] = 'print[path_1]';
  $handler->display->display_options['fields']['path_1']['alter']['link_class'] = 'print-page';
  $handler->display->display_options['fields']['path_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['path_1']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_4']['label'] = 'permalink-wrapper';
  /* Field: Global: Custom text: Headline */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Global: Custom text: Headline';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Permanent-Link zu obenstehender Frage und Antwort';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Global: PHP: Permalink';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php_1']['element_wrapper_class'] = 'permalink';
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = FALSE;
  /* Field: excluded | edit answer */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['relationship'] = 'cid';
  $handler->display->display_options['fields']['edit_comment']['ui_name'] = 'excluded | edit answer';
  $handler->display->display_options['fields']['edit_comment']['label'] = '';
  $handler->display->display_options['fields']['edit_comment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_comment']['text'] = 'edit answer';
  $handler->display->display_options['fields']['edit_comment']['destination'] = TRUE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_comment' => 'edit_comment',
    'edit_node' => 'edit_node',
    'uid' => 0,
    'nid' => 0,
    'sharethis' => 0,
    'fieldset_1' => 0,
    'field_dialogue_topic' => 0,
    'created' => 0,
    'field_dialogue_sender_name' => 0,
    'body' => 0,
    'field_dialogue_tags' => 0,
    'fieldset_2' => 0,
    'fieldset_3' => 0,
    'fieldset_5' => 0,
    'field_user_picture' => 0,
    'field_image_copyright' => 0,
    'field_user_fname' => 0,
    'field_user_lname' => 0,
    'created_1' => 0,
    'comment_body' => 0,
    'fieldset' => 0,
    'field_dialogue_topic_1' => 0,
    'path_1' => 0,
    'fieldset_4' => 0,
    'nothing_1' => 0,
    'path' => 0,
    'php' => 0,
    'php_2' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Comment: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'comment';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'cid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['profile_questions_answers'] = array(
    t('Master'),
    t('Questions & Answers'),
    t('weiterlesen'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('first'),
    t('zurück'),
    t('weiter'),
    t('last'),
    t('php'),
    t('<div class="pw-messages warning">
Mit Ihrer Auswahl wurden leider keine Ergebnisse gefunden.<br/>Bitte treffen Sie eine neue Auswahl über einen der angebotenen Filter.
</div>'),
    t('Comments'),
    t('content author'),
    t('User entity referenced from field_dialogue_recipient'),
    t('Profilfoto'),
    t('Fieldset Question'),
    t('Thema'),
    t('Frage von'),
    t(' [field_dialogue_sender_name]<br/><span class="subline">[created]</span>
'),
    t('anonymous<br/><span class="subline">[created]</span>'),
    t('Anmerkung der Redaktion'),
    t('edit question'),
    t('Alle'),
    t('Full content'),
    t('Fragen an [field_user_fname] [field_user_lname]'),
    t('A content pane used on the full content of the question'),
    t('more'),
    t(' [field_dialogue_sender_name]<br/><span class="subline">[created]</span>
 -'),
    t('View panes'),
    t('Landingpage Parliament'),
    t('A content pane used on the election landingpage'),
    t('Load more'),
    t('[field_user_title] [field_user_fname] [field_user_lname]'),
    t(' [field_dialogue_sender_name]<br/><span class="subline">an [view_user] am [created]</span>
'),
    t('Ganze Frage lesen'),
    t('Post date Question'),
    t('Answers pane'),
    t('Fieldset Answer'),
    t('Fieldset Answer Inner'),
    t('<h3>
    Antwort von [field_user_title] [field_user_fname] [field_user_lname]<br/>
    <span class="subline">[created_1]</span>
</h3>'),
    t('Standard-Antwort <span class="ic-info ic-right"><span class="info-title"></span><span class="info-content element-hidden">"Standard-Antworten" sind Antworten, in denen Politiker mitteilen, dass sie über abgeordnetenwatch.de grundsätzlich nicht auf Fragen eingehen wollen. Diese werden in der Statistik als "keine Antwort" gewertet.</span></span>'),
    t('<div class="content clear">[field_dialogue_comment_body]</div>'),
    t('<strong>Bisher ist noch keine Antwort eingetroffen</strong>'),
    t('Anhänge'),
    t('Weitere Informationen zur Antwort'),
    t('Dauer zur eingetroffenen Antwort'),
    t('Schlagworte'),
    t('Frage und Antwort drucken'),
    t('permalink-wrapper'),
    t('Permanent-Link zu obenstehender Frage und Antwort'),
    t('edit answer'),
    t('Answers pane full content'),
    t('<div class="comment">
    <div class="content-inner">
        <strong><?php print t(\'Bisher ist noch keine Antwort eingetroffen\'); ?></strong>
    </div>
</div>'),
  );
  $export['profile_questions_answers'] = $view;

  $view = new view();
  $view->name = 'pw_dialogue_answers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'PW Dialogue answers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PW Dialogue answers';
  $handler->display->display_options['css_class'] = 'view-answers';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'comment answer push-bottom-l';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['id'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['table'] = 'field_data_field_dialogue_recipient';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['field'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['relationship'] = 'nid';
  $handler->display->display_options['relationships']['field_dialogue_recipient_target_id']['required'] = TRUE;
  /* Relationship: User: Profile picture (field_user_picture:fid) */
  $handler->display->display_options['relationships']['field_user_picture_fid']['id'] = 'field_user_picture_fid';
  $handler->display->display_options['relationships']['field_user_picture_fid']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['relationships']['field_user_picture_fid']['field'] = 'field_user_picture_fid';
  $handler->display->display_options['relationships']['field_user_picture_fid']['relationship'] = 'field_dialogue_recipient_target_id';
  /* Field: excluded | uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'excluded | uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['relationship'] = 'nid';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['sharethis']['element_default_classes'] = FALSE;
  /* Field: User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['field_user_picture']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'float-left push-bottom-xs push-right-m pw_portrait_s';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_s',
  );
  /* Field: h3 */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'h3';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname']['element_default_classes'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['alter']['text'] = '[field_user_lname],';
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Field: User: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'field_data_field_user_party';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_party']['label'] = '';
  $handler->display->display_options['fields']['field_user_party']['alter']['text'] = '[field_user_fname] [field_user_lname], [field_user_party]';
  $handler->display->display_options['fields']['field_user_party']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party']['settings'] = array(
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
  );
  $handler->display->display_options['fields']['field_user_party']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'nid';
  $handler->display->display_options['fields']['created']['label'] = 'zu einer Frage vom ';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'subline';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only_short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: /h3 */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = '/h3';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '</h3>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  /* Field: User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get']['id'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['table'] = 'field_data_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['field'] = 'field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_questions_get']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get']['alter']['text'] = '[field_user_questions_get],';
  $handler->display->display_options['fields']['field_user_questions_get']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  );
  /* Field: User: Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give']['id'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['table'] = 'field_data_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['field'] = 'field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['field_user_answers_give']['label'] = '';
  $handler->display->display_options['fields']['field_user_answers_give']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give']['settings'] = array(
    'thousand_separator' => '.',
    'prefix_suffix' => 1,
  );
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['element_type'] = 'p';
  $handler->display->display_options['fields']['view_user']['element_class'] = 'link-profile';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_user']['text'] = 'Profil besuchen';
  /* Field: Comment: Comment Body */
  $handler->display->display_options['fields']['field_dialogue_comment_body']['id'] = 'field_dialogue_comment_body';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['table'] = 'field_data_field_dialogue_comment_body';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['field'] = 'field_dialogue_comment_body';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['label'] = '';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_comment_body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['element_wrapper_class'] = 'clear';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dialogue_comment_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_dialogue_comment_body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'nid';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'span';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'read-more';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_wrapper_class'] = 'bg-white clear';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Frage und ganze Antwort lesen';
  /* Field: excluded | edit answer */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'comment';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['ui_name'] = 'excluded | edit answer';
  $handler->display->display_options['fields']['edit_comment']['label'] = '';
  $handler->display->display_options['fields']['edit_comment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_comment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_comment']['text'] = 'edit answer';
  /* Field: excluded | edit recipient */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_dialogue_recipient_target_id';
  $handler->display->display_options['fields']['edit_node']['ui_name'] = 'excluded | edit recipient';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit recipient';
  /* Field: excluded | edit question */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['edit_node_1']['ui_name'] = 'excluded | edit question';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'edit question';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_comment' => 'edit_comment',
    'edit_node' => 'edit_node',
    'edit_node_1' => 'edit_node_1',
    'uid' => 0,
    'fieldset' => 0,
    'sharethis' => 0,
    'field_user_picture' => 0,
    'nothing' => 0,
    'field_user_fname' => 0,
    'field_user_lname' => 0,
    'field_user_party' => 0,
    'created' => 0,
    'nothing_1' => 0,
    'fieldset_1' => 0,
    'field_user_questions_get' => 0,
    'field_user_answers_give' => 0,
    'view_user' => 0,
    'field_dialogue_comment_body' => 0,
    'view_node' => 0,
  );
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Parliament (field_parliament) */
  $handler->display->display_options['arguments']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['arguments']['field_parliament_tid']['field'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_parliament_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_parliament_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_parliament_tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['field_parliament_tid']['validate']['fail'] = 'ignore';
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dialogue' => 'dialogue',
  );
  /* Filter criterion: Comment: Comment Body (field_dialogue_comment_body:summary) */
  $handler->display->display_options['filters']['field_dialogue_comment_body_summary']['id'] = 'field_dialogue_comment_body_summary';
  $handler->display->display_options['filters']['field_dialogue_comment_body_summary']['table'] = 'field_data_field_dialogue_comment_body';
  $handler->display->display_options['filters']['field_dialogue_comment_body_summary']['field'] = 'field_dialogue_comment_body_summary';
  $handler->display->display_options['filters']['field_dialogue_comment_body_summary']['operator'] = 'not empty';
  /* Filter criterion: Comment: Standard reply (field_dialogue_is_standard_reply) */
  $handler->display->display_options['filters']['field_dialogue_is_standard_reply_value']['id'] = 'field_dialogue_is_standard_reply_value';
  $handler->display->display_options['filters']['field_dialogue_is_standard_reply_value']['table'] = 'field_data_field_dialogue_is_standard_reply';
  $handler->display->display_options['filters']['field_dialogue_is_standard_reply_value']['field'] = 'field_dialogue_is_standard_reply_value';
  $handler->display->display_options['filters']['field_dialogue_is_standard_reply_value']['value'] = array(
    0 => '0',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['pw_dialogue_answers'] = array(
    t('Master'),
    t('PW Dialogue answers'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('weiter'),
    t('letzte Seite »'),
    t('Load more'),
    t('Content'),
    t('User entity referenced from field_dialogue_recipient'),
    t('image from field_user_picture'),
    t('Broken handler views.fieldset'),
    t('<h3>'),
    t('[field_user_lname],'),
    t('[field_user_fname] [field_user_lname], [field_user_party]'),
    t('zu einer Frage vom '),
    t('</h3>'),
    t('[field_user_questions_get],'),
    t('Profil besuchen'),
    t('Frage und ganze Antwort lesen'),
    t('edit answer'),
    t('edit recipient'),
    t('edit question'),
    t('Alle'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['pw_dialogue_answers'] = $view;

  return $export;
}
