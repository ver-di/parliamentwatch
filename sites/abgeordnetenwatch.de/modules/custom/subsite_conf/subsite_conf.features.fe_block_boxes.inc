<?php
/**
 * @file
 * subsite_conf.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function subsite_conf_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Beta version';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'beta_version';
  $fe_block_boxes->body = '<p>
	* Dies ist die neue beta Version von abgeordnetenwatch.de. Hier können Sie uns <a class="colorbox-node" href="/feedback?width=600&amp;height=400">Ihre Meinung</a> dazu sagen.
</p>
';

  $export['beta_version'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blog description';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'blog_description';
  $fe_block_boxes->body = '<p>
	Unser Blog ist - wie das Gesamtprojekt "abgeordnetenwatch.de" - überparteilich. Politikerinnen und Politiker werden nicht aufgrund ihrer Parteizugehörigkeit bevorzugt, benachteiligt, kritisiert oder hervorgehoben. Der Blog versteht sich als ergänzende Diskussionsplattform zum Angebot von abgeordnetenwatch.de. Er berichtet über das Projekt und nimmt Stellung zu Transparenz, Bürgernähe&nbsp;und Teilhabe in der Politik.
</p>
<p>
	Alle Leserinnen und Leser sind eingeladen an der Diskussion teilzunehmen. Die Blogautoren selbst sind Mitglieder des abgeordnetenwatch.de-Teams. Ihre Einträge drücken nicht unbedingt die Position des Gesamtprojekts abgeordnetenwatch.de aus.&nbsp;
</p>
';

  $export['blog_description'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bürozeiten';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'buerozeiten';
  $fe_block_boxes->body = '<p>
	Montag - Freitag<br />
	10:00 - 16:00 Uhr
</p>
';

  $export['buerozeiten'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Kontakt';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'kontakt_hh';
  $fe_block_boxes->body = '<p>
	Parlamentwatch e.V.<br />
	Mittelweg 12<br />
	20148 Hamburg
</p>
<p>
	Telefon: 040 / 317 69 10 - 26<br />
	Fax: 040 / 317 69 10 - 28<br />
	info@abgeordnetenwatch.de
</p>
';

  $export['kontakt_hh'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Metanavi Addthis';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'metanavi_addthis';
  $fe_block_boxes->body = '<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_default_style ">
<a class="addthis_button_email"> Email</a>
<a class="addthis_button_facebook"> Facebook</a>
<a class="addthis_button_google_plusone"></a>
<a class="addthis_button_delicious"> Delicious</a>
<a class="addthis_button_favorites"> Favorit</a>
<a class="addthis_button_twitter"> Twitter</a>
<a class="addthis_button_stumbleupon"> StumbleUpon</a>
<a class="addthis_button_more"> more</a>
</div>
<script type="text/javascript" src="http://s7.addthis.com/js/250/addthis_widget.js#pubid=xa-4f9976e51a56ded5"></script>
<!-- AddThis Button END -->';

  $export['metanavi_addthis'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Online spenden';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'online_spenden';
  $fe_block_boxes->body = '<p>
	Um dieses Projekt zu unterstützen können Sie auch <a href="https://secured.abgeordnetenwatch.de/spenden-452-0.html">online spenden</a>.
</p>
';

  $export['online_spenden'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ihr Pressekontakt';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'press_contact';
  $fe_block_boxes->body = '<div class="clearfix">
	<p>
		<img align="left" alt="Gregor Hackmann" class="media-image attr__typeof__foaf:Image img__fid__5994 img__view_mode__media_original attr__format__media_original" height="208" src="/sites/abgeordnetenwatch.de/files/gregor-hackmack.jpg" style="margin-right:5px;padding:5px;" title="" typeof="foaf:Image" width="138" />Für Fragen stehen wir Ihnen gerne zur Verfügung.<br />
		Für O-Töne, Interviews, Fragen zu abgeordnetenwatch.de wenden Sie sich bitte an
	</p>
	<p>
		<strong>Gregor Hackmack</strong>
	</p>
	<p>
		Telefon: 040 / 317 69 10 - 55<br />
		Fax: 040 / 317 69 10 - 28<br />
		hackmack@abgeordnetenwatch.de
	</p>
	<p>
		Bürozeiten:<br />
		Montag - Freitag 10:00 - 16:00 Uhr
	</p>
</div>
<hr />
<div class="clearfix">
	<p>
		<img align="left" alt="Martin Reher" class="media-image attr__typeof__foaf:Image img__fid__5997 img__view_mode__media_original attr__format__media_original" height="208" src="/sites/abgeordnetenwatch.de/files/martin-reyher.jpg" style="margin-right:5px;padding:5px;" title="" typeof="foaf:Image" width="138" />Für Informationen zu Parteispenden, Nebentätigkeiten<br />
		sowie für Datenmaterial zu Abgeordneten
	</p>
	<p>
		<strong>Martin Reyher</strong>
	</p>
	<p>
		Telefon: 040 / 317 69 10 - 38<br />
		Fax: 040 / 317 69 10 - 28<br />
		reyher@abgeordnetenwatch.de
	</p>
	<p>
		Bürozeiten:<br />
		Montag - Freitag 10:00 - 16:00 Uhr
	</p>
</div>
<hr />
<div class="clearfix">
	<p>
		<img alt="Roman Ebener" class="media-image attr__typeof__foaf:Image img__fid__5997 img__view_mode__media_original attr__format__media_original file-image" src="/sites/abgeordnetenwatch.de/files/roman-ebener.jpg" style="margin: 5px 10px 5px 5px; float: left; width: 138px; height: 208px; " title="" typeof="foaf:Image" />Informationen und Fragen zu abgeordnetenwatch.de auf kommunaler Ebene
	</p>
	<p>
		<strong>Roman Ebener</strong>
	</p>
	<p>
		Telefon: 040 / 317 69 10 - 35<br />
		Fax: 040 / 317 69 10 - 28<br />
		ebener@abgeordnetenwatch.de
	</p>
	<p>
		Bürozeiten:<br />
		Montag - Freitag 10:00 - 16:00 Uhr
	</p>
</div>
<p>
	&nbsp;
</p>
';

  $export['press_contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Unsere Medienpartner';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'press_partner';
  $fe_block_boxes->body = '<p style="position: relative; left: 35px; margin-top: 1em;">
	<a href="http://www.spiegel.de/" rel="nofollow" target="_blank"><img alt="" class="attr__format__media_original attr__typeof__foaf:Image img__fid__6001 img__view_mode__media_original media-image" src="/sites/abgeordnetenwatch.de/files/logo-spiegelonline.png" style="height:21px; width:150px" title="" /></a>
</p>
<p style="position: relative; left: 117px;">
	<a href="http://www.sueddeutsche.de/" rel="nofollow" target="_blank"><img alt="" class="attr__format__media_original attr__typeof__foaf:Image img__fid__6000 img__view_mode__media_original media-image" src="/sites/abgeordnetenwatch.de/files/logo-sueddeutsche.png" style="height:29px; width:152px" title="" /></a>
</p>
<p style="position: relative; left: 35px;">
	<a href="http://www.welt.de/" rel="nofollow" target="_blank"><img alt="" class="attr__format__media_original attr__typeof__foaf:Image img__fid__5999 img__view_mode__media_original media-image" src="/sites/abgeordnetenwatch.de/files/logo-weltonline.png" style="height:23px; width:152px" title="" /></a>
</p>
<p style="position: relative; left: 117px;">
	<a href="http://www.t-online.de/" rel="nofollow" target="_blank"><img alt="" class="attr__format__media_original attr__typeof__foaf:Image img__fid__5998 img__view_mode__media_original media-image" src="/sites/abgeordnetenwatch.de/files/logo-t-online.png" style="height:22px; width:152px" title="" /></a>
</p>
';

  $export['press_partner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Recherche';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'recherche';
  $fe_block_boxes->body = '<p>
	Wir bemühen uns stets, alle Informationen sorgfältig und gewissenhaft zu recherchieren. Sollten uns trotzdem Fehler unterlaufen, dann senden Sie bitte einen <a class="colorbox-node" href="/node/6578?width=600&amp;height=400">kurzen Hinweis</a>.
</p>
';

  $export['recherche'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Suche';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'search_old';
  $fe_block_boxes->body = '<form action="http://www.abgeordnetenwatch.de/index.php" class="compact-form" id="search-old">
    <input type="hidden" value="223" name="cmd" />
<div class="form-item webform-component webform-component-textfield compact-form-wrapper">
    <input type="text" value="Suchwort" alt="Suchwort" id="search-old-txt" class="form-text required compact-form-field" name="q"  />
</div>
<div id="edit-actions" class="form-actions form-wrapper"><input type="image" src="http://ruth.parliamentwatch.org/sites/abgeordnetenwatch.de/files/custom_search/ic_search.png" value="Suchen" name="op" id="edit-submit" class="custom-search-button form-submit" alt="Search"></div>
 </form>';

  $export['search_old'] = $fe_block_boxes;

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
