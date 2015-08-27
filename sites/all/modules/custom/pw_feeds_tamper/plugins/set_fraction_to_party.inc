<?php

/**
 * @file
 * Checks if field fraction is empty and set it to name of party.
 */
$plugin = array(
  'form' => 'set_fraction_to_party_form',
  'callback' => 'set_fraction_to_party',
  'name' => 'Set Fraction To Party If Empty',
  'multi' => 'loop',
  'category' => 'Custom',
  );

function set_fraction_to_party_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like setting fraction name to party name.');
  return $form;
}

function set_fraction_to_party($source, $item_key, $element_key, &$field, $settings) {

  $party_import = trim($source->current_item['xpathparser:24']);
  if(empty($field)){
    $field = $party_import;
  }
}
