<?php
/**
 * @file
 * trustees.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function trustees_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'trustees';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/board-trustees' => 'about/board-trustees',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-Trustees-block_1' => array(
          'module' => 'views',
          'delta' => 'Trustees-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['trustees'] = $context;

  return $export;
}
