<?php
/**
 * @file
 * pw_election_programmes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_election_programmes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'election_programme';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Election programme';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wahlprogramme %1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'weiterlesen';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'pw-list-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Beziehung: Inhalt: PDF download (field_pdf_download:fid) */
  $handler->display->display_options['relationships']['field_pdf_download_fid']['id'] = 'field_pdf_download_fid';
  $handler->display->display_options['relationships']['field_pdf_download_fid']['table'] = 'field_data_field_pdf_download';
  $handler->display->display_options['relationships']['field_pdf_download_fid']['field'] = 'field_pdf_download_fid';
  /* Feld: (excluded) Link raw URL */
  $handler->display->display_options['fields']['field_election_programme_open_1']['id'] = 'field_election_programme_open_1';
  $handler->display->display_options['fields']['field_election_programme_open_1']['table'] = 'field_data_field_election_programme_open';
  $handler->display->display_options['fields']['field_election_programme_open_1']['field'] = 'field_election_programme_open';
  $handler->display->display_options['fields']['field_election_programme_open_1']['ui_name'] = '(excluded) Link raw URL';
  $handler->display->display_options['fields']['field_election_programme_open_1']['label'] = '';
  $handler->display->display_options['fields']['field_election_programme_open_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_election_programme_open_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_election_programme_open_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_election_programme_open_1']['type'] = 'link_plain';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Feld: Global: Feldgruppe */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_teaser_image',
    1 => 'body',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'clearfix push-bottom-s';
  /* Feld: Inhalt: Teaser image */
  $handler->display->display_options['fields']['field_teaser_image']['id'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['table'] = 'field_data_field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['field'] = 'field_teaser_image';
  $handler->display->display_options['fields']['field_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['path'] = '[field_election_programme_open_1]';
  $handler->display->display_options['fields']['field_teaser_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_image']['alter']['alt'] = 'Wahlprogramm durchblättern';
  $handler->display->display_options['fields']['field_teaser_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_teaser_image']['element_wrapper_class'] = 'file-image float-left push-bottom-s';
  $handler->display->display_options['fields']['field_teaser_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_teaser_image']['settings'] = array(
    'image_style' => 'pw_landscape_l__normal',
    'image_link' => '',
  );
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Feld: Global: Feldgruppe */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_election_programme_open',
    1 => 'uri',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'clear text-right';
  /* Feld: Inhalt: Link */
  $handler->display->display_options['fields']['field_election_programme_open']['id'] = 'field_election_programme_open';
  $handler->display->display_options['fields']['field_election_programme_open']['table'] = 'field_data_field_election_programme_open';
  $handler->display->display_options['fields']['field_election_programme_open']['field'] = 'field_election_programme_open';
  $handler->display->display_options['fields']['field_election_programme_open']['label'] = '';
  $handler->display->display_options['fields']['field_election_programme_open']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_election_programme_open']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_election_programme_open']['element_wrapper_class'] = 'read-more';
  $handler->display->display_options['fields']['field_election_programme_open']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_election_programme_open']['click_sort_column'] = 'url';
  /* Feld: Datei: Pfad */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_pdf_download_fid';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uri']['alter']['text'] = 'Wahlprogramm runterladen';
  $handler->display->display_options['fields']['uri']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uri']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['uri']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['uri']['element_wrapper_class'] = 'link-download';
  $handler->display->display_options['fields']['uri']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Feld: Inhalt: ‚Bearbeiten‘-Link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Link löschen */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Feld: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'delete_node' => 'delete_node',
    'edit_node' => 'edit_node',
    'field_election_programme_open_1' => 0,
    'title' => 0,
    'field_teaser_image' => 0,
    'body' => 0,
    'field_election_programme_open' => 0,
    'field_pdf_download' => 0,
  );
  /* Sortierkriterien: Gewichtung: Gewichtung */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sortierkriterien: Inhalt: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontextfilter: Inhalt: Besitzt eine Taxonomiebegriff-TID. */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'access denied';
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
    'election_programme' => 'election_programme',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'election-programme/%';
  $translatables['election_programme'] = array(
    t('Master'),
    t('Wahlprogramme %1'),
    t('weiterlesen'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Datei von field_pdf_download'),
    t('Feldgruppe'),
    t('Wahlprogramm durchblättern'),
    t('Wahlprogramm runterladen'),
    t('Alle'),
    t('Page'),
    t('mehr'),
  );
  $export['election_programme'] = $view;

  return $export;
}
