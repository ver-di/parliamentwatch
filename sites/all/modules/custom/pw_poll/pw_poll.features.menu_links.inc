<?php
/**
 * @file
 * pw_poll.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pw_poll_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-main-menu-en:menu-position/3
  $menu_links['menu-main-menu-en:menu-position/3'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => 'menu-position/3',
    'router_path' => 'menu-position/%',
    'link_title' => 'Votes EN (menu position rule)',
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
    'parent_path' => 'votes/dail',
  );
  // Exported menu link: menu-main-menu-ga:menu-position/4
  $menu_links['menu-main-menu-ga:menu-position/4'] = array(
    'menu_name' => 'menu-main-menu-ga',
    'link_path' => 'menu-position/4',
    'router_path' => 'menu-position/%',
    'link_title' => 'Votes GA (menu position rule)',
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
    'parent_path' => 'votes/dail',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Votes EN (menu position rule)');
  t('Votes GA (menu position rule)');


  return $menu_links;
}
