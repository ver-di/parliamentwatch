<?php
/**
 * @file
 * profiles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function profiles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-main-menu-en:menu-position/6
  $menu_links['menu-main-menu-en:menu-position/6'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => 'menu-position/6',
    'router_path' => 'menu-position/%',
    'link_title' => 'Politician EN (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'politicians/dail',
  );
  // Exported menu link: menu-main-menu-ga:menu-position/8
  $menu_links['menu-main-menu-ga:menu-position/8'] = array(
    'menu_name' => 'menu-main-menu-ga',
    'link_path' => 'menu-position/8',
    'router_path' => 'menu-position/%',
    'link_title' => 'Politician GA (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'politicians/dail',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Politician EN (menu position rule)');
  t('Politician GA (menu position rule)');


  return $menu_links;
}
