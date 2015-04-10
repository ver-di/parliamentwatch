<?php
/**
 * @file
 * pw_donation_form.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pw_donation_form_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'donations_countries';
  $context->description = '';
  $context->tag = 'PW page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ueber-uns/spendenuebersicht' => 'ueber-uns/spendenuebersicht',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-pw_donation_state-all_countries' => array(
          'module' => 'views',
          'delta' => 'pw_donation_state-all_countries',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-pw_donation_state-block_1' => array(
          'module' => 'views',
          'delta' => 'pw_donation_state-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('PW page');
  $export['donations_countries'] = $context;

  return $export;
}
