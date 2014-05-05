<?php

/**
 * @file
 * Used to configure the pw_sharethis_check module
 */
function pw_sharethis_check_options() {
  $form = drupal_get_form('pw_sharethis_check_optionsform');
  return drupal_render($form);
}

function pw_sharethis_check_optionsform($form, &$form_state) {

  $form['options'] = array(
      '#type' => 'fieldset',
      '#title' => t('Options'),
      '#collapsible' => true,
      '#collapsed' => false,
  );

  $form['options']['api_key'] = array(
      '#type' => 'textfield',
      '#title' => t('API key'),
      '#description' => t('API key available at ShareThis'),
      '#default_value' => variable_get('pw_sharethis_check_apikey', ''),
      '#required' => true,
  );

  $form['options']['basevalue'] = array(
      '#type' => 'textfield',
      '#title' => t('Basevalue subdomain'),
      '#description' => t('Replaces "www" when acquiring the basevalue'),
      '#default_value' => variable_get('pw_sharethis_check_sub', 'beta'),
      '#required' => true,
  );

  $form['options']['node_types'] = array(
      '#type' => 'textfield',
      '#title' => t('Node Types'),
      '#description' => t('Content types parsed when creating or updating the meta table. (Seperate with ",")'),
      '#default_value' => implode(', ', variable_get('pw_sharethis_check_types', array())),
      '#required' => true,
  );

  $form['options']['node_basetypes'] = array(
      '#type' => 'textfield',
      '#title' => t('Node Types with base values'),
      '#description' => t('Content types that have base values. (Separate with ",")'),
      '#default_value' => implode(', ', variable_get('pw_sharethis_check_basetypes', array())),
      '#required' => true,
  );

  $form['api_key']['save'] = array(
      '#type' => 'submit',
      '#value' => t('Save Values'),
      '#submit' => array('pw_sharethis_check_optionsform_save'),
  );

  return $form;
}

function pw_sharethis_check_optionsform_save($form, &$form_state) {

  $types = explode(',', $form_state['values']['node_types']);
  $basetypes = explode(',', $form_state['values']['node_basetypes']);

  //Fill missing basetypes into types
  foreach ($basetypes as $base) {
    foreach ($types as $type)
      if ($type == $base)
        continue 2;

    $types += array($base);
  }

  variable_set('pw_sharethis_check_apikey', $form_state['values']['api_key']);
  variable_set('pw_sharethis_check_sub', $form_state['values']['basevalue']);
  variable_set('pw_sharethis_check_types', $types);
  variable_set('pw_sharethis_check_basetypes', $basetypes);
  variable_set('pw_sharethis_check_formsaved', true);
}
