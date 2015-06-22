<?php
/**
 * @file
 * pw_vote.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_vote_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_vote_positions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Vote Positions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PW Vote Positions';
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
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Weitere Positionen anzeigen';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'pw-list-seperated';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Beziehung: Inhalt: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sortierkriterien: Inhalt: Aktualisierungszeitpunkt */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'vote' => 'vote',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Benutzer: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    181527986 => '181527986',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['pw_vote_positions'] = array(
    t('Master'),
    t('PW Vote Positions'),
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
    t('Autor'),
    t('Block'),
  );
  $export['pw_vote_positions'] = $view;

  $view = new view();
  $view->name = 'pw_vote_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__solr';
  $view->human_name = 'PW Vote Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Petitionscheck-Suche';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Erweiterte Optionen',
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sortieroptionen',
        'combine' => 0,
        'combine_rewrite' => '',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
    'keyword' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'ss_vote_user_party' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'ss_vote_user_vote_text' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'managed_content';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Weitere Positionen laden';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'pw-list-seperated';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="messages warning">Zu Ihrer Auswahl wurden keine Ergebnisse gefunden.</div>';
  /* Feld: Apache Solr: ss_vote_user_full_name */
  $handler->display->display_options['fields']['ss_vote_user_full_name']['id'] = 'ss_vote_user_full_name';
  $handler->display->display_options['fields']['ss_vote_user_full_name']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_vote_user_full_name']['field'] = 'ss_vote_user_full_name';
  $handler->display->display_options['fields']['ss_vote_user_full_name']['label'] = 'Name';
  /* Feld: Apache Solr: ss_vote_user_party */
  $handler->display->display_options['fields']['ss_vote_user_party']['id'] = 'ss_vote_user_party';
  $handler->display->display_options['fields']['ss_vote_user_party']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_vote_user_party']['field'] = 'ss_vote_user_party';
  $handler->display->display_options['fields']['ss_vote_user_party']['label'] = 'Partei';
  /* Feld: Apache Solr: ss_vote_node_title */
  $handler->display->display_options['fields']['ss_vote_node_title']['id'] = 'ss_vote_node_title';
  $handler->display->display_options['fields']['ss_vote_node_title']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_vote_node_title']['field'] = 'ss_vote_node_title';
  $handler->display->display_options['fields']['ss_vote_node_title']['label'] = 'Petition';
  /* Feld: Apache Solr: im_field_vote */
  $handler->display->display_options['fields']['im_field_vote']['id'] = 'im_field_vote';
  $handler->display->display_options['fields']['im_field_vote']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['im_field_vote']['field'] = 'im_field_vote';
  $handler->display->display_options['fields']['im_field_vote']['label'] = '';
  $handler->display->display_options['fields']['im_field_vote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['im_field_vote']['element_label_colon'] = FALSE;
  /* Feld: Apache Solr: ss_vote_reason_summary */
  $handler->display->display_options['fields']['ss_vote_reason_summary']['id'] = 'ss_vote_reason_summary';
  $handler->display->display_options['fields']['ss_vote_reason_summary']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_vote_reason_summary']['field'] = 'ss_vote_reason_summary';
  $handler->display->display_options['fields']['ss_vote_reason_summary']['label'] = 'Begründung (kurz)';
  /* Feld: Apache Solr: ss_vote_reason_full */
  $handler->display->display_options['fields']['ss_vote_reason_full']['id'] = 'ss_vote_reason_full';
  $handler->display->display_options['fields']['ss_vote_reason_full']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_vote_reason_full']['field'] = 'ss_vote_reason_full';
  $handler->display->display_options['fields']['ss_vote_reason_full']['label'] = 'Begründung';
  /* Feld: Apache Solr: ss_vote_user_image_uri */
  $handler->display->display_options['fields']['ss_vote_user_image_uri']['id'] = 'ss_vote_user_image_uri';
  $handler->display->display_options['fields']['ss_vote_user_image_uri']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_vote_user_image_uri']['field'] = 'ss_vote_user_image_uri';
  $handler->display->display_options['fields']['ss_vote_user_image_uri']['label'] = 'User Image URI';
  /* Feld: Apache Solr: ss_vote_user_drupal_name */
  $handler->display->display_options['fields']['ss_vote_user_drupal_name']['id'] = 'ss_vote_user_drupal_name';
  $handler->display->display_options['fields']['ss_vote_user_drupal_name']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_vote_user_drupal_name']['field'] = 'ss_vote_user_drupal_name';
  $handler->display->display_options['fields']['ss_vote_user_drupal_name']['label'] = 'Drupal-Name';
  /* Feld: Apache Solr: ss_vote_user_vote_text */
  $handler->display->display_options['fields']['ss_vote_user_vote_text']['id'] = 'ss_vote_user_vote_text';
  $handler->display->display_options['fields']['ss_vote_user_vote_text']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_vote_user_vote_text']['field'] = 'ss_vote_user_vote_text';
  $handler->display->display_options['fields']['ss_vote_user_vote_text']['label'] = 'Stimme';
  /* Feld: Apache Solr: sm_field_vote_node */
  $handler->display->display_options['fields']['sm_field_vote_node']['id'] = 'sm_field_vote_node';
  $handler->display->display_options['fields']['sm_field_vote_node']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['sm_field_vote_node']['field'] = 'sm_field_vote_node';
  /* Feld: Apache Solr: ss_field_user_lname */
  $handler->display->display_options['fields']['ss_field_user_lname']['id'] = 'ss_field_user_lname';
  $handler->display->display_options['fields']['ss_field_user_lname']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_field_user_lname']['field'] = 'ss_field_user_lname';
  $handler->display->display_options['fields']['ss_field_user_lname']['label'] = 'Nachname';
  /* Feld: Apache Solr: ss_vote_user_vote_sortable */
  $handler->display->display_options['fields']['ss_vote_user_vote_sortable']['id'] = 'ss_vote_user_vote_sortable';
  $handler->display->display_options['fields']['ss_vote_user_vote_sortable']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ss_vote_user_vote_sortable']['field'] = 'ss_vote_user_vote_sortable';
  /* Feld: Apache Solr: ds_created */
  $handler->display->display_options['fields']['ds_created']['id'] = 'ds_created';
  $handler->display->display_options['fields']['ds_created']['table'] = 'apachesolr__solr';
  $handler->display->display_options['fields']['ds_created']['field'] = 'ds_created';
  /* Sortierkriterien: Apache Solr: ds_changed */
  $handler->display->display_options['sorts']['ds_changed']['id'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ds_changed']['field'] = 'ds_changed';
  $handler->display->display_options['sorts']['ds_changed']['order'] = 'DESC';
  /* Sortierkriterien: Apache Solr: ss_vote_user_vote_sortable */
  $handler->display->display_options['sorts']['ss_vote_user_vote_sortable']['id'] = 'ss_vote_user_vote_sortable';
  $handler->display->display_options['sorts']['ss_vote_user_vote_sortable']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ss_vote_user_vote_sortable']['field'] = 'ss_vote_user_vote_sortable';
  $handler->display->display_options['sorts']['ss_vote_user_vote_sortable']['expose']['label'] = 'ss_vote_user_vote_sortable';
  /* Sortierkriterien: Apache Solr: ss_field_user_lname */
  $handler->display->display_options['sorts']['ss_field_user_lname']['id'] = 'ss_field_user_lname';
  $handler->display->display_options['sorts']['ss_field_user_lname']['table'] = 'apachesolr__solr';
  $handler->display->display_options['sorts']['ss_field_user_lname']['field'] = 'ss_field_user_lname';
  /* Filterkriterium: Apache Solr: bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = 'vote';
  /* Filterkriterium: Apache Solr: Suche */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['keyword']['expose']['label'] = 'Suche';
  $handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
  $handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    51622513 => 0,
    181527986 => 0,
    140336230 => 0,
    185431326 => 0,
    178386088 => 0,
    40118511 => 0,
  );
  /* Filterkriterium: Apache Solr: ss_vote_user_party */
  $handler->display->display_options['filters']['ss_vote_user_party']['id'] = 'ss_vote_user_party';
  $handler->display->display_options['filters']['ss_vote_user_party']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['ss_vote_user_party']['field'] = 'ss_vote_user_party';
  $handler->display->display_options['filters']['ss_vote_user_party']['exposed'] = TRUE;
  $handler->display->display_options['filters']['ss_vote_user_party']['expose']['operator_id'] = 'ss_vote_user_party_op';
  $handler->display->display_options['filters']['ss_vote_user_party']['expose']['label'] = 'ss_vote_user_party';
  $handler->display->display_options['filters']['ss_vote_user_party']['expose']['operator'] = 'ss_vote_user_party_op';
  $handler->display->display_options['filters']['ss_vote_user_party']['expose']['identifier'] = 'ss_vote_user_party';
  $handler->display->display_options['filters']['ss_vote_user_party']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['ss_vote_user_party']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['ss_vote_user_party']['group_info']['label'] = 'Partei';
  $handler->display->display_options['filters']['ss_vote_user_party']['group_info']['identifier'] = 'ss_vote_user_party';
  $handler->display->display_options['filters']['ss_vote_user_party']['group_info']['default_group_multiple'] = array(
    1 => '1',
    2 => '2',
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['filters']['ss_vote_user_party']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'CDU',
      'operator' => '=',
      'value' => 'CDU',
    ),
    2 => array(
      'title' => 'CSU',
      'operator' => '=',
      'value' => 'CSU',
    ),
    3 => array(
      'title' => 'SPD',
      'operator' => '=',
      'value' => 'SPD',
    ),
    4 => array(
      'title' => 'DIE LINKE',
      'operator' => '=',
      'value' => '"DIE LINKE"',
    ),
    5 => array(
      'title' => 'DIE GRÜNEN',
      'operator' => '=',
      'value' => '"DIE GRÜNEN"',
    ),
    6 => array(
      'title' => '',
      'operator' => '=',
      'value' => '',
    ),
  );
  /* Filterkriterium: Apache Solr: ss_vote_user_vote_text */
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['id'] = 'ss_vote_user_vote_text';
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['field'] = 'ss_vote_user_vote_text';
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['exposed'] = TRUE;
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['expose']['operator_id'] = 'ss_vote_user_vote_text_op';
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['expose']['label'] = 'ss_vote_user_vote_text';
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['expose']['operator'] = 'ss_vote_user_vote_text_op';
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['expose']['identifier'] = 'ss_vote_user_vote_text';
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['group_info']['label'] = 'Stimme';
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['group_info']['identifier'] = 'ss_vote_user_vote_text';
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['group_info']['default_group_multiple'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['ss_vote_user_vote_text']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'dafür gestimmt',
      'operator' => '=',
      'value' => 'yes',
    ),
    2 => array(
      'title' => 'dagegen gestimmt',
      'operator' => '=',
      'value' => 'no',
    ),
    3 => array(
      'title' => 'enthalten',
      'operator' => '=',
      'value' => 'abstain',
    ),
    4 => array(
      'title' => 'nicht beteiligt',
      'operator' => '=',
      'value' => 'no-show',
    ),
  );
  /* Filterkriterium: Apache Solr: sm_field_vote_node */
  $handler->display->display_options['filters']['sm_field_vote_node']['id'] = 'sm_field_vote_node';
  $handler->display->display_options['filters']['sm_field_vote_node']['table'] = 'apachesolr__solr';
  $handler->display->display_options['filters']['sm_field_vote_node']['field'] = 'sm_field_vote_node';
  $handler->display->display_options['filters']['sm_field_vote_node']['operator'] = 'word';
  $handler->display->display_options['filters']['sm_field_vote_node']['value'] = '*51914*';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'petitionen/suche';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'PW Vote Search Block';
  $translatables['pw_vote_search'] = array(
    t('Master'),
    t('Petitionscheck-Suche'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Wählen Sie eine beliebige Filter und klicken Sie auf Anwenden, um Ergebnisse zu sehen'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('zurück'),
    t('weiter'),
    t('letzte Seite »'),
    t('<div class="messages warning">Zu Ihrer Auswahl wurden keine Ergebnisse gefunden.</div>'),
    t('Name'),
    t('Partei'),
    t('Petition'),
    t('Begründung (kurz)'),
    t('Begründung'),
    t('User Image URI'),
    t('Drupal-Name'),
    t('Stimme'),
    t('sm_field_vote_node'),
    t('Nachname'),
    t('ss_vote_user_vote_sortable'),
    t('ds_created'),
    t('Suche'),
    t('ss_vote_user_party'),
    t('ss_vote_user_vote_text'),
    t('Page'),
    t('Block'),
    t('PW Vote Search Block'),
  );
  $export['pw_vote_search'] = $view;

  return $export;
}
