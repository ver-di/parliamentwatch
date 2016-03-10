<?php
/**
 * @file
 * pw_parliaments.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_parliaments_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pw_parliaments';
  $context->description = '';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'parliaments' => 'parliaments',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-pw_announcement-slideshow' => array(
          'module' => 'views',
          'delta' => 'pw_announcement-slideshow',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-politicians_answer' => array(
          'module' => 'quicktabs',
          'delta' => 'politicians_answer',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('taxonomy');
  $export['pw_parliaments'] = $context;

  return $export;
}
