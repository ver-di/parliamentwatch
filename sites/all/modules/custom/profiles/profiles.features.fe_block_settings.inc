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

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-questionform_anchor' => array(
      'machine_name' => 'questionform_anchor',
      'module' => 'block',
    ),
  );

  // bartik
  $theme = array();

  $theme['block-questionform_anchor'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '1',
    'machine_name' => 'questionform_anchor',
  );

  $export['theme']['bartik'] = $theme;

  // dailwatch
  $theme = array();

  $theme['block-questionform_anchor'] = array(
    'module' => 'block',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '1',
    'machine_name' => 'questionform_anchor',
  );

  $export['theme']['dailwatch'] = $theme;

  // seven
  $theme = array();

  $theme['block-questionform_anchor'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '1',
    'machine_name' => 'questionform_anchor',
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
