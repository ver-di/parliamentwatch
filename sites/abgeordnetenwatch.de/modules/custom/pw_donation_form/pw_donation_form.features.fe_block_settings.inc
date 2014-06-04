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

  $export['views-letzte_spender-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'letzte_spender-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'ueber-uns/spendenformular',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
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
    'title' => '',
    'visibility' => '1',
  );

  $export['views-spenden_nach_bundesland-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'delta' => 'spenden_nach_bundesland-block',
    'i18n_block_language' => array(),
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => 0,
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => 0,
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => 0,
      ),
    ),
  );

  return $export;
}
