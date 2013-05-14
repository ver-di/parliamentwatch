<?php
/**
 * @file
 * profiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_profile_node_connector.
  $permissions['create field_profile_node_connector'] = array(
    'name' => 'create field_profile_node_connector',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_about.
  $permissions['create field_user_about'] = array(
    'name' => 'create field_user_about',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_address.
  $permissions['create field_user_address'] = array(
    'name' => 'create field_user_address',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_answers_give.
  $permissions['create field_user_answers_give'] = array(
    'name' => 'create field_user_answers_give',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_first_letter_lname.
  $permissions['create field_user_first_letter_lname'] = array(
    'name' => 'create field_user_first_letter_lname',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_image_gallery.
  $permissions['create field_user_image_gallery'] = array(
    'name' => 'create field_user_image_gallery',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_more.
  $permissions['create field_user_more'] = array(
    'name' => 'create field_user_more',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_picture.
  $permissions['create field_user_picture'] = array(
    'name' => 'create field_user_picture',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_political_goals.
  $permissions['create field_user_political_goals'] = array(
    'name' => 'create field_user_political_goals',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_pseudonym.
  $permissions['create field_user_pseudonym'] = array(
    'name' => 'create field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_user_questions_get.
  $permissions['create field_user_questions_get'] = array(
    'name' => 'create field_user_questions_get',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_profile_node_connector.
  $permissions['edit field_profile_node_connector'] = array(
    'name' => 'edit field_profile_node_connector',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_about.
  $permissions['edit field_user_about'] = array(
    'name' => 'edit field_user_about',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_address.
  $permissions['edit field_user_address'] = array(
    'name' => 'edit field_user_address',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_answers_give.
  $permissions['edit field_user_answers_give'] = array(
    'name' => 'edit field_user_answers_give',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_first_letter_lname.
  $permissions['edit field_user_first_letter_lname'] = array(
    'name' => 'edit field_user_first_letter_lname',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_image_gallery.
  $permissions['edit field_user_image_gallery'] = array(
    'name' => 'edit field_user_image_gallery',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_more.
  $permissions['edit field_user_more'] = array(
    'name' => 'edit field_user_more',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_picture.
  $permissions['edit field_user_picture'] = array(
    'name' => 'edit field_user_picture',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_political_goals.
  $permissions['edit field_user_political_goals'] = array(
    'name' => 'edit field_user_political_goals',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_pseudonym.
  $permissions['edit field_user_pseudonym'] = array(
    'name' => 'edit field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_user_questions_get.
  $permissions['edit field_user_questions_get'] = array(
    'name' => 'edit field_user_questions_get',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_profile_node_connector.
  $permissions['edit own field_profile_node_connector'] = array(
    'name' => 'edit own field_profile_node_connector',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_about.
  $permissions['edit own field_user_about'] = array(
    'name' => 'edit own field_user_about',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_address.
  $permissions['edit own field_user_address'] = array(
    'name' => 'edit own field_user_address',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_answers_give.
  $permissions['edit own field_user_answers_give'] = array(
    'name' => 'edit own field_user_answers_give',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_first_letter_lname.
  $permissions['edit own field_user_first_letter_lname'] = array(
    'name' => 'edit own field_user_first_letter_lname',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_image_gallery.
  $permissions['edit own field_user_image_gallery'] = array(
    'name' => 'edit own field_user_image_gallery',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_more.
  $permissions['edit own field_user_more'] = array(
    'name' => 'edit own field_user_more',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_picture.
  $permissions['edit own field_user_picture'] = array(
    'name' => 'edit own field_user_picture',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_political_goals.
  $permissions['edit own field_user_political_goals'] = array(
    'name' => 'edit own field_user_political_goals',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_pseudonym.
  $permissions['edit own field_user_pseudonym'] = array(
    'name' => 'edit own field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_user_questions_get.
  $permissions['edit own field_user_questions_get'] = array(
    'name' => 'edit own field_user_questions_get',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_profile_node_connector.
  $permissions['view field_profile_node_connector'] = array(
    'name' => 'view field_profile_node_connector',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_about.
  $permissions['view field_user_about'] = array(
    'name' => 'view field_user_about',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_address.
  $permissions['view field_user_address'] = array(
    'name' => 'view field_user_address',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_answers_give.
  $permissions['view field_user_answers_give'] = array(
    'name' => 'view field_user_answers_give',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_first_letter_lname.
  $permissions['view field_user_first_letter_lname'] = array(
    'name' => 'view field_user_first_letter_lname',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_image_gallery.
  $permissions['view field_user_image_gallery'] = array(
    'name' => 'view field_user_image_gallery',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_more.
  $permissions['view field_user_more'] = array(
    'name' => 'view field_user_more',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_picture.
  $permissions['view field_user_picture'] = array(
    'name' => 'view field_user_picture',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_political_goals.
  $permissions['view field_user_political_goals'] = array(
    'name' => 'view field_user_political_goals',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_pseudonym.
  $permissions['view field_user_pseudonym'] = array(
    'name' => 'view field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_user_questions_get.
  $permissions['view field_user_questions_get'] = array(
    'name' => 'view field_user_questions_get',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_profile_node_connector.
  $permissions['view own field_profile_node_connector'] = array(
    'name' => 'view own field_profile_node_connector',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_about.
  $permissions['view own field_user_about'] = array(
    'name' => 'view own field_user_about',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_address.
  $permissions['view own field_user_address'] = array(
    'name' => 'view own field_user_address',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_answers_give.
  $permissions['view own field_user_answers_give'] = array(
    'name' => 'view own field_user_answers_give',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_first_letter_lname.
  $permissions['view own field_user_first_letter_lname'] = array(
    'name' => 'view own field_user_first_letter_lname',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_image_gallery.
  $permissions['view own field_user_image_gallery'] = array(
    'name' => 'view own field_user_image_gallery',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_more.
  $permissions['view own field_user_more'] = array(
    'name' => 'view own field_user_more',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_picture.
  $permissions['view own field_user_picture'] = array(
    'name' => 'view own field_user_picture',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_political_goals.
  $permissions['view own field_user_political_goals'] = array(
    'name' => 'view own field_user_political_goals',
    'roles' => array(
      0 => 'Premium User',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_pseudonym.
  $permissions['view own field_user_pseudonym'] = array(
    'name' => 'view own field_user_pseudonym',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_user_questions_get.
  $permissions['view own field_user_questions_get'] = array(
    'name' => 'view own field_user_questions_get',
    'roles' => array(
      0 => 'Content Manager',
      1 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
