<?php
/**
 * @file
 * pw_slider.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_slider_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Artikel sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'absteigend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slider_url' => 'field_slider_url',
    'field_slider_teaserbody' => 'field_slider_teaserbody',
    'title' => 0,
    'body' => 0,
    'webform_form_body' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slider_url' => 'field_slider_url',
    'field_slider_teaserbody' => 'field_slider_teaserbody',
    'title' => 0,
    'body' => 0,
    'webform_form_body' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_when_hidden'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kopfbereich: Global: Textbereich */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<?php
drupal_add_css(\'sites/all/themes/custom/parliamentwatch/css/slider.css\', array(\'group\' => CSS_DEFAULT, \'every_page\' => TRUE));
drupal_add_js(\'sites/all/themes/custom/parliamentwatch/js/slider.js\');
?>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Feld: Inhalt: Beschreibung mit LInk */
  $handler->display->display_options['fields']['field_slider_url']['id'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['table'] = 'field_data_field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['field'] = 'field_slider_url';
  $handler->display->display_options['fields']['field_slider_url']['label'] = '';
  $handler->display->display_options['fields']['field_slider_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_slider_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slider_url']['group_column'] = 'url';
  /* Feld: Inhalt: Teaser Body */
  $handler->display->display_options['fields']['field_slider_teaserbody']['id'] = 'field_slider_teaserbody';
  $handler->display->display_options['fields']['field_slider_teaserbody']['table'] = 'field_data_field_slider_teaserbody';
  $handler->display->display_options['fields']['field_slider_teaserbody']['field'] = 'field_slider_teaserbody';
  $handler->display->display_options['fields']['field_slider_teaserbody']['label'] = '';
  $handler->display->display_options['fields']['field_slider_teaserbody']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_teaserbody']['alter']['text'] = '[field_slider_teaserbody]<div class="item"></div>';
  $handler->display->display_options['fields']['field_slider_teaserbody']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_teaserbody']['hide_alter_empty'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'clearfix';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  /* Feld: Webform: Webform form body */
  $handler->display->display_options['fields']['webform_form_body']['id'] = 'webform_form_body';
  $handler->display->display_options['fields']['webform_form_body']['table'] = 'node';
  $handler->display->display_options['fields']['webform_form_body']['field'] = 'webform_form_body';
  $handler->display->display_options['fields']['webform_form_body']['label'] = '';
  $handler->display->display_options['fields']['webform_form_body']['element_label_colon'] = FALSE;
  /* Feld: Global: Benutzerdefinierter Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="close">close</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sortierkriterien: Gewichtung: Gewichtung */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pw_slider' => 'pw_slider',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Sprache */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['slider'] = array(
    t('Master'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Artikel sortieren nach'),
    t('aufsteigend'),
    t('absteigend'),
    t('<?php
drupal_add_css(\'sites/all/themes/custom/parliamentwatch/css/slider.css\', array(\'group\' => CSS_DEFAULT, \'every_page\' => TRUE));
drupal_add_js(\'sites/all/themes/custom/parliamentwatch/js/slider.js\');
?>'),
    t('[field_slider_teaserbody]<div class="item"></div>'),
    t('<span class="close">close</span>'),
    t('Block'),
  );
  $export['slider'] = $view;

  return $export;
}
