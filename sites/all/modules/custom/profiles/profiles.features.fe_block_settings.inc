<?php
/**
 * @file
 * profiles.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function profiles_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-questionform_anchor'] = array(
    'cache' => -1,
    'custom' => '0',
    'i18n_mode' => '1',
    'machine_name' => 'questionform_anchor',
    'module' => 'block',
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
