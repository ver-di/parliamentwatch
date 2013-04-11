<?php
/**
 * @file
 * latest_tweets.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function latest_tweets_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'views-3latesttweets-block' => array(
      'delta' => '3latesttweets-block',
      'module' => 'views',
    ),
    'views-tweets-block' => array(
      'delta' => 'tweets-block',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['views-3latesttweets-block'] = array(
    'module' => 'views',
    'delta' => '3latesttweets-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-tweets-block'] = array(
    'module' => 'views',
    'delta' => 'tweets-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['bartik'] = $theme;

  // dailwatch
  $theme = array();

  $theme['views-3latesttweets-block'] = array(
    'module' => 'views',
    'delta' => '3latesttweets-block',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-tweets-block'] = array(
    'module' => 'views',
    'delta' => 'tweets-block',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['dailwatch'] = $theme;

  // seven
  $theme = array();

  $theme['views-3latesttweets-block'] = array(
    'module' => 'views',
    'delta' => '3latesttweets-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['views-tweets-block'] = array(
    'module' => 'views',
    'delta' => 'tweets-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
