<?php
/**
 * @file
 * pw_press.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pw_press_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'press_release';
  $feeds_importer->config = array(
    'name' => 'Press release',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'press_release',
        'expire' => '-1',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'ID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'txt',
            'target' => 'field_press_release_body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'datum',
            'target' => 'field_press_release_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'language',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'managed_content',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['press_release'] = $feeds_importer;

  return $export;
}
