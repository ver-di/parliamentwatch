<?php
/**
 * @file
 * pw_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-uvvZihgul8RzqD5UR2aL4hhqKCdte2JP'] = array(
    'cache' => '-1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'uvvZihgul8RzqD5UR2aL4hhqKCdte2JP',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '-92',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Wahlkreise',
    'visibility' => '0',
  );

  return $export;
}
