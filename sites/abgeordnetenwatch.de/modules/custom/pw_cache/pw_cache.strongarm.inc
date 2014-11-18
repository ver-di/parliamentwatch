<?php
/**
 * @file
 * pw_cache.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_cache_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_actions';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $export['expire_comment_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_comment_page';
  $strongarm->value = 1;
  $export['expire_comment_comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom';
  $strongarm->value = 0;
  $export['expire_comment_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_custom_pages';
  $strongarm->value = '';
  $export['expire_comment_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_front_page';
  $strongarm->value = 0;
  $export['expire_comment_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_page';
  $strongarm->value = 1;
  $export['expire_comment_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_reference_pages';
  $strongarm->value = 0;
  $export['expire_comment_node_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_node_term_pages';
  $strongarm->value = 0;
  $export['expire_comment_node_term_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_comment_reference_pages';
  $strongarm->value = 0;
  $export['expire_comment_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_actions';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
  );
  $export['expire_file_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_custom';
  $strongarm->value = 0;
  $export['expire_file_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_custom_pages';
  $strongarm->value = '';
  $export['expire_file_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_file';
  $strongarm->value = 0;
  $export['expire_file_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_file_front_page';
  $strongarm->value = 0;
  $export['expire_file_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_include_base_url';
  $strongarm->value = 0;
  $export['expire_include_base_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_menu_link_actions';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
  );
  $export['expire_menu_link_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_menu_link_override_menus';
  $strongarm->value = array(
    'menu-calendar-options-menu' => '0',
    'devel' => '0',
    'features' => '0',
    'main-menu' => '0',
    'menu-main-menu-de' => '0',
    'management' => '0',
    'menu-meta-de' => '0',
    'navigation' => '0',
    'menu-support-us-de' => '0',
    'user-menu' => '0',
    'menu-elections-de' => '0',
    'menu-about-us-de' => '0',
  );
  $export['expire_menu_link_override_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_actions';
  $strongarm->value = array(
    1 => '1',
    2 => '2',
    3 => '3',
  );
  $export['expire_node_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom';
  $strongarm->value = 0;
  $export['expire_node_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_pages';
  $strongarm->value = '';
  $export['expire_node_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_front_page';
  $strongarm->value = 0;
  $export['expire_node_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_node_page';
  $strongarm->value = 1;
  $export['expire_node_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_reference_pages';
  $strongarm->value = 0;
  $export['expire_node_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_term_pages';
  $strongarm->value = 0;
  $export['expire_node_term_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_status';
  $strongarm->value = '2';
  $export['expire_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_actions';
  $strongarm->value = array(
    1 => 0,
    2 => 0,
    3 => 0,
    4 => 0,
  );
  $export['expire_user_actions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_custom';
  $strongarm->value = 0;
  $export['expire_user_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_custom_pages';
  $strongarm->value = '';
  $export['expire_user_custom_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_front_page';
  $strongarm->value = 0;
  $export['expire_user_front_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_reference_pages';
  $strongarm->value = 0;
  $export['expire_user_reference_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_term_pages';
  $strongarm->value = 0;
  $export['expire_user_term_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_user_user_page';
  $strongarm->value = 1;
  $export['expire_user_user_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purge_proxy_urls';
  $strongarm->value = 'http://srv8.pwsrv.local?purge_method=get';
  $export['purge_proxy_urls'] = $strongarm;

  return $export;
}
