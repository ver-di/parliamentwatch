<?php
/**
 * @file
 * pw_user_revision_switch.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function pw_user_revision_switch_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'pw_user_profile_fields_rev-about_page';
  $ds_vd->label = 'Pw_user_profile_fields_rev: About Page (Views template)';
  $export['pw_user_profile_fields_rev-about_page'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'pw_user_profile_fields_rev-additional_links_page';
  $ds_vd->label = 'Pw_user_profile_fields_rev: Additional Links Page (Views template)';
  $export['pw_user_profile_fields_rev-additional_links_page'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'pw_user_profile_fields_rev-image_gallery_page';
  $ds_vd->label = 'Pw_user_profile_fields_rev: Image Gallery Page (Views template)';
  $export['pw_user_profile_fields_rev-image_gallery_page'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'pw_user_profile_fields_rev-political_goals_page';
  $ds_vd->label = 'Pw_user_profile_fields_rev: Political Goals Page (Views template)';
  $export['pw_user_profile_fields_rev-political_goals_page'] = $ds_vd;

  return $export;
}
