<?php
/**
 * @file
 * pw_eu_frontpage.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_eu_frontpage_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-aw_eu_intro'] = array(
    'cache' => -1,
    'css_class' => 'grid-5 push-bottom-m omega',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'aw_eu_intro',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'eu',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-76',
      ),
      'blank' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-78',
      ),
      'pw_seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-76',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['block-aw_eu_map'] = array(
    'cache' => -1,
    'css_class' => 'grid-3 push-bottom-m alpha',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'aw_eu_map',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'eu',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-77',
      ),
      'blank' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-79',
      ),
      'pw_seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-77',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['block-aw_eu_parliament_archive'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'aw_eu_parliament_archive',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'eu',
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
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Archiv',
    'visibility' => '1',
  );

  $export['block-aw_schirmherrin'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'aw_schirmherrin',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '-77',
      ),
      'blank' => array(
        'region' => 'sidebar_second',
        'status' => '1',
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
    'title' => 'Schirmherrin von abgeordnetenwatch.de',
    'visibility' => '1',
  );

  $export['quicktabs-politicians_answer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'politicians_answer',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'eu',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-74',
      ),
      'blank' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-76',
      ),
      'pw_seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-73',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-pw_announcement-slideshow'] = array(
    'cache' => -1,
    'css_class' => 'clear',
    'custom' => '0',
    'delta' => 'pw_announcement-slideshow',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'eu',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-75',
      ),
      'blank' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'blank',
        'weight' => '-77',
      ),
      'pw_seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'pw_seven',
        'weight' => '-75',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  $export['views-user_tweets-a_watch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'user_tweets-a_watch',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'eu',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '-76',
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
    'visibility' => '1',
  );

  return $export;
}
