<?php
/**
 * @file
 * slider_item.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function slider_item_user_default_permissions() {
  $permissions = array();

  // Exported permission: create slider_item content.
  $permissions['create slider_item content'] = array(
    'name' => 'create slider_item content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any slider_item content.
  $permissions['delete any slider_item content'] = array(
    'name' => 'delete any slider_item content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own slider_item content.
  $permissions['delete own slider_item content'] = array(
    'name' => 'delete own slider_item content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: ds_switch slider_item.
  $permissions['ds_switch slider_item'] = array(
    'name' => 'ds_switch slider_item',
    'roles' => array(),
    'module' => 'ds_extras',
  );

  // Exported permission: edit any slider_item content.
  $permissions['edit any slider_item content'] = array(
    'name' => 'edit any slider_item content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own slider_item content.
  $permissions['edit own slider_item content'] = array(
    'name' => 'edit own slider_item content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: moderate spam in nodes of type Slider item.
  $permissions['moderate spam in nodes of type Slider item'] = array(
    'name' => 'moderate spam in nodes of type Slider item',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'antispam',
  );

  return $permissions;
}
