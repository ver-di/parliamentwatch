<?php
/**
 * @file
 * pw_eu_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_eu_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eu_wahlen_2014';
  $context->description = 'adds blocks';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'parlamente/eu' => 'parlamente/eu',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-34' => array(
          'module' => 'block',
          'delta' => '34',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-33' => array(
          'module' => 'block',
          'delta' => '33',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-pw_announcement-slideshow' => array(
          'module' => 'views',
          'delta' => 'pw_announcement-slideshow',
          'region' => 'content',
          'weight' => '-8',
        ),
        'quicktabs-politicians_answer' => array(
          'module' => 'quicktabs',
          'delta' => 'politicians_answer',
          'region' => 'content',
          'weight' => '-7',
        ),
        'block-35' => array(
          'module' => 'block',
          'delta' => '35',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-36' => array(
          'module' => 'block',
          'delta' => '36',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-user_tweets-block_1' => array(
          'module' => 'views',
          'delta' => 'user_tweets-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('adds blocks');
  $export['eu_wahlen_2014'] = $context;

  return $export;
}
