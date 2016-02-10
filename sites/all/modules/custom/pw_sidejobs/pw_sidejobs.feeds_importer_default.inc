<?php
/**
 * @file
 * pw_sidejobs.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function pw_sidejobs_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'gdata_sidejobs_importer';
  $feeds_importer->config = array(
    'name' => 'GData Sidejobs Importer',
    'description' => 'Imports Sidejobs from GData Spreadsheet',
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
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'parliament',
          'xpathparser:2' => 'organization',
          'xpathparser:3' => 'job',
          'xpathparser:5' => 'classification',
          'xpathparser:6' => 'incomeinterval',
          'xpathparser:11' => 'location',
          'xpathparser:12' => 'systemuuid',
          'xpathparser:13' => 'systemuuid',
          'xpathparser:14' => 'sectors',
          'xpathparser:15' => 'useruuid',
          'xpathparser:16' => 'concat(\'Nebentätigkeit von \', firstname, \' \', lastname, \': \', job)',
          'xpathparser:17' => 'incomeamount',
          'xpathparser:18' => 'incomeamountmax',
          'xpathparser:19' => 'datestart',
          'xpathparser:20' => 'dateend',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
        ),
        'context' => '//row',
        'exp' => array(
          'errors' => 0,
          'tidy' => 0,
          'tidy_encoding' => 'UTF8',
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '0',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_parliament',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_sidejob_organization',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_job',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_sidejob_classification',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_sidejob_income_interval',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_sidejob_address:locality',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:12',
            'target' => 'uuid:uuid',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:13',
            'target' => 'guid',
            'unique' => 1,
          ),
          8 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_sectors',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'Blank source 1',
            'target' => 'field_sidejob_address:country',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_politician:uuid',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:16',
            'target' => 'title',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_sidejob_income_min',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_sidejob_income_max',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_sidejob_date_start:start',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_sidejob_date_end:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'sidejob',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['gdata_sidejobs_importer'] = $feeds_importer;

  return $export;
}
