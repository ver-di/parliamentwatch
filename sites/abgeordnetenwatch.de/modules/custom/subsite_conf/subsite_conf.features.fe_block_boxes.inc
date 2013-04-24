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
  $fe_block_boxes->info = 'Social Media Footer';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'social_media_footer';
  $fe_block_boxes->body = '<ul class="menu">
<li class="first leaf facebook"><a title="" href="https://www.facebook.com/abgeordnetenwatch.de">Facebook</a></li>
<li class="leaf twitter"><a title="" href="https://twitter.com/a_watch">Twitter</a></li>
<li class="leaf google"><a title="" href="https://plus.google.com/101206126881536002255/">Google+</a></li>
<li class="leaf rss"><a title="" href="/rss.xml">RSS</a></li>
</ul>';

  $export['social_media_footer'] = $fe_block_boxes;

  return $export;
}
