<?php
/**
 * @file
 * pw_latest_tweets.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_latest_tweets_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-3latesttweets-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => '3latesttweets-block',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '-40',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '-40',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-tweets-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'tweets-block',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '8',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '8',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
