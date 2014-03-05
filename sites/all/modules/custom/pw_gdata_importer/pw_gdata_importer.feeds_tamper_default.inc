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
  $feeds_tamper->id = 'gdata_profiles_importer-blank_source_1-default_value';
  $feeds_tamper->importer = 'gdata_profiles_importer';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'DE',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default country code';
  $export['gdata_profiles_importer-blank_source_1-default_value'] = $feeds_tamper;

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
    'php' => '// load related parliament term
$parliament_term = taxonomy_get_term_by_name($item[\'xpathparser:0\']);
if(empty($parliament_term)){
  return false;
}
$parliament_term_id = key($parliament_term);

// find constituency term tagged with same parliament like imported user
$constituency_terms = taxonomy_get_term_by_name($field);
foreach($constituency_terms as $constituency_term){
   if($constituency_term->field_parliament[\'und\'][0][\'tid\'] == $parliament_term_id){
     return $constituency_term->uuid;
  }
}
return false;',
  );
  $feeds_tamper->weight = 5;
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
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Pflichtfeld';
  $export['gdata_profiles_importer-xpathparser_9-pflichtfeld'] = $feeds_tamper;

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
  $feeds_tamper->id = 'gdata_profiles_importer_v2-xpathparser_26-php';
  $feeds_tamper->importer = 'gdata_profiles_importer_v2';
  $feeds_tamper->source = 'xpathparser:26';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '// look for parliaments
$tax = \'parliaments\';
// load all vocabularies
$vid = 0;
$vocs = taxonomy_get_vocabularies();
// get the parliaments vocab id
foreach($vocs as $voc){
  if ($voc->{\'machine_name\'} == $tax) {
    $vid = $voc->{\'vid\'};}}
// exit if no taxonomy vocabulary found
if ($vid == 0) {
  dpm("Error: Taxonomy \'$tax\' not found.");
  return false;}
// load related taxonomy terms
$name = $item[\'xpathparser:25\'];
$tterms = taxonomy_get_term_by_name($name);
// exit if no taxonomy term found
if(empty($tterms)){
  dpm("Error: Term \'$name\' not found.");
  return false;}
// match vocabulary and term
$pterm = null;
$tid = 0;
foreach($tterms as $term){
  if ($term->{\'vid\'} == $vid) {
    $pterm = $term;
    $tid = $pterm->{\'tid\'};}}
// exit if no taxonomy term found in vocabulary
if(empty($pterm) || $tid == 0){
  dpm("Error: Term \'$name\' not found in taxonomy \'$tax\'.");
  return false;}
// find constituency term tagged with same parliament like imported user
$cterms = taxonomy_get_term_by_name($field);
foreach($cterms as $term){
  if ($term->field_parliament[\'und\'][0][\'tid\'] == $tid) {
    return $term->{\'uuid\'};}}
// if code reaches this, no term was found
dpm("Error: Feeds Tamper Execute PHP failed for \'$name\' and \'$tax\'.");
return false;
',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Execute php code';
  $export['gdata_profiles_importer_v2-xpathparser_26-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gdata_profiles_importer_v2-xpathparser_26-required';
  $feeds_tamper->importer = 'gdata_profiles_importer_v2';
  $feeds_tamper->source = 'xpathparser:26';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Pflichtfeld';
  $export['gdata_profiles_importer_v2-xpathparser_26-required'] = $feeds_tamper;

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

  return $export;
}
