<?php
/**
 * @file
 * pw_content_authoring_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_content_authoring_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_formats_per_field_core';
  $strongarm->value = 1;
  $export['better_formats_per_field_core'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  return $export;
}
