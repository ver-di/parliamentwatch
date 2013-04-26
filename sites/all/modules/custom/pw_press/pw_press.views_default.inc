<?php
/**
 * @file
 * pw_press.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_press_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press_articles';
  $view->description = 'A list of articles about the project found in the press';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Presseartikel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'pw-list-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  /* Field: Content: Date of publication */
  $handler->display->display_options['fields']['field_press_article_date']['id'] = 'field_press_article_date';
  $handler->display->display_options['fields']['field_press_article_date']['table'] = 'field_data_field_press_article_date';
  $handler->display->display_options['fields']['field_press_article_date']['field'] = 'field_press_article_date';
  $handler->display->display_options['fields']['field_press_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_press_article_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_press_article_date']['element_class'] = 'arrow-item';
  $handler->display->display_options['fields']['field_press_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_press_article_date']['element_wrapper_class'] = 'grid-2 alpha omega';
  $handler->display->display_options['fields']['field_press_article_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_date']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_press_article_publisher']['id'] = 'field_press_article_publisher';
  $handler->display->display_options['fields']['field_press_article_publisher']['table'] = 'field_data_field_press_article_publisher';
  $handler->display->display_options['fields']['field_press_article_publisher']['field'] = 'field_press_article_publisher';
  $handler->display->display_options['fields']['field_press_article_publisher']['label'] = '';
  $handler->display->display_options['fields']['field_press_article_publisher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_publisher']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_publisher']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_publisher']['type'] = 'text_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[field_press_article_publisher]</h4>
<div class="light">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'grid-4';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['alter']['text'] = 'Video';
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['uri']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Attachment */
  $handler->display->display_options['fields']['field_press_article_attachment']['id'] = 'field_press_article_attachment';
  $handler->display->display_options['fields']['field_press_article_attachment']['table'] = 'field_data_field_press_article_attachment';
  $handler->display->display_options['fields']['field_press_article_attachment']['field'] = 'field_press_article_attachment';
  $handler->display->display_options['fields']['field_press_article_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_press_article_attachment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_attachment']['alter']['text'] = 'pdf-Download';
  $handler->display->display_options['fields']['field_press_article_attachment']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_attachment']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['field_press_article_attachment']['alter']['alt'] = 'pdf-Download';
  $handler->display->display_options['fields']['field_press_article_attachment']['alter']['link_class'] = 'link-download';
  $handler->display->display_options['fields']['field_press_article_attachment']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_press_article_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_attachment']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_press_article_attachment']['element_wrapper_class'] = 'grid-2 omega download';
  $handler->display->display_options['fields']['field_press_article_attachment']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_attachment']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_article_attachment']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_press_article_attachment']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: External link */
  $handler->display->display_options['fields']['field_press_article_link']['id'] = 'field_press_article_link';
  $handler->display->display_options['fields']['field_press_article_link']['table'] = 'field_data_field_press_article_link';
  $handler->display->display_options['fields']['field_press_article_link']['field'] = 'field_press_article_link';
  $handler->display->display_options['fields']['field_press_article_link']['label'] = '';
  $handler->display->display_options['fields']['field_press_article_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_link']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_press_article_link']['element_wrapper_class'] = 'grid-2 omega download';
  $handler->display->display_options['fields']['field_press_article_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_link']['click_sort_column'] = 'url';
  /* Field: Content: Soundfile */
  $handler->display->display_options['fields']['field_press_article_sound']['id'] = 'field_press_article_sound';
  $handler->display->display_options['fields']['field_press_article_sound']['table'] = 'field_data_field_press_article_sound';
  $handler->display->display_options['fields']['field_press_article_sound']['field'] = 'field_press_article_sound';
  $handler->display->display_options['fields']['field_press_article_sound']['label'] = '';
  $handler->display->display_options['fields']['field_press_article_sound']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_sound']['alter']['text'] = 'Sound';
  $handler->display->display_options['fields']['field_press_article_sound']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_sound']['alter']['path'] = '[uri]?width=500&height=500&iframe=true';
  $handler->display->display_options['fields']['field_press_article_sound']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_sound']['alter']['link_class'] = 'link-sound colorbox-load';
  $handler->display->display_options['fields']['field_press_article_sound']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_sound']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_press_article_sound']['element_wrapper_class'] = 'grid-2 omega download';
  $handler->display->display_options['fields']['field_press_article_sound']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_sound']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_article_sound']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_press_article_video']['id'] = 'field_press_article_video';
  $handler->display->display_options['fields']['field_press_article_video']['table'] = 'field_data_field_press_article_video';
  $handler->display->display_options['fields']['field_press_article_video']['field'] = 'field_press_article_video';
  $handler->display->display_options['fields']['field_press_article_video']['label'] = '';
  $handler->display->display_options['fields']['field_press_article_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_video']['alter']['text'] = 'Video';
  $handler->display->display_options['fields']['field_press_article_video']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_video']['alter']['path'] = '[uri]?&width=500&height=500&iframe=true';
  $handler->display->display_options['fields']['field_press_article_video']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_video']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_video']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_video']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_video']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_press_article_video']['alter']['link_class'] = 'link-video colorbox-load';
  $handler->display->display_options['fields']['field_press_article_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_video']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_press_article_video']['element_wrapper_class'] = 'grid-2 omega download';
  $handler->display->display_options['fields']['field_press_article_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_article_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_press_article_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_article_video']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit press article';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete press article';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'field_press_article_date' => 0,
    'field_press_article_publisher' => 0,
    'title' => 0,
    'uri' => 0,
    'field_press_article_attachment' => 0,
    'field_press_article_link' => 0,
    'field_press_article_video' => 0,
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
    'press_article' => 'press_article',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'about/press';
  $export['press_articles'] = $view;

  $view = new view();
  $view->name = 'press_release';
  $view->description = 'A list of teasered press releases';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Press release';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pressemitteilungen';
  $handler->display->display_options['css_class'] = 'push-bottom-l';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'zurück';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'weiter';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'pw-list-item clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_press_release_date']['id'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['field'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_press_release_date']['element_class'] = 'arrow-item';
  $handler->display->display_options['fields']['field_press_release_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_press_release_date']['element_wrapper_class'] = 'grid-2 alpha omega';
  $handler->display->display_options['fields']['field_press_release_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_date']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'pushfloat-2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_press_release_body']['id'] = 'field_press_release_body';
  $handler->display->display_options['fields']['field_press_release_body']['table'] = 'field_data_field_press_release_body';
  $handler->display->display_options['fields']['field_press_release_body']['field'] = 'field_press_release_body';
  $handler->display->display_options['fields']['field_press_release_body']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_press_release_body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_body']['alter']['more_link_text'] = 'weiterlesen';
  $handler->display->display_options['fields']['field_press_release_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_press_release_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_press_release_body']['element_wrapper_class'] = 'pushfloat-2';
  $handler->display->display_options['fields']['field_press_release_body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_press_release_body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit press release';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete press release';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'field_press_release_date' => 0,
    'title' => 0,
    'field_press_release_body' => 0,
    'view_node' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'press_release' => 'press_release',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'about/press/press-releases';
  $export['press_release'] = $view;

  return $export;
}
