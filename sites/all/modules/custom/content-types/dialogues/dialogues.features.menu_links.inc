<?php
/**
 * @file
 * dialogues.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dialogues_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-main-menu-en:menu-position/9
  $menu_links['menu-main-menu-en:menu-position/9'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => 'menu-position/9',
    'router_path' => 'menu-position/%',
    'link_title' => 'Dialogue EN (menu position rule)',
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
  // Exported menu link: menu-main-menu-ga:menu-position/10
  $menu_links['menu-main-menu-ga:menu-position/10'] = array(
    'menu_name' => 'menu-main-menu-ga',
    'link_path' => 'menu-position/10',
    'router_path' => 'menu-position/%',
    'link_title' => 'Dialogue GA (menu position rule)',
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
  t('Dialogue EN (menu position rule)');
  t('Dialogue GA (menu position rule)');


  return $menu_links;
}
