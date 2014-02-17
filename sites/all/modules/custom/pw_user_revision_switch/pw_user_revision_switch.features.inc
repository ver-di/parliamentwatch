<?php
/**
 * @file
 * pw_user_revision_switch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_user_revision_switch_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "data" && $api == "data_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_user_revision_switch_views_api() {
  return array("version" => "3.0");
}
