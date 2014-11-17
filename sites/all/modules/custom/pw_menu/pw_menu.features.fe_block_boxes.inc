<?php
/**
 * @file
 * pw_menu.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_menu_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Menü Mitmachen Spenden';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'pw_menu_participate_donate';
  $fe_block_boxes->body = '<p>
	abgeordnetenwatch.de wird vom gemeinnützigen Parlamentwatch e.V. betrieben und finanziert sich zu großen Teilen aus Spenden. Helfen Sie mit unsere Unabhängigkeit zu sichern. Für mehr Transparenz in unserer Demokratie.
</p>
<p>
	<a class="button big" href="/node/10508">Spenden</a>
</p>
<h3>Was kann ich sonst tun?</h3>
<div class="nav-pw">
<?php
$block = module_invoke(\'menu_block\', \'block_view\', 2);
print render($block[\'content\']);
?>
</div>';

  $export['pw_menu_participate_donate'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Menü Presse Kontakt';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'pw_menu_press_contact';
  $fe_block_boxes->body = '<p>
	<img align="left" alt="" border="2" class="media-image attr__typeof__foaf:Image img__fid__36320 img__view_mode__pw_file_portrait_ms attr__format__pw_file_portrait_ms attr__field_file_image_alt_text[und][0][value]__Gregor Hackmack attr__field_file_image_title_text[und][0][value]__ attr__field_folder[und]___none" height="75" src="http://develop_menu.silversurfer/sites/abgeordnetenwatch.de/files/styles/pw_portrait_ms/public/team_hackmack_2.jpg?itok=G0KSqlvx" style="padding:5px;margin-right:5px;" title="" typeof="foaf:Image" width="50" />
</p>
<p>
	<strong>Gregor Hackmack</strong>
</p>
<p>
	Ihr Gesprächspartner zu den Themen: Lobbyismus, Transparenz in der deutschen Politik und Demokratie.
</p>
<p>
	So Sie erreichen mich:<br />
	040 317 69 10 26<br />
	<a href="mailto:info@abgeordnetenwatch.de">info@abgeordnetenwatch.de</a>
</p>
';

  $export['pw_menu_press_contact'] = $fe_block_boxes;

  return $export;
}
