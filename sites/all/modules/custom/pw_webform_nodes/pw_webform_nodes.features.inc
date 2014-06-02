<?php
/**
 * @file
 * pw_webform_nodes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_webform_nodes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
