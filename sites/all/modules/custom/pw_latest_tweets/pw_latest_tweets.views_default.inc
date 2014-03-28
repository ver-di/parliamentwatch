<?php
/**
 * @file
 * pw_latest_tweets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_latest_tweets_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = '3latesttweets';
  $view->description = 'Displays Twitter.com status messages for users who have associated Twitter accounts.';
  $view->tag = 'default';
  $view->base_table = 'twitter';
  $view->human_name = 'Latest Tweets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Twitter: Twitter status message ID */
  $handler->display->display_options['fields']['twitter_id']['id'] = 'twitter_id';
  $handler->display->display_options['fields']['twitter_id']['table'] = 'twitter';
  $handler->display->display_options['fields']['twitter_id']['field'] = 'twitter_id';
  /* Sort criterion: Twitter: Created time */
  $handler->display->display_options['sorts']['created_time']['id'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['table'] = 'twitter';
  $handler->display->display_options['sorts']['created_time']['field'] = 'created_time';
  $handler->display->display_options['sorts']['created_time']['order'] = 'DESC';

  /* Display: Latest Tweets */
  $handler = $view->new_display('block', 'Latest Tweets', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Twitter: Formatted tweet */
  $handler->display->display_options['fields']['formatted_tweet']['id'] = 'formatted_tweet';
  $handler->display->display_options['fields']['formatted_tweet']['table'] = 'twitter';
  $handler->display->display_options['fields']['formatted_tweet']['field'] = 'formatted_tweet';
  $handler->display->display_options['fields']['formatted_tweet']['label'] = '';
  $handler->display->display_options['fields']['formatted_tweet']['element_label_colon'] = FALSE;
  /* Feld: Twitter: Twitter status message ID */
  $handler->display->display_options['fields']['twitter_id_1']['id'] = 'twitter_id_1';
  $handler->display->display_options['fields']['twitter_id_1']['table'] = 'twitter';
  $handler->display->display_options['fields']['twitter_id_1']['field'] = 'twitter_id';
  $handler->display->display_options['fields']['twitter_id_1']['label'] = '';
  $handler->display->display_options['fields']['twitter_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['twitter_id_1']['element_label_colon'] = FALSE;
  $export['3latesttweets'] = $view;

  return $export;
}
