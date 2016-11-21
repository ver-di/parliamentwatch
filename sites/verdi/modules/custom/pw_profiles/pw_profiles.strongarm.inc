<?php
/**
 * @file
 * pw_profiles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_profiles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings';
  $strongarm->value = '';
  $export['field_bundle_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'user_search' => array(
        'custom_settings' => TRUE,
      ),
      'user_premium' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'user_deputy' => array(
        'custom_settings' => TRUE,
      ),
      'premium_user' => array(
        'custom_settings' => FALSE,
      ),
      'user_candidate' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'user_dialogue_search_snippet' => array(
        'custom_settings' => TRUE,
      ),
      'user_slider_item' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'ckeditor' => array(
          'weight' => '12',
        ),
        'piwik' => array(
          'weight' => '16',
        ),
        'redirect' => array(
          'weight' => '15',
        ),
        'account' => array(
          'weight' => '6',
        ),
        'timezone' => array(
          'weight' => '14',
        ),
        'locale' => array(
          'weight' => '13',
        ),
        'overlay_control' => array(
          'weight' => '0',
        ),
        'mimemail' => array(
          'weight' => '7',
        ),
        'xmlsitemap' => array(
          'weight' => '20',
        ),
        'masquerade' => array(
          'weight' => '17',
        ),
        'metatags' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(
        'summary' => array(
          'default' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'user_premium' => array(
            'weight' => '69',
            'visible' => FALSE,
          ),
          'user_deputy' => array(
            'weight' => '67',
            'visible' => FALSE,
          ),
          'user_candidate' => array(
            'weight' => '69',
            'visible' => FALSE,
          ),
          'user_search' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
          'user_dialogue_search_snippet' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '18',
            'visible' => FALSE,
          ),
          'user_slider_item' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
        ),
        'mimemail' => array(
          'user_premium' => array(
            'weight' => '49',
            'visible' => FALSE,
          ),
          'user_deputy' => array(
            'weight' => '51',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'user_dialogue_search_snippet' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'user_candidate' => array(
            'weight' => '49',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'user_slider_item' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'masquerade' => array(
          'user_deputy' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'user_candidate' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
          'user_premium' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
          'user_dialogue_search_snippet' => array(
            'weight' => '50',
            'visible' => FALSE,
          ),
          'full' => NULL,
          'user_slider_item' => NULL,
        ),
        'twitter' => array(
          'user_candidate' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'user_deputy' => array(
            'weight' => '42',
            'visible' => FALSE,
          ),
          'user_premium' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
          'user_dialogue_search_snippet' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'user_slider_item' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_calendar_entry';
  $strongarm->value = '0';
  $export['language_content_type_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_calendar_entry';
  $strongarm->value = array();
  $export['menu_options_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_calendar_entry';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_calendar_entry';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_calendar_entry';
  $strongarm->value = 0;
  $export['node_submitted_calendar_entry'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_calendar_entry_pattern';
  $strongarm->value = '';
  $export['pathauto_node_calendar_entry_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_list_position_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_list_position_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pw_profile_roles_for_view_mode_switch_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_pw_profile_roles_for_view_mode_switch_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_verdi_fields_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_verdi_fields_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_verdi_regions_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_verdi_regions_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'profil/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pw_profileswitch_assignment';
  $strongarm->value = array(
    7030 => 'user_premium',
    7029 => 'user_candidate',
    7028 => 'user_deputy',
  );
  $export['pw_profileswitch_assignment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pw_profileswitch_display_mode1';
  $strongarm->value = 'user_premium';
  $export['pw_profileswitch_display_mode1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pw_profileswitch_display_mode2';
  $strongarm->value = 'user_candidate';
  $export['pw_profileswitch_display_mode2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pw_profileswitch_display_mode3';
  $strongarm->value = 'user_deputy';
  $export['pw_profileswitch_display_mode3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pw_profileswitch_display_mode4';
  $strongarm->value = '';
  $export['pw_profileswitch_display_mode4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pw_profileswitch_role1';
  $strongarm->value = '7030';
  $export['pw_profileswitch_role1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pw_profileswitch_role2';
  $strongarm->value = '7029';
  $export['pw_profileswitch_role2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pw_profileswitch_role3';
  $strongarm->value = '7028';
  $export['pw_profileswitch_role3'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pw_profileswitch_role4';
  $strongarm->value = '';
  $export['pw_profileswitch_role4'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 0;
  $export['user_pictures'] = $strongarm;

  return $export;
}
