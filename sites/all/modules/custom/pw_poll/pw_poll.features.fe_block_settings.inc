<?php
/**
 * @file
 * pw_poll.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_poll_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-polls_other_positions'] = array(
    'cache' => '5',
    'css_class' => 'pw-block-eyecatcher-1',
    'custom' => '0',
    'machine_name' => 'polls_other_positions',
    'module' => 'block',
    'node_types' => array(
      0 => 'poll',
    ),
    'pages' => '',
    'roles' => array(
      'administrator' => '3',
      'Content Manager' => '51622513',
    ),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
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

  return $export;
}
