<?php
/**
 * @file
 * pw_subsite.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_subsite_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-pw_donation_mail'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'pw_donation_mail',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Spenden per Post',
    'visibility' => '0',
  );

  $export['block-pw_donation_smallprint'] = array(
    'cache' => -1,
    'css_class' => 'medium',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'pw_donation_smallprint',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['block-pw_flattr'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'pw_flattr',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Flattr',
    'visibility' => '0',
  );

  $export['block-pw_paypal'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'pw_paypal',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Paypal',
    'visibility' => '0',
  );

  $export['block-pw_premium_promo'] = array(
    'cache' => -1,
    'css_class' => 'messages warning',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'pw_premium_promo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '2',
  );

  $export['block-social_media_footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'social_media_footer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'postscript_fourth',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Social Media',
    'visibility' => '0',
  );

  $export['delta_blocks-breadcrumb'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'breadcrumb',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'header_first',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-36',
      ),
      'blank' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-36',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-36',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['delta_blocks-messages'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'messages',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-78',
      ),
      'blank' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-75',
      ),
      'pw_seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-64',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => '1',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'user_second',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-26',
      ),
      'blank' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-26',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-26',
      ),
    ),
    'title' => 'Language',
    'visibility' => '0',
  );

  $export['menu-menu-about-us-de'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'menu-about-us-de',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'postscript_second',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-36',
      ),
      'blank' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-36',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-36',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['menu-menu-elections-de'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'menu-elections-de',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'postscript_first',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['menu-menu-main-menu-de'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'menu-main-menu-de',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'menu',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-20',
      ),
      'blank' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-20',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-20',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu-menu-meta-de'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'menu-meta-de',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '-17',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '-17',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '-17',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['menu-menu-support-us-de'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'menu-support-us-de',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'postscript_third',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['submenutree-0'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => '0',
    'delta' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'submenutree',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-73',
      ),
      'blank' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-74',
      ),
      'pw_seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-62',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views--exp-profile_list_rev-grid'] = array(
    'cache' => -1,
    'css_class' => 'desktop-only',
    'custom' => '0',
    'delta' => '-exp-profile_list_rev-grid',
    'i18n_block_language' => array(),
    'i18n_mode' => '1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'profile/*',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-76',
      ),
      'blank' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Filter list',
    'visibility' => '1',
  );

  $export['views-pw_user_revision_switch-block'] = array(
    'cache' => -1,
    'css_class' => 'relative',
    'custom' => '0',
    'delta' => 'pw_user_revision_switch-block',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-slider-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'slider-block',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-79',
      ),
      'blank' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-17',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-17',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
