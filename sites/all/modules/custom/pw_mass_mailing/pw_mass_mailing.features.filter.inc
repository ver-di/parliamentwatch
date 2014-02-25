<?php
/**
 * @file
 * pw_mass_mailing.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pw_mass_mailing_filter_default_formats() {
  $formats = array();

  // Exported format: HTML-Mail.
  $formats['html_mail'] = array(
    'format' => 'html_mail',
    'name' => 'HTML-Mail',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_url' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_autop' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-39',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
