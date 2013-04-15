<?php
/**
 * @file
 * pw_blog.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_blog_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-anchor_to_top'] = array(
    'cache' => -1,
    'custom' => '0',
    'i18n_mode' => '0',
    'machine_name' => 'anchor_to_top',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
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

  $export['block-newsletter_order'] = array(
    'cache' => -1,
    'custom' => '0',
    'i18n_mode' => '0',
    'machine_name' => 'newsletter_order',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
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

  $export['delta_blocks-feed-icons'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'feed-icons',
    'i18n_mode' => '0',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dailwatch',
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

  $export['views-blog-block_1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'blog-block_1',
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'dailwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'dailwatch',
        'weight' => '-51',
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
