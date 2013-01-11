<?php
/**
 * @file
 * pw_blog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pw_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-main-menu-en:blog
  $menu_links['menu-main-menu-en:blog'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'en-gb',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-main-menu-en:menu-position/1
  $menu_links['menu-main-menu-en:menu-position/1'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => 'menu-position/1',
    'router_path' => 'menu-position/%',
    'link_title' => 'Blogposts EN (menu position rule)',
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
    'parent_path' => 'blog',
  );
  // Exported menu link: menu-main-menu-ga:blog
  $menu_links['menu-main-menu-ga:blog'] = array(
    'menu_name' => 'menu-main-menu-ga',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'langcode' => 'ga',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-main-menu-ga:menu-position/2
  $menu_links['menu-main-menu-ga:menu-position/2'] = array(
    'menu_name' => 'menu-main-menu-ga',
    'link_path' => 'menu-position/2',
    'router_path' => 'menu-position/%',
    'link_title' => 'Blogposts GA (menu position rule)',
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
    'parent_path' => 'blog',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Blogposts EN (menu position rule)');
  t('Blogposts GA (menu position rule)');


  return $menu_links;
}
