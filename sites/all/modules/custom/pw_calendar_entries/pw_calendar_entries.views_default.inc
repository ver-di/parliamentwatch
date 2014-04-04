<?php
/**
 * @file
 * pw_calendar_entries.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_calendar_entries_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_committee_memberships';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Committee Memberships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Politische Funktionen von ';
  $handler->display->display_options['css_class'] = 'zebra';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Feld: Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Inhalt: Datum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Inhalt: User Name (field_user_name) */
  $handler->display->display_options['arguments']['field_user_name_target_id']['id'] = 'field_user_name_target_id';
  $handler->display->display_options['arguments']['field_user_name_target_id']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['arguments']['field_user_name_target_id']['field'] = 'field_user_name_target_id';
  $handler->display->display_options['arguments']['field_user_name_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_user_name_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_user_name_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_user_name_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_user_name_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_user_name_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_user_name_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_user_name_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_user_name_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_user_name_target_id']['validate_options']['type'] = 'either';
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
    'cm_calendar_entry' => 'cm_calendar_entry',
  );

  /* Display: Political Roles */
  $handler = $view->new_display('block', 'Political Roles', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Politische Funktionen von [field_user_fname] [field_user_lname] ';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_fname' => 'field_user_fname',
    'field_user_lname' => 'field_user_lname',
    'field_valid' => 'field_valid',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_fname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="add-sharethis" title="Politcial Roles of [field_user_fname]  [field_user_lname]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_name_target_id']['id'] = 'field_user_name_target_id';
  $handler->display->display_options['relationships']['field_user_name_target_id']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['relationships']['field_user_name_target_id']['field'] = 'field_user_name_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Feld: Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Benutzer: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'field_data_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['relationship'] = 'field_user_name_target_id';
  $handler->display->display_options['fields']['field_user_fname']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'field_data_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['relationship'] = 'field_user_name_target_id';
  $handler->display->display_options['fields']['field_user_lname']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname']['element_label_colon'] = FALSE;
  /* Feld: Exluded | Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Exluded | Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Feld: Excluded | Political Role */
  $handler->display->display_options['fields']['field_political_role']['id'] = 'field_political_role';
  $handler->display->display_options['fields']['field_political_role']['table'] = 'field_data_field_political_role';
  $handler->display->display_options['fields']['field_political_role']['field'] = 'field_political_role';
  $handler->display->display_options['fields']['field_political_role']['ui_name'] = 'Excluded | Political Role';
  $handler->display->display_options['fields']['field_political_role']['label'] = '';
  $handler->display->display_options['fields']['field_political_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_political_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_political_role']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Feld: Excluded | Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['ui_name'] = 'Excluded | Committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_political_role], [title] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'committee-memberships';
  $export['pw_committee_memberships'] = $view;

  return $export;
}
