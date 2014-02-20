<?php
/**
 * @file
 * pw_user_revision_switch.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_user_revision_switch_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-pw_user_revision_switch-block'] = array(
    'cache' => -1,
    'css_class' => 'relative',
    'custom' => '0',
    'delta' => 'pw_user_revision_switch-block',
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
