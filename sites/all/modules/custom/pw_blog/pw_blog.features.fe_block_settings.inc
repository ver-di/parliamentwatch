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

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-anchor_to_top' => array(
      'machine_name' => 'anchor_to_top',
      'module' => 'block',
    ),
    'block-newsletter_order' => array(
      'machine_name' => 'newsletter_order',
      'module' => 'block',
    ),
    'delta_blocks-feed-icons' => array(
      'delta' => 'feed-icons',
      'module' => 'delta_blocks',
    ),
    'tagadelic-13' => array(
      'delta' => '13',
      'module' => 'tagadelic',
    ),
    'views-blog-block_1' => array(
      'delta' => 'blog-block_1',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['block-newsletter_order'] = array(
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
    'i18n_mode' => '0',
    'machine_name' => 'newsletter_order',
  );

  $theme['block-anchor_to_top'] = array(
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
    'i18n_mode' => '0',
    'machine_name' => 'anchor_to_top',
  );

  $theme['delta_blocks-feed-icons'] = array(
    'module' => 'delta_blocks',
    'delta' => 'feed-icons',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
    'i18n_mode' => '0',
  );

  $theme['tagadelic-13'] = array(
    'module' => 'tagadelic',
    'delta' => '13',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Tags in the blog',
    'cache' => 8,
    'i18n_mode' => '1',
  );

  $theme['views-blog-block_1'] = array(
    'module' => 'views',
    'delta' => 'blog-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['bartik'] = $theme;

  // dailwatch
  $theme = array();

  $theme['block-newsletter_order'] = array(
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
    'i18n_mode' => '0',
    'machine_name' => 'newsletter_order',
  );

  $theme['block-anchor_to_top'] = array(
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
    'i18n_mode' => '0',
    'machine_name' => 'anchor_to_top',
  );

  $theme['delta_blocks-feed-icons'] = array(
    'module' => 'delta_blocks',
    'delta' => 'feed-icons',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 8,
    'i18n_mode' => '0',
  );

  $theme['tagadelic-13'] = array(
    'module' => 'tagadelic',
    'delta' => '13',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Tags in the blog',
    'cache' => 8,
    'i18n_mode' => '1',
  );

  $theme['views-blog-block_1'] = array(
    'module' => 'views',
    'delta' => 'blog-block_1',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['dailwatch'] = $theme;

  // seven
  $theme = array();

  $theme['block-newsletter_order'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Newsletter bestellen',
    'cache' => -1,
    'i18n_mode' => '0',
    'machine_name' => 'newsletter_order',
  );

  $theme['block-anchor_to_top'] = array(
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
    'i18n_mode' => '0',
    'machine_name' => 'anchor_to_top',
  );

  $theme['delta_blocks-feed-icons'] = array(
    'module' => 'delta_blocks',
    'delta' => 'feed-icons',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'RSS Feed abonnieren',
    'cache' => 8,
    'i18n_mode' => '1',
  );

  $theme['tagadelic-13'] = array(
    'module' => 'tagadelic',
    'delta' => '13',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Tags in the blog',
    'cache' => 8,
    'i18n_mode' => '1',
  );

  $theme['views-blog-block_1'] = array(
    'module' => 'views',
    'delta' => 'blog-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
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
