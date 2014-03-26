<?php
/**
 * @file
 * pw_profiles.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_profiles_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bundestagsradar';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'bundestagsradar';
  $fe_block_boxes->body = '<p>
	Wer verdient nebenher, wer hat die meisten Kinder, wo sitzen die Abweichler? Das Bundestagsradar verrät es Ihnen.
</p>
<p>
	<a href="https://www.abgeordnetenwatch.de/popup-720-0.html" target="_blank"><img alt="" class="media-image attr__typeof__foaf:Image img__fid__7979 img__view_mode__default attr__format__default attr__title__" height="189" src="/sites/abgeordnetenwatch.de/files/bundestagsradar.png" title="" typeof="foaf:Image" width="259" /></a>
</p>
<p class="rteright">
	<a href="https://www.abgeordnetenwatch.de/popup-720-0.html">zum Bundestagsradar</a>
</p>
';

  $export['bundestagsradar'] = $fe_block_boxes;

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
<p>
<?php
  global $user;
  $link_booking_form = \'/user/\'.$user->uid.\'/booking_form\';
?>
	Buchen Sie ganz einfach per <a href="<?=$link_booking_form?>">Formular</a> oder schreiben Sie uns eine <a href="mailto: service@abgeordnetenwatch.de">E-Mail</a>. Telefonisch erreichen Sie uns unter: 040 / 317 69 10 26
</p>
';

  $export['pw_premium_promo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ask a question anchor';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'questionform_anchor';
  $fe_block_boxes->body = '<div class="center push-bottom-l">
	<span class="form-submit big link-question"><a href="#pw-block-question-form">Ask a Question</a></span>
</div>
';

  $export['questionform_anchor'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ansicht wechseln';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'uebersicht_ansicht_switcher';
  $fe_block_boxes->body = '<form action="" class="views-exposed-form" id="form-view-mode-switcher" method="post" name="view-mode-switcher">
	<fieldset class="views-exposed-widget">
		<label>Ansicht wechseln</label>
		<div class="form-item">
			<input checked="checked" class="view-mode-full form-radio" id="group1_1" name="group1" type="radio" value="full" /><label class="option" for="group1_1">Normale Ansicht</label>
		</div>
		<div class="form-item">
			<input class="view-mode-teaser form-radio" id="group1_2" name="group1" type="radio" value="teaser" /><label class="option" for="group1_2">Listenansicht</label>
		</div>
	</fieldset>
</form>
';

  $export['uebersicht_ansicht_switcher'] = $fe_block_boxes;

  return $export;
}
