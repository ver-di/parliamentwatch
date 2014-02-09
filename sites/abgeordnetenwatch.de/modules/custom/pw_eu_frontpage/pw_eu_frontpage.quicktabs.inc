<?php
/**
 * @file
 * pw_eu_frontpage.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function pw_eu_frontpage_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'politicians_answer';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Politicians answer!';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'pw_dialogue_answers',
      'display' => 'default',
      'args' => '',
      'title' => 'Answers',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'pw_dialogue_answers',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'Questions',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Answers');
  t('Politicians answer!');
  t('Questions');

  $export['politicians_answer'] = $quicktabs;

  return $export;
}
