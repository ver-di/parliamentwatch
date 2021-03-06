<?php
/**
 * @file
 * pw_profiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pw_profiles_user_default_roles() {
  $roles = array();

  // Exported role: Candidate.
  $roles['Candidate'] = array(
    'name' => 'Candidate',
    'weight' => '6',
    'machine_name' => 'candidate',
  );

  // Exported role: Politician.
  $roles['Politician'] = array(
    'name' => 'Politician',
    'weight' => '3',
    'machine_name' => 'politician',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
    'machine_name' => '',
  );

  return $roles;
}
