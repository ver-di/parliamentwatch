<?php
/**
 * @file
 * pw_petitions.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_petitions_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-petitions_description'] = array(
    'cache' => '1',
    'css_class' => 'push-bottom-xl',
    'custom' => '0',
    'machine_name' => 'petitions_description',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views--exp-pw_vote_search-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => '-exp-pw_vote_search-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'petitionen/suche
petitionen/suche/*',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
