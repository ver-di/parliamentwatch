<?php
/**
 * @file
 * pw_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = 'is blog';
  $context->tag = 'blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blogpost' => 'blogpost',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'blogtags' => 'blogtags',
        'blogtags/*' => 'blogtags/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tagadelic-13' => array(
          'module' => 'tagadelic',
          'delta' => '13',
          'region' => 'sidebar_second',
          'weight' => '-53',
        ),
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => '-52',
        ),
        'delta_blocks-feed-icons' => array(
          'module' => 'delta_blocks',
          'delta' => 'feed-icons',
          'region' => 'sidebar_second',
          'weight' => '-51',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  t('is blog');
  $export['blog'] = $context;

  return $export;
}
