<?php
/**
 * @file
 * pw_globals.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_globals_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'shareThis buttons';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'sharethis_buttons';
  $fe_block_boxes->body = '<?php

// default share this url
$share_this_url = url(current_path(), array(\'absolute\' => TRUE));

// if webform submission sid is set, try to retrieve node path for sharing
$get_vars = drupal_get_query_parameters();
if(!empty($get_vars[\'sid\'])){
  $result = db_query("SELECT w_data.data FROM {webform_submitted_data} w_data INNER JOIN {webform_component} w_comp ON w_data.cid = w_comp.cid AND w_data.nid = w_comp.nid WHERE w_comp.form_key = \'node_path\' AND w_data.sid = :sid", array(\':sid\' => $get_vars[\'sid\']))->fetchCol();
  if(!empty($result)){
    $share_this_url = url($result[0], array(\'absolute\' => TRUE));
  }
}
?>

<span class="st_twitter_hcount" displayText="Twitter" st_url="<?=$share_this_url?>"></span>
<span class="st_fbrec_hcount" displayText="Facebook Recommend" st_url="<?=$share_this_url?>"></span>
<span class="st_plusone_hcount" displayText="Google +1" st_url="<?=$share_this_url?>"></span>';

  $export['sharethis_buttons'] = $fe_block_boxes;

  return $export;
}
