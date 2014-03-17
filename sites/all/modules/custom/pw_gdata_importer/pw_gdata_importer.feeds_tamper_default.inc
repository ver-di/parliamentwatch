<?php
/**
 * @file
 * pw_gdata_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function pw_gdata_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_constituency_importer-xpathparser_6-explode';
  $feeds_tamper->importer = 'gdata_constituency_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '|',
    'limit' => '',
    'real_separator' => '|',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['gdata_constituency_importer-xpathparser_6-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer_v2-blank_source_1-default_value';
  $feeds_tamper->importer = 'gdata_profiles_importer_v2';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'DE',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default country code';
  $export['gdata_profiles_importer_v2-blank_source_1-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer_v2-xpathparser_1-username_creator';
  $feeds_tamper->importer = 'gdata_profiles_importer_v2';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'username_creator';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Username Creator & Validator';
  $export['gdata_profiles_importer_v2-xpathparser_1-username_creator'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer_v2-xpathparser_25-required';
  $feeds_tamper->importer = 'gdata_profiles_importer_v2';
  $feeds_tamper->source = 'xpathparser:25';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Pflichtfeld';
  $export['gdata_profiles_importer_v2-xpathparser_25-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer_v2-xpathparser_26-required';
  $feeds_tamper->importer = 'gdata_profiles_importer_v2';
  $feeds_tamper->source = 'xpathparser:26';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 11;
  $feeds_tamper->description = 'Pflichtfeld';
  $export['gdata_profiles_importer_v2-xpathparser_26-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer_v2-xpathparser_26-term_id_by_term_and_parliament';
  $feeds_tamper->importer = 'gdata_profiles_importer_v2';
  $feeds_tamper->source = 'xpathparser:26';
  $feeds_tamper->plugin_id = 'term_id_by_term_and_parliament';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 10;
  $feeds_tamper->description = 'Term ID by Term and Parliament';
  $export['gdata_profiles_importer_v2-xpathparser_26-term_id_by_term_and_parliament'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer_v2-xpathparser_35-explode';
  $feeds_tamper->importer = 'gdata_profiles_importer_v2';
  $feeds_tamper->source = 'xpathparser:35';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['gdata_profiles_importer_v2-xpathparser_35-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer_v2-xpathparser_4-explode';
  $feeds_tamper->importer = 'gdata_profiles_importer_v2';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['gdata_profiles_importer_v2-xpathparser_4-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_subject_importer-xpathparser_3-required';
  $feeds_tamper->importer = 'gdata_subject_importer';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Pflichtfeld';
  $export['gdata_subject_importer-xpathparser_3-required'] = $feeds_tamper;

  return $export;
}
