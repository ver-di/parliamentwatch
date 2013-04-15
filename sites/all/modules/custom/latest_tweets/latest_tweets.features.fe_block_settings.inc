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

  $export['version'] = '2.0';

  $export['views-3latesttweets-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '3latesttweets-block',
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '-50',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-tweets-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'tweets-block',
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
