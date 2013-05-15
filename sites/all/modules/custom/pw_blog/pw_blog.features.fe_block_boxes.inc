<?php
/**
 * @file
 * pw_blog.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_blog_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Newsletter bestellen';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'newsletter_order';
  $fe_block_boxes->body = 'Bleiben Sie informiert und erhalten Sie regelmäßig alle wichtigen
Neuigkeiten von abgeordnetenwatch.de
<?php
$block = module_invoke(\'webform\', \'block_view\', \'client-block-5332\');
print render($block[\'content\']);
?>';

  $export['newsletter_order'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'shareThis buttons';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'sharethis_buttons';
  $fe_block_boxes->body = '<span class="st_twitter_hcount" displayText="Twitter"></span>
<span class="st_fbrec_hcount" displayText="Facebook Recommend"></span>
<span class="st_plusone_hcount" displayText="Google +1"></span>';

  $export['sharethis_buttons'] = $fe_block_boxes;

  return $export;
}
