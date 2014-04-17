<?php
/**
 * @file
 * pw_kandidatencheck.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_kandidatencheck_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_kandidatencheck';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Kandidatencheck';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kandidaten-Check';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'to the Kandidatencheck';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'http://kandidatencheck.abgeordnetenwatch.de/';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    51622513 => '51622513',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'body_1' => 0,
    'fieldset' => 0,
    'field_user_fname' => 0,
    'field_user_lname' => 0,
    'field_pw_kc_vote_reference' => 0,
    'field_user_picture' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'body_1' => 0,
    'fieldset' => 0,
    'field_user_fname' => 0,
    'field_user_lname' => 0,
    'field_pw_kc_vote_reference' => 0,
    'field_user_picture' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Kopfbereich: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
$uid = arg(1);
if ( arg(0) == \'user\' && is_numeric($uid) ) {
  $user = user_load($user->uid);
}
?>
';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="pw-messages warning">Leider hat der/die Kandidat/in nicht beim Kandidaten-Check Stellung bezogen.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'managed_content';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pw_kc_thesis_reference_target_id']['id'] = 'field_pw_kc_thesis_reference_target_id';
  $handler->display->display_options['relationships']['field_pw_kc_thesis_reference_target_id']['table'] = 'field_data_field_pw_kc_thesis_reference';
  $handler->display->display_options['relationships']['field_pw_kc_thesis_reference_target_id']['field'] = 'field_pw_kc_thesis_reference_target_id';
  $handler->display->display_options['relationships']['field_pw_kc_thesis_reference_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pw_kc_user_reference_target_id']['id'] = 'field_pw_kc_user_reference_target_id';
  $handler->display->display_options['relationships']['field_pw_kc_user_reference_target_id']['table'] = 'field_data_field_pw_kc_user_reference';
  $handler->display->display_options['relationships']['field_pw_kc_user_reference_target_id']['field'] = 'field_pw_kc_user_reference_target_id';
  $handler->display->display_options['relationships']['field_pw_kc_user_reference_target_id']['required'] = TRUE;
  /* Relationship: Inhalt: Vote (field_pw_kc_vote_reference) */
  $handler->display->display_options['relationships']['field_pw_kc_vote_reference_tid']['id'] = 'field_pw_kc_vote_reference_tid';
  $handler->display->display_options['relationships']['field_pw_kc_vote_reference_tid']['table'] = 'field_data_field_pw_kc_vote_reference';
  $handler->display->display_options['relationships']['field_pw_kc_vote_reference_tid']['field'] = 'field_pw_kc_vote_reference_tid';
  $handler->display->display_options['relationships']['field_pw_kc_vote_reference_tid']['required'] = TRUE;
  /* Feld: Excluded | Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['ui_name'] = 'Excluded | Content: Edit link';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit KC Position';
  /* Feld: Excluded | Taxonomy: Class name */
  $handler->display->display_options['fields']['field_pw_kc_votes_classname']['id'] = 'field_pw_kc_votes_classname';
  $handler->display->display_options['fields']['field_pw_kc_votes_classname']['table'] = 'field_data_field_pw_kc_votes_classname';
  $handler->display->display_options['fields']['field_pw_kc_votes_classname']['field'] = 'field_pw_kc_votes_classname';
  $handler->display->display_options['fields']['field_pw_kc_votes_classname']['relationship'] = 'field_pw_kc_vote_reference_tid';
  $handler->display->display_options['fields']['field_pw_kc_votes_classname']['ui_name'] = 'Excluded | Taxonomy: Class name';
  $handler->display->display_options['fields']['field_pw_kc_votes_classname']['label'] = '';
  $handler->display->display_options['fields']['field_pw_kc_votes_classname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pw_kc_votes_classname']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_pw_kc_thesis_reference_target_id';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body_1']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['body_1']['element_wrapper_class'] = 'push-bottom-xs';
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = FALSE;
  /* Feld: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_user_fname',
    1 => 'field_user_lname',
    2 => 'field_pw_kc_vote_reference',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'push-bottom-s';
  /* Feld: Excluded | User: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_pw_kc_user_reference_target_id';
  $handler->display->display_options['fields']['field_user_fname']['ui_name'] = 'Excluded | User: First Name';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  /* Feld: Benutzer: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_pw_kc_user_reference_target_id';
  $handler->display->display_options['fields']['field_user_lname']['label'] = 'Position von';
  $handler->display->display_options['fields']['field_user_lname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['alter']['text'] = ' [field_user_fname] [field_user_lname]:';
  $handler->display->display_options['fields']['field_user_lname']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_user_lname']['element_class'] = 'medium';
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname']['element_default_classes'] = FALSE;
  /* Feld: Inhalt: Vote */
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['id'] = 'field_pw_kc_vote_reference';
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['table'] = 'field_data_field_pw_kc_vote_reference';
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['field'] = 'field_pw_kc_vote_reference';
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['label'] = '';
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['element_class'] = '[field_pw_kc_votes_classname] block';
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['element_wrapper_class'] = 'poll-behavior';
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pw_kc_vote_reference']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Feld: Benutzer: Profile picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['relationship'] = 'field_pw_kc_user_reference_target_id';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'float-left pw-kc-profile-picture push-bottom-s';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_ms',
  );
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<blockquote>[body]</blockquote>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'pw-kc-argumentation';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  /* Feld: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_pw_kc_votes_classname' => 0,
    'body_1' => 0,
    'fieldset' => 0,
    'field_user_fname' => 0,
    'field_user_lname' => 0,
    'field_pw_kc_vote_reference' => 0,
    'field_user_picture' => 0,
    'body' => 0,
  );
  /* Sort criterion: Gewichtung: Gewichtung */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_pw_kc_thesis_reference_target_id';
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pw_kc_position' => 'pw_kc_position',
  );

  /* Display: Slideshow */
  $handler = $view->new_display('panel_pane', 'Slideshow', 'profile_slideshow');
  $handler->display->display_options['display_description'] = 'Slideshow for profiles';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_pw_kc_user_reference_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['uid']['validate_options']['restrict_roles'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate_options']['roles'] = array(
    181527986 => '181527986',
  );
  $export['pw_kandidatencheck'] = $view;

  return $export;
}
