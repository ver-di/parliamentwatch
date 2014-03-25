<?php
/**
 * @file
 * pw_profiles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_profiles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pw_premium_promo';
  $context->description = 'Adds a block with information to the premium profile to the user edit form';
  $context->tag = 'profiles';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user/*/edit' => 'user/*/edit',
      ),
    ),
    'php' => array(
      'values' => array(
        0 => TRUE,
      ),
      'options' => array(
        'phpcode' => 'global $user;
$is_premium_user = array_search(\'Premium User\', $user->roles)?true:false;
return !$is_premium_user;',
      ),
    ),
    'user' => array(
      'values' => array(
        'Candidate' => 'Candidate',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-38' => array(
          'module' => 'block',
          'delta' => '38',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adds a block with information to the premium profile to the user edit form');
  t('profiles');
  $export['pw_premium_promo'] = $context;

  return $export;
}
