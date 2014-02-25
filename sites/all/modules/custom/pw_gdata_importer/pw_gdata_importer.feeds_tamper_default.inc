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
  $feeds_tamper->id = 'gdata_profiles_importer-xpathparser_0-pflichtfeld';
  $feeds_tamper->importer = 'gdata_profiles_importer';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Pflichtfeld';
  $export['gdata_profiles_importer-xpathparser_0-pflichtfeld'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer-xpathparser_18-explode';
  $feeds_tamper->importer = 'gdata_profiles_importer';
  $feeds_tamper->source = 'xpathparser:18';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['gdata_profiles_importer-xpathparser_18-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer-xpathparser_9-execute_php_code';
  $feeds_tamper->importer = 'gdata_profiles_importer';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$parliament_term = taxonomy_get_term_by_name($item[\'xpathparser:0\']);
if(empty($parliament_term)){
  return false;
}
$parliament_term_id = key($parliament_term);

// find constituency term tagged with same parliament like imported user
$constituency_terms = taxonomy_get_term_by_name($field);
foreach($constituency_terms as $constituency_term){
   if($constituency_term->field_parliament[\'und\'][0][\'tid\'] == $parliament_term_id){
     dpm(intval($constituency_term->field_parliament[\'und\'][0][\'tid\']));
     return intval($constituency_term->field_parliament[\'und\'][0][\'tid\']);
  }
}',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Execute php code';
  $export['gdata_profiles_importer-xpathparser_9-execute_php_code'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer-xpathparser_9-explode';
  $feeds_tamper->importer = 'gdata_profiles_importer';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Explode';
  $export['gdata_profiles_importer-xpathparser_9-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer-xpathparser_9-pflichtfeld';
  $feeds_tamper->importer = 'gdata_profiles_importer';
  $feeds_tamper->source = 'xpathparser:9';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Pflichtfeld';
  $export['gdata_profiles_importer-xpathparser_9-pflichtfeld'] = $feeds_tamper;

  return $export;
}
