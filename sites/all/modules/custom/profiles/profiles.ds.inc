<?php
/**
 * @file
 * profiles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function profiles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'question_form' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'polls_archive_view' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'polls_profile_last' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'qa_asking_anchor' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'qa_link_counter' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'float-left',
      ),
    ),
    'questions_and_answers' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'user_og_description' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'field_user_constituency' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item clearfix odd',
      ),
    ),
    'field_user_fname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_job_skills' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'label-inline',
        'lb-col' => TRUE,
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'field-item clearfix even',
      ),
    ),
    'field_user_lname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_parliament' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => '',
      ),
    ),
    'field_user_party' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_picture' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'file-image float-left push-bottom-l',
      ),
    ),
    'group_polls' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'group_user_polls_archive' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'group_user_polls_last' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
    'group_user_polls' => array(
      'ft' => array(
        'func' => 'theme_ds_field_reset',
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|premium_user';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'premium_user';
  $ds_fieldsetting->settings = array(
    'additional_links_' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'parliament_info_block' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'profile_extension' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'profile_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'question_and_answers_filter' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'question_and_answers_pane' => array(
      'weight' => '18',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:12:"link_to_view";i:0;s:9:"use_pager";i:1;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:1:"3";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:38:"profile_questions_answers-panel_pane_1";}',
        'load_terms' => 0,
      ),
    ),
    'question_and_answers_switcher' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'question_and_answer_colorbox' => array(
      'weight' => '19',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'question_form' => array(
      'weight' => '20',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'same_constituency' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_about' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_basic_info' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_calendar' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_image_gallery' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_political_goals' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_tweets' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'qa_asking_anchor' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'qa_link_counter' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['user|user|premium_user'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_search';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_search';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'div',
        'class' => 'float-right link-profile',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_fname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_lname' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_party' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
      ),
    ),
    'field_user_picture' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'float-left',
      ),
    ),
    'group_user_name' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'h3',
      ),
    ),
  );
  $export['user|user|user_search'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function profiles_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'additional_links_';
  $ds_field->label = 'Additional Links ';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|user_profile_fields-block_6',
    'block_render' => '2',
  );
  $export['additional_links_'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ask_a_question';
  $ds_field->label = 'Soon you can ask questions';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'block|1',
    'block_render' => '2',
  );
  $export['ask_a_question'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'go_to_profile';
  $ds_field->label = 'Go to profile';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
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
  $export['go_to_profile'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'parliament_info_block';
  $ds_field->label = 'Parliament Info Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|user_profile_fields-block_7',
    'block_render' => '3',
  );
  $export['parliament_info_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'polls_archive_view';
  $ds_field->label = 'Polls archive view';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|polls_profile-block',
    'block_render' => '1',
  );
  $export['polls_archive_view'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'polls_profile_last';
  $ds_field->label = 'Polls profile last';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|polls_profile-last',
    'block_render' => '1',
  );
  $export['polls_profile_last'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'profile_extension';
  $ds_field->label = 'Profile Extension';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|user_profile_fields-block_1',
    'block_render' => '3',
  );
  $export['profile_extension'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'qa_asking_anchor';
  $ds_field->label = 'Q & A ask anchor';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'block|5',
    'block_render' => '3',
  );
  $export['qa_asking_anchor'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'qa_link_counter';
  $ds_field->label = 'Q&A link and counter';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|qa_counter_link-block',
    'block_render' => '3',
  );
  $export['qa_link_counter'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'question_and_answers_filter';
  $ds_field->label = 'Question and Answers Filter';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|262bcfa866f0c97952c40434a855967b',
    'block_render' => '1',
  );
  $export['question_and_answers_filter'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'question_and_answers_pane';
  $ds_field->label = 'Question and Answers Pane';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
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
  $export['question_and_answers_pane'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'question_and_answers_switcher';
  $ds_field->label = 'Question and Answers Switcher';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => 'Switch View Mode
<form name="myform" action="" method="POST">
<div align="left"><br>
<input type="radio" name="group1" value="full"> Full View<br>
<input type="radio" name="group1" value="teaser" checked> Teaser View<br>
</div>
</form>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['question_and_answers_switcher'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'question_form';
  $ds_field->label = 'Question form';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'webform|client-block-17',
    'block_render' => '1',
  );
  $export['question_form'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'question_form_anonymous';
  $ds_field->label = 'Question form anonymous';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'webform|client-block-796',
    'block_render' => '2',
  );
  $export['question_form_anonymous'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'questions_and_answers';
  $ds_field->label = 'Questions and answers';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|profile_questions_answers-block',
    'block_render' => '1',
  );
  $export['questions_and_answers'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'same_constituency';
  $ds_field->label = 'Same Constituency';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|9a5bb2cea55a5e3aeadcdd18ecf4d2e6',
    'block_render' => '2',
  );
  $export['same_constituency'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'sharethis_polls_profile';
  $ds_field->label = 'ShareThis polls profile';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|polls_profile-block_2',
    'block_render' => '3',
  );
  $export['sharethis_polls_profile'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_about';
  $ds_field->label = 'User About';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|user_profile_fields-block_4',
    'block_render' => '2',
  );
  $export['user_about'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_basic_info';
  $ds_field->label = 'User Basic Info';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|user_profile_fields-block_3',
    'block_render' => '2',
  );
  $export['user_basic_info'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_calendar';
  $ds_field->label = 'User Calendar';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|calendar-block_1',
    'block_render' => '2',
  );
  $export['user_calendar'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_image_gallery';
  $ds_field->label = 'User Image Gallery';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|5e53e48c6b000f864c0fbb0bc65ce72e',
    'block_render' => '2',
  );
  $export['user_image_gallery'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_og_description';
  $ds_field->label = 'User OG Description';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
global $user;
$user_fields = user_load($user->uuid);
$firstname = $user_fields->field_user_fname[\'und\'][\'0\'][\'value\'];
$lastname = $user_fields->field_user_lname[\'und\'][\'0\'][\'value\'];
$sitename = token_replace(\'[site:name]\');

$description = "I found something interesting on ".$sitename.". Check it out!";
$element = array(
  \'#tag\' => \'meta\', 
  \'#attributes\' => array(
    \'property\' => \'og:description\',
    \'content\' => $description,
  ),
);
drupal_add_html_head($element, \'og_description\');
?>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['user_og_description'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_political_goals';
  $ds_field->label = 'User Political Goals';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|user_profile_fields-block_5',
    'block_render' => '2',
  );
  $export['user_political_goals'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_tweets';
  $ds_field->label = 'User Tweets';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'block' => 'views|tweets-block_1',
    'block_render' => '2',
  );
  $export['user_tweets'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function profiles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'user_og_description',
        1 => 'field_user_picture',
        2 => 'group_audience',
        3 => 'polls_archive_view',
        4 => 'group_user_polls',
        5 => 'group_user_commitee_tab',
        6 => 'field_user_fname',
        7 => 'group_user_name',
        8 => 'field_user_parliament',
        9 => 'field_user_lname',
        10 => 'qa_asking_anchor',
        11 => 'field_user_commitee',
        12 => 'field_user_party',
        13 => 'qa_link_counter',
        14 => 'field_user_political_roles',
        15 => 'group_basics',
        16 => 'group_roles',
        17 => 'group_user_basics',
        18 => 'group_user_commitee',
        19 => 'group_polls',
        20 => 'questions_and_answers',
        21 => 'polls_profile_last',
        22 => 'question_form',
        23 => 'field_user_more',
        24 => 'group_user_basics_basics',
        25 => 'field_user_job_skills',
        26 => 'group_user_basics_additional',
        27 => 'field_user_constituency',
        28 => 'group_user_polls_last',
        29 => 'group_user_polls_archive',
      ),
    ),
    'fields' => array(
      'user_og_description' => 'ds_content',
      'field_user_picture' => 'ds_content',
      'group_audience' => 'ds_content',
      'polls_archive_view' => 'ds_content',
      'group_user_polls' => 'ds_content',
      'group_user_commitee_tab' => 'ds_content',
      'field_user_fname' => 'ds_content',
      'group_user_name' => 'ds_content',
      'field_user_parliament' => 'ds_content',
      'field_user_lname' => 'ds_content',
      'qa_asking_anchor' => 'ds_content',
      'field_user_commitee' => 'ds_content',
      'field_user_party' => 'ds_content',
      'qa_link_counter' => 'ds_content',
      'field_user_political_roles' => 'ds_content',
      'group_basics' => 'ds_content',
      'group_roles' => 'ds_content',
      'group_user_basics' => 'ds_content',
      'group_user_commitee' => 'ds_content',
      'group_polls' => 'ds_content',
      'questions_and_answers' => 'ds_content',
      'polls_profile_last' => 'ds_content',
      'question_form' => 'ds_content',
      'field_user_more' => 'ds_content',
      'group_user_basics_basics' => 'ds_content',
      'field_user_job_skills' => 'ds_content',
      'group_user_basics_additional' => 'ds_content',
      'field_user_constituency' => 'ds_content',
      'group_user_polls_last' => 'ds_content',
      'group_user_polls_archive' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|premium_user';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'premium_user';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'same_constituency',
        1 => 'profile_picture',
        2 => 'field_user_fname',
        3 => 'field_user_lname',
        4 => 'field_user_party',
        5 => 'parliament_info_block',
        6 => 'profile_extension',
        7 => 'qa_asking_anchor',
        8 => 'qa_link_counter',
        9 => 'user_basic_info',
        10 => 'user_about',
        11 => 'user_image_gallery',
        12 => 'user_political_goals',
        13 => 'user_tweets',
        14 => 'user_calendar',
        15 => 'additional_links_',
        16 => 'question_and_answers_filter',
        17 => 'question_and_answers_switcher',
        18 => 'question_and_answers_pane',
        19 => 'question_and_answer_colorbox',
        20 => 'question_form',
      ),
    ),
    'fields' => array(
      'same_constituency' => 'ds_content',
      'profile_picture' => 'ds_content',
      'field_user_fname' => 'ds_content',
      'field_user_lname' => 'ds_content',
      'field_user_party' => 'ds_content',
      'parliament_info_block' => 'ds_content',
      'profile_extension' => 'ds_content',
      'qa_asking_anchor' => 'ds_content',
      'qa_link_counter' => 'ds_content',
      'user_basic_info' => 'ds_content',
      'user_about' => 'ds_content',
      'user_image_gallery' => 'ds_content',
      'user_political_goals' => 'ds_content',
      'user_tweets' => 'ds_content',
      'user_calendar' => 'ds_content',
      'additional_links_' => 'ds_content',
      'question_and_answers_filter' => 'ds_content',
      'question_and_answers_switcher' => 'ds_content',
      'question_and_answers_pane' => 'ds_content',
      'question_and_answer_colorbox' => 'ds_content',
      'question_form' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['user|user|premium_user'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_search';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_user_picture',
        1 => 'group_user_name',
        2 => 'field_user_fname',
        3 => 'name',
        4 => 'field_user_lname',
        5 => 'field_user_party',
      ),
    ),
    'fields' => array(
      'field_user_picture' => 'ds_content',
      'group_user_name' => 'ds_content',
      'field_user_fname' => 'ds_content',
      'name' => 'ds_content',
      'field_user_lname' => 'ds_content',
      'field_user_party' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['user|user|user_search'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function profiles_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'premium_user';
  $ds_view_mode->label = 'Premium User';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['premium_user'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_landscape_l';
  $ds_view_mode->label = 'pw_file_landscape_l';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_landscape_l'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_portrait_l';
  $ds_view_mode->label = 'pw_file_portrait_l';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_portrait_l'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_portrait_m';
  $ds_view_mode->label = 'pw_file_portrait_m';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_portrait_m'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_portrait_s';
  $ds_view_mode->label = 'pw_file_portrait_s';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_portrait_s'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_search';
  $ds_view_mode->label = 'User search';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_search'] = $ds_view_mode;

  return $export;
}
