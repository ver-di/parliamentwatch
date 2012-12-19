<?php
/**
 * @file
 * subsite_conf.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function subsite_conf_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-metanavi_addthis' => array(
      'machine_name' => 'metanavi_addthis',
      'module' => 'block',
    ),
    'block-social_media_footer' => array(
      'machine_name' => 'social_media_footer',
      'module' => 'block',
    ),
    'delta_blocks-breadcrumb' => array(
      'delta' => 'breadcrumb',
      'module' => 'delta_blocks',
    ),
    'delta_blocks-messages' => array(
      'delta' => 'messages',
      'module' => 'delta_blocks',
    ),
    'forward-form' => array(
      'delta' => 'form',
      'module' => 'forward',
    ),
    'locale-language' => array(
      'delta' => 'language',
      'module' => 'locale',
    ),
    'nice_menus-1' => array(
      'delta' => '1',
      'module' => 'nice_menus',
    ),
    'nice_menus-2' => array(
      'delta' => '2',
      'module' => 'nice_menus',
    ),
    'print-print-links' => array(
      'delta' => 'print-links',
      'module' => 'print',
    ),
    'search-form' => array(
      'delta' => 'form',
      'module' => 'search',
    ),
    'system-help' => array(
      'delta' => 'help',
      'module' => 'system',
    ),
    'system-main' => array(
      'delta' => 'main',
      'module' => 'system',
    ),
    'system-navigation' => array(
      'delta' => 'navigation',
      'module' => 'system',
    ),
    'system-powered-by' => array(
      'delta' => 'powered-by',
      'module' => 'system',
    ),
    'text_resize-0' => array(
      'module' => 'text_resize',
    ),
    'views--exp-profile_list_rev-page' => array(
      'delta' => '-exp-profile_list_rev-page',
      'module' => 'views',
    ),
    'views-slider-block' => array(
      'delta' => 'slider-block',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['block-metanavi_addthis'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Share',
    'cache' => -1,
    'i18n_mode' => '1',
    'machine_name' => 'metanavi_addthis',
  );

  $theme['block-social_media_footer'] = array(
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
    'machine_name' => 'social_media_footer',
  );

  $theme['delta_blocks-breadcrumb'] = array(
    'module' => 'delta_blocks',
    'delta' => 'breadcrumb',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $theme['delta_blocks-messages'] = array(
    'module' => 'delta_blocks',
    'delta' => 'messages',
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

  $theme['forward-form'] = array(
    'module' => 'forward',
    'delta' => 'form',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
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
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => '2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '-1',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '10',
    'region' => 'footer',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '1',
  );

  $theme['views--exp-profile_list_rev-page'] = array(
    'module' => 'views',
    'delta' => '-exp-profile_list_rev-page',
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

  $theme['views-slider-block'] = array(
    'module' => 'views',
    'delta' => 'slider-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['bartik'] = $theme;

  // dailwatch
  $theme = array();

  $theme['block-metanavi_addthis'] = array(
    'module' => 'block',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '0',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Share',
    'cache' => -1,
    'i18n_mode' => '1',
    'machine_name' => 'metanavi_addthis',
  );

  $theme['block-social_media_footer'] = array(
    'module' => 'block',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '0',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
    'machine_name' => 'social_media_footer',
  );

  $theme['delta_blocks-breadcrumb'] = array(
    'module' => 'delta_blocks',
    'delta' => 'breadcrumb',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '-22',
    'region' => 'header_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $theme['delta_blocks-messages'] = array(
    'module' => 'delta_blocks',
    'delta' => 'messages',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '-26',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['forward-form'] = array(
    'module' => 'forward',
    'delta' => 'form',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '-25',
    'region' => 'postscript_fourth',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Social Media',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '-26',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '1',
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => '2',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '-26',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Print',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '-26',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '-22',
    'region' => 'header_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '-25',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
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

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'dailwatch',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '-26',
    'region' => 'user_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '1',
  );

  $theme['views--exp-profile_list_rev-page'] = array(
    'module' => 'views',
    'delta' => '-exp-profile_list_rev-page',
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

  $theme['views-slider-block'] = array(
    'module' => 'views',
    'delta' => 'slider-block',
    'theme' => 'dailwatch',
    'status' => '1',
    'weight' => '-17',
    'region' => 'header_second',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $export['theme']['dailwatch'] = $theme;

  // seven
  $theme = array();

  $theme['block-metanavi_addthis'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Share',
    'cache' => -1,
    'i18n_mode' => '1',
    'machine_name' => 'metanavi_addthis',
  );

  $theme['block-social_media_footer'] = array(
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
    'machine_name' => 'social_media_footer',
  );

  $theme['delta_blocks-breadcrumb'] = array(
    'module' => 'delta_blocks',
    'delta' => 'breadcrumb',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $theme['delta_blocks-messages'] = array(
    'module' => 'delta_blocks',
    'delta' => 'messages',
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

  $theme['forward-form'] = array(
    'module' => 'forward',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Social Media',
    'cache' => '1',
    'i18n_mode' => '0',
  );

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
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
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => '2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['print-print-links'] = array(
    'module' => 'print',
    'delta' => 'print-links',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Print',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '-10',
    'region' => 'dashboard_inactive',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-help'] = array(
    'module' => 'system',
    'delta' => 'help',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'help',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['system-navigation'] = array(
    'module' => 'system',
    'delta' => 'navigation',
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

  $theme['system-powered-by'] = array(
    'module' => 'system',
    'delta' => 'powered-by',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '10',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'i18n_mode' => '0',
  );

  $theme['text_resize-0'] = array(
    'module' => 'text_resize',
    'delta' => '0',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
    'i18n_mode' => '1',
  );

  $theme['views--exp-profile_list_rev-page'] = array(
    'module' => 'views',
    'delta' => '-exp-profile_list_rev-page',
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

  $theme['views-slider-block'] = array(
    'module' => 'views',
    'delta' => 'slider-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
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
