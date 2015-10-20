<?php
/**
 * @file
 * pw_subsite.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_subsite_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'PW Transparenzkampagne Header';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'pw_transparancy_header';
  $fe_block_boxes->body = '<p>
	Transparenz statt Lobbyismus - &nbsp;Wir wollen mit ihrere Hilfe Transparenz voranbringen und Lobbyismus zurückdrängen. <a href="/node/10508">Können wir auf sie zählen?</a>
</p>
';

  $export['pw_transparancy_header'] = $fe_block_boxes;

  return $export;
}
