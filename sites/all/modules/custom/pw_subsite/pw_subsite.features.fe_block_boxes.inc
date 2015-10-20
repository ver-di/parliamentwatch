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
  $fe_block_boxes->info = 'Navi Meta DE';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'menu_meta_de';
  $fe_block_boxes->body = '		<a class="header_login" href="<?php
global $user;
 if($user->uid ==0 ){
   print(\'/user\');
 }
 else {
  print(\'/user/logout\');
 }
?>"><?php
global $user;
 if($user->uid ==0 ){
   print(\'Login-Bereich\');
 }
 else {
  print(\'Abmelden\');
 }
?></a>';

  $export['menu_meta_de'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'PW Transparenzkampagne Header';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'pw_transparancy_header';
  $fe_block_boxes->body = '<p>
	Transparenz statt Lobbyismus - &nbsp;Wir wollen mit ihrer Hilfe Transparenz voranbringen und Lobbyismus zurückdrängen. <a href="/node/10508">Können wir auf sie zählen?</a>
</p>
';

  $export['pw_transparancy_header'] = $fe_block_boxes;

  return $export;
}
