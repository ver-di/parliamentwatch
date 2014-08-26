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
$share_this_title = \'\';

// if webform submission sid is set, try to retrieve node path and title for sharing
$get_vars = drupal_get_query_parameters();
if(!empty($get_vars[\'sid\'])){
  $result = db_query("SELECT w_data.data AS node_path FROM {webform_submitted_data} w_data INNER JOIN {webform_component} w_comp ON w_data.cid = w_comp.cid AND w_data.nid = w_comp.nid WHERE w_comp.form_key = \'node_path\' AND w_data.sid = :sid", array(\':sid\' => $get_vars[\'sid\']))->fetchAssoc();
  if(!empty($result)){
    $nid = (int)str_replace(\'node/\', \'\', $result[\'node_path\']);
    $node = node_load($nid);
    if($node){
      $share_this_url = url($result[\'node_path\'], array(\'absolute\' => TRUE));
      $share_this_title = $node->title;
    }
  }
}
?>

<span class="st_twitter_hcount" displayText="Twitter" st_url="<?=$share_this_url?>" st_title="<?=$share_this_title?>"></span>
<span class="st_facebook_hcount" displayText="Facebook" st_url="<?=$share_this_url?>"></span>
<span class="st_plusone_hcount" displayText="Google +1" st_url="<?=$share_this_url?>"></span>
<span class="st_email_hcount" displayText="E-Mail" st_url="<?=$share_this_url?>"></span>
<br /><br />';

  $export['sharethis_buttons'] = $fe_block_boxes;

  return $export;
}
