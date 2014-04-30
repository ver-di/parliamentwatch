<?php
/**
 * @file
 * dialogues.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function dialogues_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_importer-xpathparser_14-find_dialogues_term_id';
  $feeds_tamper->importer = 'dialogue_importer';
  $feeds_tamper->source = 'xpathparser:14';
  $feeds_tamper->plugin_id = 'find_dialogues_term_id';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find Dialogues Term ID by Term and Parliament';
  $export['dialogue_importer-xpathparser_14-find_dialogues_term_id'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_importer-xpathparser_14-required';
  $feeds_tamper->importer = 'dialogue_importer';
  $feeds_tamper->source = 'xpathparser:14';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Pflichtfeld';
  $export['dialogue_importer-xpathparser_14-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'dialogue_message_importer-xpathparser_15-html_entity_decode';
  $feeds_tamper->importer = 'dialogue_message_importer';
  $feeds_tamper->source = 'xpathparser:15';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['dialogue_message_importer-xpathparser_15-html_entity_decode'] = $feeds_tamper;

  return $export;
}
