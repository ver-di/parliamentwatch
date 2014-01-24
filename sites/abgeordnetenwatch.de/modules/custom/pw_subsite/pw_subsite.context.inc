<?php
/**
 * @file
 * pw_subsite.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_subsite_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_description';
  $context->description = '';
  $context->tag = 'blog';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blog:page_1' => 'blog:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
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
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  $export['blog_description'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'donations';
  $context->description = 'adds blocks';
  $context->tag = 'PW page';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/10384' => 'node/10384',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-32' => array(
          'module' => 'block',
          'delta' => '32',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'sidebar_second',
          'weight' => '-71',
        ),
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'sidebar_second',
          'weight' => '-70',
        ),
        'block-30' => array(
          'module' => 'block',
          'delta' => '30',
          'region' => 'sidebar_second',
          'weight' => '-69',
        ),
        'block-31' => array(
          'module' => 'block',
          'delta' => '31',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('PW page');
  t('adds blocks');
  $export['donations'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press_contact';
  $context->description = '';
  $context->tag = 'press';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*/press' => '*/press',
        '*/press/*' => '*/press/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('press');
  $export['press_contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'press_sidebar';
  $context->description = '';
  $context->tag = 'press';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*/press' => '*/press',
        '*/press/*' => '*/press/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('press');
  $export['press_sidebar'] = $context;

  return $export;
}
