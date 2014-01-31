<?php
/**
 * @file
 * pw_donation_form.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_donation_form_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['featured_content-1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '1',
    'i18n_mode' => '0',
    'module' => 'featured_content',
    'node_types' => array(),
    'pages' => '*/vielen-dank',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '1',
  );

  return $export;
}
