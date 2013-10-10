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
  $fe_block_boxes->info = 'Bundestagsradar';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'bundestagsradar';
  $fe_block_boxes->body = '<p>
	Wer verdient nebenher, wer hat die meisten Kinder, wo sitzen die Abweichler? Das Bundestagsradar verrät es Ihnen.
</p>
<p>
	<a href="http://www.abgeordnetenwatch.de/popup-720-0.html" target="_blank"><img alt="" class="media-image attr__typeof__foaf:Image img__fid__7979 img__view_mode__default attr__format__default attr__title__" height="189" src="/sites/abgeordnetenwatch.de/files/bundestagsradar.png" title="" typeof="foaf:Image" width="259" /></a>
</p>
<p class="rteright">
	<a href="http://www.abgeordnetenwatch.de/popup-720-0.html">zum Bundestagsradar</a>
</p>
';

  $export['bundestagsradar'] = $fe_block_boxes;

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
