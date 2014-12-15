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

  $export['custom_search_blocks-1'] = array(
    'cache' => '-1',
    'css_class' => 'pw-custom-search',
    'custom' => '0',
    'delta' => '1',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'custom_search_blocks',
    'node_types' => array(),
    'pages' => 'search/*',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-94',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '-34',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '-34',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

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
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-91',
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
