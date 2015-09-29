<?php
/**
 * @file
 * pw_user_revision_switch.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_user_revision_switch_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|pw_user_profile_fields_rev-about_page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'pw_user_profile_fields_rev-about_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'header' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rows' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'footer' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|pw_user_profile_fields_rev-about_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|pw_user_profile_fields_rev-additional_links_page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'pw_user_profile_fields_rev-additional_links_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'header' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rows' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'footer' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|pw_user_profile_fields_rev-additional_links_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|pw_user_profile_fields_rev-image_gallery_page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'pw_user_profile_fields_rev-image_gallery_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'header' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rows' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'footer' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|pw_user_profile_fields_rev-image_gallery_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|pw_user_profile_fields_rev-political_goals_page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'pw_user_profile_fields_rev-political_goals_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'header' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'rows' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'footer' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|pw_user_profile_fields_rev-political_goals_page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_user_revision_switch_ds_custom_fields_info() {
  $export = array();

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
    'block' => 'views|pw_user_revision_switch-block_1',
    'block_render' => '1',
  );
  $export['user_revision_switch'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_user_revision_switch_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|pw_user_profile_fields_rev-about_page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'pw_user_profile_fields_rev-about_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'header',
        1 => 'rows',
        2 => 'footer',
      ),
    ),
    'fields' => array(
      'header' => 'ds_content',
      'rows' => 'ds_content',
      'footer' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['ds_views|pw_user_profile_fields_rev-about_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|pw_user_profile_fields_rev-additional_links_page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'pw_user_profile_fields_rev-additional_links_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'header',
        1 => 'rows',
        2 => 'footer',
      ),
    ),
    'fields' => array(
      'header' => 'ds_content',
      'rows' => 'ds_content',
      'footer' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['ds_views|pw_user_profile_fields_rev-additional_links_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|pw_user_profile_fields_rev-image_gallery_page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'pw_user_profile_fields_rev-image_gallery_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'header',
        1 => 'rows',
        2 => 'footer',
      ),
    ),
    'fields' => array(
      'header' => 'ds_content',
      'rows' => 'ds_content',
      'footer' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['ds_views|pw_user_profile_fields_rev-image_gallery_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|pw_user_profile_fields_rev-political_goals_page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'pw_user_profile_fields_rev-political_goals_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'header',
        1 => 'rows',
        2 => 'footer',
      ),
    ),
    'fields' => array(
      'header' => 'ds_content',
      'rows' => 'ds_content',
      'footer' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
    'hide_sidebars' => 0,
  );
  $export['ds_views|pw_user_profile_fields_rev-political_goals_page|default'] = $ds_layout;

  return $export;
}
