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
  $fe_block_boxes->info = 'AW Brandenburg Intro';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'aw_brandenburg_intro';
  $fe_block_boxes->body = '<h3>
	Landtagswahl Brandenburg 2014
</h3>
<p>
	<img alt="" class="media-image attr__typeof__foaf:Image img__fid__41475 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__ attr__field_file_image_title_text[und][0][value]__ attr__field_image_copyright[und][0][value]__" src="https://www.abgeordnetenwatch.de/sites/abgeordnetenwatch.de/files/illu_wahl_brandenburg.png" style="float: left; width: 154px; height: 136px; margin: 1px 15px;" title="" typeof="foaf:Image" />Am 14.09.2014 finden die Landtagswahlen in Brandenburg statt. Nutzen Sie die Postleitzahlen-Suche um die Kandidierenden aus Ihrem Wahlkreis zu finden und zu befragen.
</p>
<?php
    $blockObject = block_load(\'custom_search_blocks\', \'3\');
    $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
    $output = drupal_render($block);
    print $output;
  ?>';

  $export['aw_brandenburg_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AW Sachsen Intro';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'aw_sachsen_intro';
  $fe_block_boxes->body = '<h3>
	Landtagswahl Sachsen 2014
</h3>
<p>
	<img alt="" class="media-image attr__typeof__foaf:Image img__fid__41473 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__ attr__field_file_image_title_text[und][0][value]__ attr__field_image_copyright[und][0][value]__" src="https://www.abgeordnetenwatch.de/sites/abgeordnetenwatch.de/files/illu_wahl_sachsen.png" style="margin: 2px 15px; float: left; width: 154px; height: 115px;" title="" typeof="foaf:Image" />Am 31.08.2014 finden die Landtagswahlen in Sachsen statt. Geben Sie hier Ihre Postleitzahl ein und stellen Sie Ihre Frage direkt an die Kandidierenden aus Ihrem Wahlkreis.
</p>
<?php
    $blockObject = block_load(\'custom_search_blocks\', \'3\');
    $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
    $output = drupal_render($block);
    print $output;
  ?>';

  $export['aw_sachsen_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AW Thüringen Intro';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'aw_thueringen_intro';
  $fe_block_boxes->body = '<h3>
	Landtagswahl Thüringen 2014
</h3>
<p>
	<img alt="" class="media-image attr__typeof__foaf:Image img__fid__41474 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__ attr__field_file_image_title_text[und][0][value]__ attr__field_image_copyright[und][0][value]__" src="https://www.abgeordnetenwatch.de/sites/abgeordnetenwatch.de/files/illu_wahl_thueringen.png" style="float: left; width: 154px; height: 126px; margin: 2px 15px;" title="" typeof="foaf:Image" />
</p>
<p>
	Am 14.09.2014 finden die Landtagswahlen in Thüringen statt. Nutzen Sie die Postleitzahlen-Suche um die Kandidierenden aus Ihrem Wahlkreis zu finden
</p>
<?php
    $blockObject = block_load(\'custom_search_blocks\', \'3\');
    $block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
    $output = drupal_render($block);
    print $output;
  ?>';

  $export['aw_thueringen_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'AW Wuppertal Intro';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'aw_wuppertal_intro';
  $fe_block_boxes->body = '<div class="file-image float-left">
	<img alt="" class="media-image attr__typeof__foaf:Image img__fid__35444 img__view_mode__default attr__format__default attr__field_file_image_alt_text[und][0][value]__ attr__field_file_image_title_text[und][0][value]__ attr__field_image_copyright[und][0][value]__" height="223" src="https://www.abgeordnetenwatch.de/sites/abgeordnetenwatch.de/files/wuppertal.png" title="" typeof="foaf:Image" width="300" /><br />
	<div class="copyright">
		&nbsp;
	</div>
</div>
<p>
	Haushaltssperre, B7, Döppersberg, IKEA, ... die Liste der Themen ist lang. Welche Position die Kandidierenden vertreten können Sie über abgeordnetenwatch.de herausfinden. Stellen Sie den Rats-Kandidaten Fragen zu allen Themen, die Sie für Wuppertals Zukunft interessieren.
</p>
<p>
	&nbsp;
</p>
<p>
	&nbsp;
</p>
<p>
	<a class="link-committees" href="wuppertal/profile">Alle Kandidierenden in der Übersicht</a>
</p>
';

  $export['aw_wuppertal_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Spenden per Post';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'pw_donation_mail';
  $fe_block_boxes->body = '<p>
	Alternativ zu einer Online-Spende können Sie auch einen Antrag herunterladen (PDF), ausdrucken und uns per Post oder Fax senden.
</p>
<p class="rteright">
	<a class="link-download" download="spendenformular_print_sepa.pdf" href="/sites/abgeordnetenwatch.de/files/spendenformular_print_sepa.pdf" target="_blank">Spendenantrag herunterladen</a>
</p>
';

  $export['pw_donation_mail'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Spenden Kleingedrucktes';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'pw_donation_smallprint';
  $fe_block_boxes->body = '<p>
	Zum Schutz der Daten erfolgt die Übertragung der Formular-Daten ausschließlich über zertifizierte SSL-Verschlüsselung.
</p>
<p>
	Hinweis für Spenden per SEPA-Lastschrift: Wenn Sie bis zum 13. des Monats spenden, dann ziehen wir die Spende am 15. des Monats oder am darauffolgenden Bankarbeitstag ein. Wenn Sie nach dem 13. des Monats spenden, dann ziehen wir Ihre Spende am 25. des Monats oder am darauffolgenden Bankarbeitstag ein.
</p>
';

  $export['pw_donation_smallprint'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Flattr';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'pw_flattr';
  $fe_block_boxes->body = '<p>
Sie können uns auch "flattrn".
</p>
<iframe src="https://api.flattr.com/button/view/?uid=abgeordnetenwatch.de&amp;url=https://www.abgeordnetenwatch.de&amp;title=www.abgeordnetenwatch.de&amp;description=www.abgeordnetenwatch.de&amp;category=text&amp;language=de_DE" style="width:80px; height:62px;" allowtransparency="true" frameborder="0" scrolling="no" class="float-left"></iframe>';

  $export['pw_flattr'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Paypal';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'pw_paypal';
  $fe_block_boxes->body = '<p>
	Zum Spenden können Sie auch PayPal nutzen.
</p>
<form target="_blank" action="https://www.paypal.com/cgi-bin/webscr" method="post">
                <input type="hidden" name="cmd" value="_s-xclick">
                <input type="image" border="0" src="/sites/abgeordnetenwatch.de/files/btn_paypal.gif" name="submit" alt="Zahlen Sie mit PayPal - schnell, kostenlos und sicher!">
                <input type="hidden" name="encrypted" value="-----BEGIN PKCS7-----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-----END PKCS7-----">
            </form>';

  $export['pw_paypal'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'PW Premium Promo';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'pw_premium_promo';
  $fe_block_boxes->body = '<p>
	Sie nutzen derzeit das kostenfreie abgeordnetenwatch.de-Grundprofil.<br />
	Buchen Sie jetzt eine Profilerweiterung und demonstrieren Sie Ihren Wählerinnen und Wählern gegenüber Offenheit und Bürgernähe!<br />
	Mit der Profilerweiterung erhalten Sie zusätzliche Möglichkeiten Ihr Profil zu gestalten:
</p>
<ol>
	<li>
		Profilfoto
	</li>
	<li>
		Verlinkung Ihrer Social-Media-Kanäle
	</li>
	<li>
		Bilder-Galerie für die schönsten Wahlkampf-Fotos
	</li>
	<li>
		Terminkalender
	</li>
	<li>
		Hintergrundinformationen über Sie und Ihre politischen Ziele
	</li>
</ol>
<p>Wie eine Profilerweiterung aussehen könnte können Sie hier am Beispiel von <a href="/profile/jakob-maria-mierscheid">Jakob Maria Mierscheid</a> sehen.</p>
<p>
<?php
  global $user;
  $link_booking_form = \'/user/\'.$user->uid.\'/booking_form\';
?>
	Buchen Sie ganz einfach per <a href="<?=$link_booking_form?>">Formular</a> oder schreiben Sie uns eine <a href="mailto: service@abgeordnetenwatch.de">E-Mail</a>. Telefonisch erreichen Sie uns unter: 040 / 317 69 10 26
</p>';

  $export['pw_premium_promo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media Footer';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'social_media_footer';
  $fe_block_boxes->body = '<ul class="menu">
	<li class="first leaf facebook">
		<a href="https://www.facebook.com/abgeordnetenwatch.de" title="">Facebook</a>
	</li>
	<li class="leaf twitter">
		<a href="https://twitter.com/a_watch" title="">Twitter</a>
	</li>
	<li class="leaf google">
		<a href="https://plus.google.com/101206126881536002255/" title="">Google+</a>
	</li>
</ul>
';

  $export['social_media_footer'] = $fe_block_boxes;

  return $export;
}
