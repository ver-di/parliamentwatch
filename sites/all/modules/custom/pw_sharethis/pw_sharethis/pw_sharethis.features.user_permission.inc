<?php
/**
 * @file
 * pw_sharethis.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_sharethis_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_share_basevalue.
  $permissions['create field_share_basevalue'] = array(
    'name' => 'create field_share_basevalue',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_share_sum.
  $permissions['create field_share_sum'] = array(
    'name' => 'create field_share_sum',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_share_basevalue.
  $permissions['edit field_share_basevalue'] = array(
    'name' => 'edit field_share_basevalue',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_share_sum.
  $permissions['edit field_share_sum'] = array(
    'name' => 'edit field_share_sum',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_share_basevalue.
  $permissions['edit own field_share_basevalue'] = array(
    'name' => 'edit own field_share_basevalue',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_share_sum.
  $permissions['edit own field_share_sum'] = array(
    'name' => 'edit own field_share_sum',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_share_basevalue.
  $permissions['view field_share_basevalue'] = array(
    'name' => 'view field_share_basevalue',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_share_sum.
  $permissions['view field_share_sum'] = array(
    'name' => 'view field_share_sum',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_share_basevalue.
  $permissions['view own field_share_basevalue'] = array(
    'name' => 'view own field_share_basevalue',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_share_sum.
  $permissions['view own field_share_sum'] = array(
    'name' => 'view own field_share_sum',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
