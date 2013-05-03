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
        'tagadelic-24' => array(
          'module' => 'tagadelic',
          'delta' => '24',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'delta_blocks-feed-icons' => array(
          'module' => 'delta_blocks',
          'delta' => 'feed-icons',
          'region' => 'sidebar_second',
          'weight' => '-8',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage_blog';
  $context->description = 'shows last entries of the blog in the sidebar on the frontpage';
  $context->tag = 'blog';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  t('shows last entries of the blog in the sidebar on the frontpage');
  $export['frontpage_blog'] = $context;

  return $export;
}
