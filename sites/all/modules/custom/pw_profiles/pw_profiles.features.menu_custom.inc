<?php
/**
 * @file
 * pw_profiles.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pw_profiles_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-calendar-options-menu.
  $menus['menu-calendar-options-menu'] = array(
    'menu_name' => 'menu-calendar-options-menu',
    'title' => 'Calendar Options Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar Options Menu');


  return $menus;
}
