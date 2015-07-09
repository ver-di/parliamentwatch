<?php
/**
 * @file
 * pw_poll.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function pw_poll_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_poll_importer-xpathparser_4-find_replace';
  $feeds_tamper->importer = 'gdata_poll_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'â€œ',
    'replace' => '"',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Replace â€œ';
  $export['gdata_poll_importer-xpathparser_4-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_poll_importer-xpathparser_5-find_replace';
  $feeds_tamper->importer = 'gdata_poll_importer';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'â€œ',
    'replace' => '"',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Replace â€œ';
  $export['gdata_poll_importer-xpathparser_5-find_replace'] = $feeds_tamper;

  return $export;
}
