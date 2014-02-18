<?php
/**
 * @file
 * pw_user_revision_switch.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_user_revision_switch_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'short_profile_deputy_main_rev';
  $ds_field->label = 'Short Profile Deputy Main Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|f4f58a460e337dd20c6b7fbc8a2f0b6d',
    'block_render' => '1',
  );
  $export['short_profile_deputy_main_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'short_profile_deputy_sub_rev';
  $ds_field->label = 'Short Profile Deputy Sub Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|3996f7c9a42be3c1e48df1167c4b331e',
    'block_render' => '1',
  );
  $export['short_profile_deputy_sub_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'short_profile_premium_main_rev';
  $ds_field->label = 'Short Profile Premium Main Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|1bfdad95b3077966cebee9136e4f94e5',
    'block_render' => '1',
  );
  $export['short_profile_premium_main_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'short_profile_premium_sub_rev';
  $ds_field->label = 'Short Profile Premium Sub Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|e186c11da3dfa0a6ec934df815934fc8',
    'block_render' => '1',
  );
  $export['short_profile_premium_sub_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_basic_info_rev';
  $ds_field->label = 'User Basic Info Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|901096594d39ea14f78dc9e2fefbe5e0',
    'block_render' => '1',
  );
  $export['user_basic_info_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_about_rev';
  $ds_field->label = 'User Profile About Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|4dcafc132e57885543e30b58a6f03db6',
    'block_render' => '1',
  );
  $export['user_profile_about_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_add_links_rev';
  $ds_field->label = 'User Profile Add. Links Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|8cb951080268e07b91e84bb9f40a0b10',
    'block_render' => '1',
  );
  $export['user_profile_add_links_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_extension_rev';
  $ds_field->label = 'User Profile Extension Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|66c15b9f7adf72949d75707559106a91',
    'block_render' => '1',
  );
  $export['user_profile_extension_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_headline_rev';
  $ds_field->label = 'User Profile Headline Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|e10c444197472b77faf820d4edf6348a',
    'block_render' => '1',
  );
  $export['user_profile_headline_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_image_gallery_rev';
  $ds_field->label = 'User Profile Image Gallery Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|911001090b6fd83967d2564c46e72c20',
    'block_render' => '1',
  );
  $export['user_profile_image_gallery_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_parliament_info_rev';
  $ds_field->label = 'User Profile Parliament Info Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|8a05376dfc4831ce88592b0045b1a661',
    'block_render' => '1',
  );
  $export['user_profile_parliament_info_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_picture_rev';
  $ds_field->label = 'User Profile Picture Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|1ed77cfca6fb78161c79828e2a5829e5',
    'block_render' => '1',
  );
  $export['user_profile_picture_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_political_goals_rev';
  $ds_field->label = 'User Profile Political Goals Rev';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|5c321d1fa4154d361026bc60361258b8',
    'block_render' => '1',
  );
  $export['user_profile_political_goals_rev'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_revision_switch';
  $ds_field->label = 'User Revision Switch';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|pw_user_revision_switch-block',
    'block_render' => '1',
  );
  $export['user_revision_switch'] = $ds_field;

  return $export;
}
