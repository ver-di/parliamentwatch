<?php
/**
 * @file
 * pw_search_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_search_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'politician_search_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_politician_index';
  $view->human_name = 'Politician Search View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Suche nach Politikern';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Für Ihre Suchanfrage liegen keine Ergebnisse vor.';
  $handler->display->display_options['empty']['area']['format'] = 'managed_content';
  /* Feld: Indexed Benutzer: Benutzer-ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Feld: Indexed Benutzer: Address » Vollständiger Name */
  $handler->display->display_options['fields']['field_user_address_name_line']['id'] = 'field_user_address_name_line';
  $handler->display->display_options['fields']['field_user_address_name_line']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['fields']['field_user_address_name_line']['field'] = 'field_user_address_name_line';
  $handler->display->display_options['fields']['field_user_address_name_line']['link_to_entity'] = 0;
  /* Feld: Indexed Benutzer: Constituency */
  $handler->display->display_options['fields']['field_user_constituency']['id'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['fields']['field_user_constituency']['field'] = 'field_user_constituency';
  $handler->display->display_options['fields']['field_user_constituency']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_constituency']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_user_constituency']['bypass_access'] = 0;
  /* Feld: Indexed Benutzer: First Name */
  $handler->display->display_options['fields']['field_user_fname']['id'] = 'field_user_fname';
  $handler->display->display_options['fields']['field_user_fname']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['fields']['field_user_fname']['field'] = 'field_user_fname';
  /* Feld: Indexed Benutzer: Last name */
  $handler->display->display_options['fields']['field_user_lname']['id'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['fields']['field_user_lname']['field'] = 'field_user_lname';
  $handler->display->display_options['fields']['field_user_lname']['label'] = 'Nachname';
  /* Feld: Indexed Benutzer: Parliament */
  $handler->display->display_options['fields']['field_user_parliament']['id'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['fields']['field_user_parliament']['field'] = 'field_user_parliament';
  $handler->display->display_options['fields']['field_user_parliament']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_parliament']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_user_parliament']['bypass_access'] = 0;
  /* Feld: Indexed Benutzer: Party */
  $handler->display->display_options['fields']['field_user_party']['id'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['fields']['field_user_party']['field'] = 'field_user_party';
  $handler->display->display_options['fields']['field_user_party']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_user_party']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_user_party']['bypass_access'] = 0;
  /* Feld: Parliament: Name (indexed) */
  $handler->display->display_options['fields']['field_user_parliament_name']['id'] = 'field_user_parliament_name';
  $handler->display->display_options['fields']['field_user_parliament_name']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['fields']['field_user_parliament_name']['field'] = 'field_user_parliament_name';
  $handler->display->display_options['fields']['field_user_parliament_name']['link_to_entity'] = 0;
  /* Feld: Indexed Benutzer: First Letter of Lastname */
  $handler->display->display_options['fields']['field_user_first_letter_lname']['id'] = 'field_user_first_letter_lname';
  $handler->display->display_options['fields']['field_user_first_letter_lname']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['fields']['field_user_first_letter_lname']['field'] = 'field_user_first_letter_lname';
  /* Kontextfilter: Indexed Benutzer: Benutzerrollen */
  $handler->display->display_options['arguments']['roles']['id'] = 'roles';
  $handler->display->display_options['arguments']['roles']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['arguments']['roles']['field'] = 'roles';
  $handler->display->display_options['arguments']['roles']['exception']['value'] = 'alle';
  $handler->display->display_options['arguments']['roles']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['roles']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['roles']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['roles']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['roles']['not'] = 0;
  /* Filterkriterium: Suche: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_politician_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'k';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
    29859578 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'field_user_constituency:field_constituency_area_codes:name' => 'field_user_constituency:field_constituency_area_codes:name',
    'field_user_constituency:name' => 'field_user_constituency:name',
    'field_user_fname' => 'field_user_fname',
    'field_user_lname' => 'field_user_lname',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'suche/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['politician_search_view'] = array(
    t('Master'),
    t('Suche nach Politikern'),
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
    t('Für Ihre Suchanfrage liegen keine Ergebnisse vor.'),
    t('Benutzer-ID'),
    t('.'),
    t(','),
    t('Address » Vollständiger Name'),
    t('Constituency'),
    t('First Name'),
    t('Nachname'),
    t('Parliament'),
    t('Party'),
    t('Name (indexed)'),
    t('First Letter of Lastname'),
    t('Alle'),
    t('Page'),
    t('Block'),
  );
  $export['politician_search_view'] = $view;

  $view = new view();
  $view->name = 'suche';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_multi';
  $view->human_name = 'Suche';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Suche';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Suche: Node Index results */
  $handler->display->display_options['fields']['node_index']['id'] = 'node_index';
  $handler->display->display_options['fields']['node_index']['table'] = 'search_api_multi';
  $handler->display->display_options['fields']['node_index']['field'] = 'node_index';
  /* Feld: Suche: Index */
  $handler->display->display_options['fields']['search_api_multi_index']['id'] = 'search_api_multi_index';
  $handler->display->display_options['fields']['search_api_multi_index']['table'] = 'search_api_multi';
  $handler->display->display_options['fields']['search_api_multi_index']['field'] = 'search_api_multi_index';
  $handler->display->display_options['fields']['search_api_multi_index']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['search_api_multi_index']['bypass_access'] = 0;
  /* Sortierkriterien: Suche: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_multi';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Sortierkriterien: Node Index: Erstellungsdatum (indexed) */
  $handler->display->display_options['sorts']['node_index_created']['id'] = 'node_index_created';
  $handler->display->display_options['sorts']['node_index_created']['table'] = 'search_api_multi';
  $handler->display->display_options['sorts']['node_index_created']['field'] = 'node_index_created';
  $handler->display->display_options['sorts']['node_index_created']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sav/suche';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['suche'] = array(
    t('Master'),
    t('Suche'),
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
    t('Node Index results'),
    t('Index'),
    t('Page'),
    t('Block'),
  );
  $export['suche'] = $view;

  $view = new view();
  $view->name = 'vote_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_node_index';
  $view->human_name = 'Vote Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vote Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Indexed Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Filterkriterium: Indexed Inhalt: Inhaltstyp */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vote' => 'vote',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['vote_search'] = array(
    t('Master'),
    t('Vote Search'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Beitrags-ID'),
    t('.'),
    t(','),
    t('Block'),
  );
  $export['vote_search'] = $view;

  return $export;
}
