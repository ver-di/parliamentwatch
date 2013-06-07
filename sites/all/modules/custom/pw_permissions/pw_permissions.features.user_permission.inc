<?php
/**
 * @file
 * pw_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access print.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'print',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: create blogpost content.
  $permissions['create blogpost content'] = array(
    'name' => 'create blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any blogpost content.
  $permissions['delete any blogpost content'] = array(
    'name' => 'delete any blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blogpost content.
  $permissions['delete own blogpost content'] = array(
    'name' => 'delete own blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any blogpost content.
  $permissions['edit any blogpost content'] = array(
    'name' => 'edit any blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own blogpost content.
  $permissions['edit own blogpost content'] = array(
    'name' => 'edit own blogpost content',
    'roles' => array(
      0 => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use custom search.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: use custom search blocks.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'custom_search_blocks',
  );

  return $permissions;
}
