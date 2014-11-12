<?php
/**
 * @file
 * pw_cdn.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_cdn_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_basic_mapping';
  $strongarm->value = 'https://awatch.wavecdn.net';
  $export['cdn_basic_mapping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_basic_mapping_https';
  $strongarm->value = '';
  $export['cdn_basic_mapping_https'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_farfuture_status';
  $strongarm->value = 0;
  $export['cdn_farfuture_status'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_farfuture_unique_identifier_mapping';
  $strongarm->value = 'misc/*:modules/*:themes/*|drupal_version
sites/*|mtime
sites/*|.avi .m4v .mov .mp4 .wmv .flv|perpetual';
  $export['cdn_farfuture_unique_identifier_mapping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_https_support';
  $strongarm->value = 1;
  $export['cdn_https_support'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_mode';
  $strongarm->value = 'basic';
  $export['cdn_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_reverse_proxy_test';
  $strongarm->value = FALSE;
  $export['cdn_reverse_proxy_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_stats';
  $strongarm->value = 0;
  $export['cdn_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cdn_status';
  $strongarm->value = '2';
  $export['cdn_status'] = $strongarm;

  return $export;
}
