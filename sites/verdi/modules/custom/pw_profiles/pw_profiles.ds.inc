<?php
/**
 * @file
 * pw_profiles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_profiles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'candidate_header' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pw_dialogue_questions_block' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'candidate_full_name' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'candidate_social_links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'candidate_stats_questions_get' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'candidate_tab_navigation' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'field_user_birthday' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_commitee' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_constituency' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_fname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_fraction' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_job_skills' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_list' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_user_list_position' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => '. Liste verdi, Platz ',
          'lb-el' => 'span',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_user_lname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_picture' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'candidate-detail-image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_picture_copyright' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'figcaption',
          'ow-cl' => 'text-right small',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_user_political_roles' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_verdi_fields' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_verdi_regions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'dt',
          'lb-col' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'dd',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_user_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'blockquote',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|user_slider_item';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'user_slider_item';
  $ds_fieldsetting->settings = array(
    'button_candidate' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'candidate_sl_stats_questions_get' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'candidate_full_name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'field_delimiter' => '',
      ),
    ),
    'field_user_list' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_user_list_position' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => ', Liste ver.di ',
          'lb-el' => 'span',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_user_picture' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'circle-image',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['user|user|user_slider_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_profiles_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'button_candidate';
  $ds_field->label = 'Button Candidate';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[user:url] " class="btn btn-primary" title="Hier erfahren Sie mehr über den Kandidaten [user:field_user_fname] [user:field_user_lname]">Zum Kandidaten</a>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['button_candidate'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'candidate_full_name';
  $ds_field->label = 'Full Name';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '[user:field_user_fname] [user:field_user_lname]',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['candidate_full_name'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'candidate_sl_stats_questions_get';
  $ds_field->label = 'Candidate Slider Stats';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="candidate-teaser-item-stats">
    <div class="row">
        <div class="col-xs-5 candidate-teaser-item-stats-count clearfix">
            <span class="value">[user:field_user_questions_get]</span>
            <span class="label">Fragen</span>
        </div>
        <div class="col-xs-7 candidate-teaser-item-stats-countasked">
            <div class="gauge-widget">
                <canvas class="gauge" width="45" height="45"></canvas>
                <div class="gauge-value" data-gauge-value="[user:field_user_answers_give]">[user:field_user_answers_give]%</div>
            </div>
            <span class="label">Beantwortet</span>
        </div>
    </div>
</div>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['candidate_sl_stats_questions_get'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'candidate_social_links';
  $ds_field->label = 'Social-Links';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><strong>Erfahren Sie mehr auf den sozialen Profilen des Kandierenden</strong></p>',
      'format' => 'php_code',
    ),
    'use_token' => 0,
  );
  $export['candidate_social_links'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'candidate_stats_questions_get';
  $ds_field->label = 'Candidate Stats';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $user = _pw_get_current_user();
  $stats = db_select(\'user_archive_cache\', \'uac\')
    ->fields(\'uac\', array(\'number_of_questions\', \'number_of_answers\'))
    ->condition(\'uid\', $user->uid)
    ->condition(\'vid\', $user->vid)
    ->execute()
    ->fetchAssoc();

if($stats[\'number_of_questions\'] == 0){
  $stats[\'percent_answered\'] = 0;
}
else{
  $stats[\'percent_answered\'] = round($stats[\'number_of_answers\'] / $stats[\'number_of_questions\'] * 100);
}
?>

<div class="candidate-detail-stats clearfix">
    <?php if($stats[\'number_of_questions\'] > 0): ?>
      <div class="pull-left candidate-detail-stats-count clearfix">
          <span class="value"><?php print $stats[\'number_of_questions\']; ?></span>
          <span class="label">Fragen</span>
      </div>
      <div class="pull-left candidate-detail-stats-countasked">
          <div class="gauge-widget">
              <canvas class="gauge" width="60" height="60"></canvas>
              <div class="gauge-value" data-gauge-value="<?php print $stats[\'percent_answered\']; ?>"><?php print $stats[\'percent_answered\']; ?>%</div>
          </div>
          <span class="label">beantwortet</span>
      </div>
      <?php else: ?>
        <div>Stelle die erste Frage an <?php print $user->field_user_gender[LANGUAGE_NONE][0][\'value\'] == \'female\'?\'die Kandidatin\':\'den Kandidaten\'; ?></div>
      <?php endif; ?>
</div>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['candidate_stats_questions_get'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'candidate_tab_navigation';
  $ds_field->label = 'Candidate Tab-Navigation';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<ul class="nav nav-tabs" role="tablist">
  <li role="presentation" class="active"><a href="#tab-questions-answers" aria-controls="questions-answers" role="tab" data-toggle="tab" aria-expanded="true">Fragen &amp; Antworten</a></li>
  <li role="presentation" class=""><a href="#tab-personal-description" aria-controls="personal-description" role="tab" data-toggle="tab" aria-expanded="false">Steckbrief</a></li>
</ul>
<a href="/node/8?recipient=[user:name]" class="btn btn-primary btn-lg colorbox-node">Jetzt Frage stellen</a>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['candidate_tab_navigation'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_profiles_ds_layout_settings_info() {
  $export = array();

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
        0 => 'candidate_header',
        1 => 'candidate_full_name',
        2 => 'candidate_social_links',
        3 => 'group_user_name',
        4 => 'twitter',
        5 => 'group_candidate_intro',
        6 => 'candidate_tab_navigation',
        7 => 'group_candidate_intro_info',
        8 => 'group_candidate_tabs',
        9 => 'group_candidate_tabs_wrapper',
        10 => 'field_user_twitter_account',
        11 => 'field_user_quote',
        12 => 'field_user_list',
        13 => 'field_user_picture',
        14 => 'candidate_stats_questions_get',
        15 => 'field_user_picture_copyright',
        16 => 'field_user_list_position',
        17 => 'field_user_title',
        18 => 'group_candidate_tabs_info_row',
        19 => 'field_user_fname',
        20 => 'pw_dialogue_questions_block',
        21 => 'field_user_lname',
        22 => 'group_candidate_info_list',
        23 => 'field_user_birthday',
        24 => 'group_candidate_info_sidebar',
        25 => 'field_user_job_skills',
        26 => 'field_user_fraction',
        27 => 'field_verdi_fields',
        28 => 'field_verdi_regions',
        29 => 'field_user_commitee',
        30 => 'field_user_political_roles',
        31 => 'group_candidate_tabs_questions',
        32 => 'field_user_constituency',
        33 => 'group_candidate_tabs_info',
        34 => 'group_candidate_intro_row',
        35 => 'group_candidate_intro_right',
        36 => 'group_candidate_intro_left',
      ),
    ),
    'fields' => array(
      'candidate_header' => 'ds_content',
      'candidate_full_name' => 'ds_content',
      'candidate_social_links' => 'ds_content',
      'group_user_name' => 'ds_content',
      'twitter' => 'ds_content',
      'group_candidate_intro' => 'ds_content',
      'candidate_tab_navigation' => 'ds_content',
      'group_candidate_intro_info' => 'ds_content',
      'group_candidate_tabs' => 'ds_content',
      'group_candidate_tabs_wrapper' => 'ds_content',
      'field_user_twitter_account' => 'ds_content',
      'field_user_quote' => 'ds_content',
      'field_user_list' => 'ds_content',
      'field_user_picture' => 'ds_content',
      'candidate_stats_questions_get' => 'ds_content',
      'field_user_picture_copyright' => 'ds_content',
      'field_user_list_position' => 'ds_content',
      'field_user_title' => 'ds_content',
      'group_candidate_tabs_info_row' => 'ds_content',
      'field_user_fname' => 'ds_content',
      'pw_dialogue_questions_block' => 'ds_content',
      'field_user_lname' => 'ds_content',
      'group_candidate_info_list' => 'ds_content',
      'field_user_birthday' => 'ds_content',
      'group_candidate_info_sidebar' => 'ds_content',
      'field_user_job_skills' => 'ds_content',
      'field_user_fraction' => 'ds_content',
      'field_verdi_fields' => 'ds_content',
      'field_verdi_regions' => 'ds_content',
      'field_user_commitee' => 'ds_content',
      'field_user_political_roles' => 'ds_content',
      'group_candidate_tabs_questions' => 'ds_content',
      'field_user_constituency' => 'ds_content',
      'group_candidate_tabs_info' => 'ds_content',
      'group_candidate_intro_row' => 'ds_content',
      'group_candidate_intro_right' => 'ds_content',
      'group_candidate_intro_left' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|user_slider_item';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'user_slider_item';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_user_picture',
        1 => 'candidate_full_name',
        2 => 'group_candidate_slider_info',
        3 => 'candidate_sl_stats_questions_get',
        4 => 'button_candidate',
        5 => 'field_user_list',
        6 => 'field_user_list_position',
      ),
    ),
    'fields' => array(
      'field_user_picture' => 'ds_content',
      'candidate_full_name' => 'ds_content',
      'group_candidate_slider_info' => 'ds_content',
      'candidate_sl_stats_questions_get' => 'ds_content',
      'button_candidate' => 'ds_content',
      'field_user_list' => 'ds_content',
      'field_user_list_position' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|user_slider_item'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pw_profiles_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_slider_item';
  $ds_view_mode->label = 'User Slider-Item';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_slider_item'] = $ds_view_mode;

  return $export;
}
