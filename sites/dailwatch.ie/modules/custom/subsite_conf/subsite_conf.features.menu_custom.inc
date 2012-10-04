<?php
/**
 * @file
 * subsite_conf.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function subsite_conf_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-us-en
  $menus['menu-about-us-en'] = array(
    'menu_name' => 'menu-about-us-en',
    'title' => 'About us EN',
    'description' => '',
    'language' => 'en-gb',
    'i18n_mode' => '2',
  );
  // Exported menu: menu-about-us-ga
  $menus['menu-about-us-ga'] = array(
    'menu_name' => 'menu-about-us-ga',
    'title' => 'About us GA',
    'description' => '',
    'language' => 'ga',
    'i18n_mode' => '2',
  );
  // Exported menu: menu-main-menu-en
  $menus['menu-main-menu-en'] = array(
    'menu_name' => 'menu-main-menu-en',
    'title' => 'Main Menu EN',
    'description' => '',
    'language' => 'en-gb',
    'i18n_mode' => '2',
  );
  // Exported menu: menu-main-menu-ga
  $menus['menu-main-menu-ga'] = array(
    'menu_name' => 'menu-main-menu-ga',
    'title' => 'Main Menu GA',
    'description' => '',
    'language' => 'ga',
    'i18n_mode' => '2',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About us EN');
  t('About us GA');
  t('Main Menu EN');
  t('Main Menu GA');


  return $menus;
}
