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
  $ds_fieldsetting->id = 'node|calendar_entry|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'calendar_entry';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'back_to_calendar' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'short_profile_on_calendar_entry' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|calendar_entry|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'polls_archive_view' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'polls_profile_last' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
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
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'float-left',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'question_form' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'questions_and_answers' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_og_description' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_user_fname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_user_job_skills' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'label-inline',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-item clearfix even',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_user_lname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_user_picture' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'file-image float-left push-bottom-l',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_user_constituency' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-item clearfix odd',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_user_parliament' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_user_party' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
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
    'additional_links' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'parliament_info_block' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'profile_extension' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'push-bottom-m',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'profil_picture_views_block' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'file-image float-left push-bottom-l',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'pw_slider' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pw_user_nameparty' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'question_and_answers_switcher' => array(
      'weight' => '17',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Change view',
          'lb-el' => 'h4',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'question_and_answer_colorbox' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'user_about' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'clear clearfix push-bottom-l',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'user_basic_info' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'clear clearfix push-bottom-l',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'user_political_goals' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'clear clearfix push-bottom-l',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'qa_asking_anchor' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'push-bottom-m',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'qa_link_counter' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'float-left',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'question_and_answers_filter' => array(
      'weight' => '16',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'question_and_answers_pane' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 1,
        'title_wrapper' => 'h2',
        'ctools' => 'a:3:{s:4:"conf";a:4:{s:12:"link_to_view";i:0;s:9:"use_pager";i:1;s:8:"pager_id";s:1:"0";s:14:"items_per_page";s:1:"3";}s:4:"type";s:11:"views_panes";s:7:"subtype";s:38:"profile_questions_answers-panel_pane_1";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'question_form' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'user_calendar' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'user_image_gallery' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'clear clearfix push-bottom-l',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'user_tweets' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
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
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_user_fname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_user_lname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_user_party' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_user_picture' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'float-left',
        ),
      ),
    ),
    'group_user_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'h3',
        ),
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
  $ds_field->field = 'additional_links';
  $ds_field->label = 'User Additional Links ';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|883f5d656342b9b5bf86986c1f124c89',
    'block_render' => '2',
  );
  $export['additional_links'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ask_a_question';
  $ds_field->label = 'Soon you can ask questions';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|1',
    'block_render' => '2',
  );
  $export['ask_a_question'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'back_to_calendar';
  $ds_field->label = 'Back to Calendar';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|calendar-block_4',
    'block_render' => '1',
  );
  $export['back_to_calendar'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'go_to_profile';
  $ds_field->label = 'Go to profile';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|3509b58cbc4e6ba12500a0953896ee89',
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|polls_profile-last',
    'block_render' => '1',
  );
  $export['polls_profile_last'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'profil_picture_views_block';
  $ds_field->label = 'Profil Picture Views Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|bb2bc4bf6c722a251dda49d38c4f36a0',
    'block_render' => '3',
  );
  $export['profil_picture_views_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'profile_extension';
  $ds_field->label = 'Profile Extension';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|f7236266d8b27f67d2300a86a665e373',
    'block_render' => '3',
  );
  $export['profile_extension'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'profile_picture';
  $ds_field->label = 'Profile Picture';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|user_profile_fields-block_2',
    'block_render' => '3',
  );
  $export['profile_picture'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'qa_asking_anchor';
  $ds_field->label = 'Q & A ask anchor';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<form action="" id="form-view-mode-switcher" method="post" name="view-mode-switcher">
	<fieldset>
		<input class="view-mode-full" name="group1" type="radio" value="full" /> Full View<br />
		<input checked="checked" class="view-mode-teaser" name="group1" type="radio" value="teaser" /> Teaser View
	</fieldset>
</form>
',
      'format' => 'php_code',
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|polls_profile-block_2',
    'block_render' => '3',
  );
  $export['sharethis_polls_profile'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'short_profile_on_calendar_entry';
  $ds_field->label = 'Short Profile on Calendar Entry';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|calendar-block_3',
    'block_render' => '1',
  );
  $export['short_profile_on_calendar_entry'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_about';
  $ds_field->label = 'User About';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|user_profile_fields-about',
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
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|user_profile_fields-basic_info',
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
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
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|b40c00230269e3c21b215fbf9658442a',
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
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|user_tweets-block_1',
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
  $ds_layout->id = 'node|calendar_entry|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'calendar_entry';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'short_profile_on_calendar_entry',
        1 => 'field_calendar_entry_address',
        2 => 'field_calendar_entry_date',
        3 => 'body',
        4 => 'back_to_calendar',
      ),
    ),
    'fields' => array(
      'short_profile_on_calendar_entry' => 'ds_content',
      'field_calendar_entry_address' => 'ds_content',
      'field_calendar_entry_date' => 'ds_content',
      'body' => 'ds_content',
      'back_to_calendar' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|calendar_entry|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'polls_archive_view',
        1 => 'user_og_description',
        2 => 'questions_and_answers',
        3 => 'group_user_commitee_tab',
        4 => 'group_user_polls',
        5 => 'field_user_picture',
        6 => 'group_user_name',
        7 => 'field_user_fname',
        8 => 'field_user_lname',
        9 => 'field_user_parliament',
        10 => 'field_user_party',
        11 => 'qa_asking_anchor',
        12 => 'field_user_commitee',
        13 => 'qa_link_counter',
        14 => 'field_user_political_roles',
        15 => 'group_basics',
        16 => 'group_roles',
        17 => 'group_user_basics',
        18 => 'group_polls',
        19 => 'group_user_commitee',
        20 => 'polls_profile_last',
        21 => 'field_user_more',
        22 => 'question_form',
        23 => 'group_user_basics_basics',
        24 => 'field_user_job_skills',
        25 => 'group_user_basics_additional',
        26 => 'field_user_constituency',
        27 => 'group_user_polls_last',
        28 => 'group_user_polls_archive',
      ),
    ),
    'fields' => array(
      'polls_archive_view' => 'ds_content',
      'user_og_description' => 'ds_content',
      'questions_and_answers' => 'ds_content',
      'group_user_commitee_tab' => 'ds_content',
      'group_user_polls' => 'ds_content',
      'field_user_picture' => 'ds_content',
      'group_user_name' => 'ds_content',
      'field_user_fname' => 'ds_content',
      'field_user_lname' => 'ds_content',
      'field_user_parliament' => 'ds_content',
      'field_user_party' => 'ds_content',
      'qa_asking_anchor' => 'ds_content',
      'field_user_commitee' => 'ds_content',
      'qa_link_counter' => 'ds_content',
      'field_user_political_roles' => 'ds_content',
      'group_basics' => 'ds_content',
      'group_roles' => 'ds_content',
      'group_user_basics' => 'ds_content',
      'group_polls' => 'ds_content',
      'group_user_commitee' => 'ds_content',
      'polls_profile_last' => 'ds_content',
      'field_user_more' => 'ds_content',
      'question_form' => 'ds_content',
      'group_user_basics_basics' => 'ds_content',
      'field_user_job_skills' => 'ds_content',
      'group_user_basics_additional' => 'ds_content',
      'field_user_constituency' => 'ds_content',
      'group_user_polls_last' => 'ds_content',
      'group_user_polls_archive' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_sidebars' => 1,
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|premium_user';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'premium_user';
  $ds_layout->layout = 'pw_with_sidebar_2rows_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left_1' => array(
        0 => 'profil_picture_views_block',
        2 => 'pw_user_nameparty',
        3 => 'parliament_info_block',
        4 => 'profile_extension',
        5 => 'qa_asking_anchor',
        6 => 'qa_link_counter',
        7 => 'user_basic_info',
        8 => 'user_about',
        9 => 'user_image_gallery',
        10 => 'user_political_goals',
        11 => 'user_tweets',
        12 => 'additional_links',
        13 => 'user_calendar',
      ),
      'right_1' => array(
        1 => 'pw_slider',
      ),
      'left_2' => array(
        14 => 'question_and_answers_pane',
        15 => 'question_and_answer_colorbox',
        16 => 'question_form',
      ),
      'right_2' => array(
        17 => 'question_and_answers_filter',
        18 => 'question_and_answers_switcher',
      ),
    ),
    'fields' => array(
      'profil_picture_views_block' => 'left_1',
      'pw_slider' => 'right_1',
      'pw_user_nameparty' => 'left_1',
      'parliament_info_block' => 'left_1',
      'profile_extension' => 'left_1',
      'qa_asking_anchor' => 'left_1',
      'qa_link_counter' => 'left_1',
      'user_basic_info' => 'left_1',
      'user_about' => 'left_1',
      'user_image_gallery' => 'left_1',
      'user_political_goals' => 'left_1',
      'user_tweets' => 'left_1',
      'additional_links' => 'left_1',
      'user_calendar' => 'left_1',
      'question_and_answers_pane' => 'left_2',
      'question_and_answer_colorbox' => 'left_2',
      'question_form' => 'left_2',
      'question_and_answers_filter' => 'right_2',
      'question_and_answers_switcher' => 'right_2',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left_1' => 'div',
      'right_1' => 'div',
      'inbetween' => 'div',
      'left_2' => 'div',
      'right_2' => 'div',
      'footer' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_sidebars' => 1,
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
