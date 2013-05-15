<?php
/**
 * @file
 * pw_blog.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_blog_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogpost|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogpost';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'sharethis' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'custom_comment_counter' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'comment-count',
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'inline',
      'format' => 'author',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => ' by ',
        'lb-col' => TRUE,
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'inline',
      'format' => 'ds_post_date_date_and_time',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Posted on ',
        'lb-col' => TRUE,
      ),
    ),
    'field_teaser_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'file-image float-left push-bottom-s',
      ),
    ),
    'field_blogpost_blogtags' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'icon-taxonomy',
      ),
    ),
    'field_blogpost_categories' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => ' in ',
        'lb-col' => TRUE,
      ),
    ),
    'group_blog_author' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
  );
  $export['node|blogpost|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogpost|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogpost';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '5',
      'label' => 'inline',
      'format' => 'author',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => ' von ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'author',
      ),
    ),
    'post_date' => array(
      'weight' => '4',
      'label' => 'inline',
      'format' => 'ds_post_date_medium',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Veröffentlicht am ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'date',
      ),
    ),
    'field_blogpost_blogtags' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-type-taxonomy-term-reference clearfix clear-both',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
  );
  $export['node|blogpost|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogpost|rss';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogpost';
  $ds_fieldsetting->view_mode = 'rss';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|blogpost|rss'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogpost|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogpost';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
    'author' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'light',
      ),
    ),
  );
  $export['node|blogpost|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blogpost|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blogpost';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'sharethis' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'comments' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'inline',
      'format' => 'author',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => ' by ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'author',
      ),
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'inline',
      'format' => 'ds_post_date_medium',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Posted on ',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => 'date',
      ),
    ),
    'body' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_blogpost_blogtags' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'icon-taxonomy clearfix clear-both',
      ),
    ),
    'field_teaser_image' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'float-left file-image push-bottom-s clear-both',
      ),
    ),
    'group_blogtags_author' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
  );
  $export['node|blogpost|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_blog_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'block_newsletter_order';
  $ds_field->label = 'Newsletter bestellen';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'block|3',
    'block_render' => '1',
  );
  $export['block_newsletter_order'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'custom_comment_counter';
  $ds_field->label = 'Custom Comment Counter';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'comment' => 'comment',
    'node' => 'node',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php

// Load and print comment count
$node = node_load(arg(1));
if($node->comment_count == 0){
    print \'<a href="#comments" title="\'.t(\'go to comments\').\'">\'.t(\'no comments yet\').\'</a>\';
}
else if($node->comment_count == 1){
    print \'<a href="#comments" title="\'.t("go to comments").\'">\'.t("1 comment").\'</a>\';
}
else{
    print  \'<a href="#comments" title="\'.t("go to comments").\'">\'.$node->comment_count.t(" comments").\'</a>\';
}

?>',
      'format' => 'php_code',
    ),
    'use_token' => 0,
  );
  $export['custom_comment_counter'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'rss';
  $ds_field->label = 'RSS';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['rss'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'sharethis';
  $ds_field->label = 'sharethis';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array(
    'block' => 'sharethis|sharethis_block',
    'block_render' => '3',
  );
  $export['sharethis'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_blog_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogpost|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogpost';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'sharethis',
        1 => 'field_blogpost_blogtags',
        2 => 'title',
        3 => 'custom_comment_counter',
        4 => 'group_blog_author',
        5 => 'post_date',
        6 => 'group_blog_metainformation',
        7 => 'field_teaser_image',
        8 => 'author',
        9 => 'field_blogpost_categories',
        10 => 'body',
        11 => 'comments',
      ),
    ),
    'fields' => array(
      'sharethis' => 'ds_content',
      'field_blogpost_blogtags' => 'ds_content',
      'title' => 'ds_content',
      'custom_comment_counter' => 'ds_content',
      'group_blog_author' => 'ds_content',
      'post_date' => 'ds_content',
      'group_blog_metainformation' => 'ds_content',
      'field_teaser_image' => 'ds_content',
      'author' => 'ds_content',
      'field_blogpost_categories' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|blogpost|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogpost|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogpost';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_blog_submitted',
        2 => 'field_blogpost_blogtags',
        3 => 'post_date',
        4 => 'author',
        5 => 'body',
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_blog_submitted' => 'ds_content',
      'field_blogpost_blogtags' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
      'body' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|blogpost|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogpost|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogpost';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'author',
        3 => 'body',
        4 => 'field_blogpost_blogtags',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
      'body' => 'ds_content',
      'field_blogpost_blogtags' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|blogpost|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blogpost|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blogpost';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'sharethis',
        1 => 'title',
        2 => 'group_blogtags_author',
        3 => 'post_date',
        4 => 'author',
        5 => 'field_teaser_image',
        6 => 'body',
        7 => 'field_blogpost_blogtags',
        8 => 'comments',
      ),
    ),
    'fields' => array(
      'sharethis' => 'ds_content',
      'title' => 'ds_content',
      'group_blogtags_author' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
      'field_teaser_image' => 'ds_content',
      'body' => 'ds_content',
      'field_blogpost_blogtags' => 'ds_content',
      'comments' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|blogpost|teaser'] = $ds_layout;

  return $export;
}
