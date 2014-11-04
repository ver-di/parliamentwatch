<?php

/**
 * @file
 * Do extremly awesome things, like set default emails in case of an empty fields!
 */
$plugin = array(

  'form' => 'pw_set_default_email_form',
  // Optional validation callback.
  'validate' => 'pw_set_default_email_validate',
  'callback' => 'pw_set_default_email',
  'name' => 'Set Default E-Mail',
  'multi' => 'loop',
  'category' => 'Custom',
);

function pw_set_default_email_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like set default emails.');
  return $form;
}

function pw_set_default_email_validate(&$settings) {
  // no form to validate
}

function pw_set_default_email($source, $item_key, $element_key, &$field, $settings) {

  if(empty($field)) {

    // set generic email
    $subaddress = md5(microtime());
    $field = "noemail+".$subaddress."@parliamentwatch.org";
    return;

  } 

  // unreachable code, dont do anything
  return;

}
