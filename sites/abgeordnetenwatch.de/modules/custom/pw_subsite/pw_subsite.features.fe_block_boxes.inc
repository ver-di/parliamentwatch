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
  $fe_block_boxes->info = 'Flattr';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'pw_flattr';
  $fe_block_boxes->body = '<p>
Sie können uns auch "flattrn".
</p>
<iframe src="https://api.flattr.com/button/view/?uid=abgeordnetenwatch.de&amp;url=http://www.abgeordnetenwatch.de&amp;title=www.abgeordnetenwatch.de&amp;description=www.abgeordnetenwatch.de&amp;category=text&amp;language=de_DE" style="width:80px; height:62px;" allowtransparency="true" frameborder="0" scrolling="no" class="float-left"></iframe>';

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
