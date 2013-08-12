<?php
/**
 * @file
 * profiles.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function profiles_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Ask a question anchor';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'questionform_anchor';
  $fe_block_boxes->body = '<div class="center push-bottom-l">
	<span class="form-submit big link-question"><a href="#pw-block-question-form">Ask a Question</a></span>
</div>
';

  $export['questionform_anchor'] = $fe_block_boxes;

  return $export;
}
