<?php
/**
 * @file
 * pw_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pw_blog_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_author|node|blogpost|full';
  $field_group->group_name = 'group_blog_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_blogpost_categories',
      1 => 'author_linked_to_contact_form',
      2 => 'post_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'push-bottom-m medium group-blog-author field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_blog_author|node|blogpost|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_metainformation|node|blogpost|full';
  $field_group->group_name = 'group_blog_metainformation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metainformation',
    'weight' => '4',
    'children' => array(
      0 => 'field_blogpost_blogtags',
      1 => 'custom_comment_counter',
      2 => 'sharebuttons',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Metainformation',
      'instance_settings' => array(
        'classes' => ' group-blog-metainformation field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_blogpost_full_group_blog_metainformation',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_blog_metainformation|node|blogpost|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_searchitem|node|blogpost|search_result';
  $field_group->group_name = 'group_blog_searchitem';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PW list item',
    'weight' => '11',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PW list item',
      'instance_settings' => array(
        'classes' => 'pw-list-item group-blog-searchitem field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_blogpost_search_result_group_blog_searchitem',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_blog_searchitem|node|blogpost|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_social_media|node|blogpost|full';
  $field_group->group_name = 'group_blog_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '8',
    'children' => array(
      0 => 'sharethis_horizontal',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social Media',
      'instance_settings' => array(
        'classes' => ' group-blog-social-media field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_blogpost_full_group_blog_social_media',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_blog_social_media|node|blogpost|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grid_6|node|blogpost|search_result';
  $field_group->group_name = 'group_grid_6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grid 6 Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'node_link',
      2 => 'search_snippet',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Grid 6 Wrapper',
      'instance_settings' => array(
        'classes' => 'grid-6 omega group-grid-6 field-group-div',
        'description' => '',
        'id' => 'node_blogpost_search_result_group_grid_6',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grid_6|node|blogpost|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_search_blog_body|node|blogpost|search_result';
  $field_group->group_name = 'group_search_blog_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blogpost';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '31',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Body',
      'instance_settings' => array(
        'classes' => ' group-search-blog-body field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_blogpost_search_result_group_search_blog_body',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_search_blog_body|node|blogpost|search_result'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Grid 6 Wrapper');
  t('Metainformation');
  t('PW list item');
  t('Social Media');

  return $field_groups;
}
