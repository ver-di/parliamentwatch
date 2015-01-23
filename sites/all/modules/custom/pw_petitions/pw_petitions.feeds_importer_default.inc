<?php
/**
 * @file
 * pw_petitions.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pw_petitions_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'petition_updater';
  $feeds_importer->config = array(
    'name' => 'Petition Updater',
    'description' => 'Updates a single petition',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'sources' => array(),
        'context' => array(
          'value' => '',
        ),
        'display_errors' => FALSE,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'debug_mode' => FALSE,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'pw_petition',
      ),
    ),
    'content_type' => 'pw_petition',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['petition_updater'] = $feeds_importer;

  return $export;
}
