<?php
/**
 * @file
 * pw_calendar_entries.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_calendar_entries_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_calendar_entries';
  $view->description = 'Political Roles, Sidejobs and Speeches Displays for User Profiles';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PW Calendar Entries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Politische Funktionen von ';
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Inhalt: Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Inhalt: Datum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Political Roles */
  $handler = $view->new_display('block', 'Political Roles', 'political_roles');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Politische Funktionen von [php] ';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_valid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_valid' => 'field_valid',
    'fieldset' => 'fieldset',
    'field_political_role' => 'field_political_role',
    'field_committee' => 'field_committee',
    'field_parliament' => 'field_parliament',
    'nid' => 'nid',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_valid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fieldset' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_political_role' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parliament' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="ic-info"><div class="info-title"></div><div class="info-content element-hidden">Politische Funktionen in der Legislaturperiode</div></div>
<div id="political-roles" class="add-sharethis" title="<?php print t(\'Politcial Roles of \'); ?> [php]"></div>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['relationships']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['relationships']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Exluded | Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['ui_name'] = 'Exluded | Date';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Excluded | Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['ui_name'] = 'Excluded | Committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['text'] = '[field_committee],';
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Feld: Excluded | Organization */
  $handler->display->display_options['fields']['field_sidejob_organization']['id'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['table'] = 'field_data_field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['field'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['ui_name'] = 'Excluded | Organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['text'] = '[field_sidejob_organization], ';
  $handler->display->display_options['fields']['field_sidejob_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_organization']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | Job */
  $handler->display->display_options['fields']['field_job']['id'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['table'] = 'field_data_field_job';
  $handler->display->display_options['fields']['field_job']['field'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['ui_name'] = 'Excluded | Job';
  $handler->display->display_options['fields']['field_job']['label'] = '';
  $handler->display->display_options['fields']['field_job']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['text'] = '[field_job],  ';
  $handler->display->display_options['fields']['field_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_job']['settings'] = array(
    'linked' => 0,
  );
  /* Feld: Excluded | Address */
  $handler->display->display_options['fields']['field_sidejob_address']['id'] = 'field_sidejob_address';
  $handler->display->display_options['fields']['field_sidejob_address']['table'] = 'field_data_field_sidejob_address';
  $handler->display->display_options['fields']['field_sidejob_address']['field'] = 'field_sidejob_address';
  $handler->display->display_options['fields']['field_sidejob_address']['ui_name'] = 'Excluded | Address';
  $handler->display->display_options['fields']['field_sidejob_address']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_sidejob_address']['type'] = 'addressfield_state';
  $handler->display->display_options['fields']['field_sidejob_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Feld: Excluded | Parliament */
  $handler->display->display_options['fields']['field_parliament']['id'] = 'field_parliament';
  $handler->display->display_options['fields']['field_parliament']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['fields']['field_parliament']['field'] = 'field_parliament';
  $handler->display->display_options['fields']['field_parliament']['ui_name'] = 'Excluded | Parliament';
  $handler->display->display_options['fields']['field_parliament']['label'] = '';
  $handler->display->display_options['fields']['field_parliament']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parliament']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parliament']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Excluded | NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Feld: Excluded | PHP | FName + LName */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP | FName + LName';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$user = _pw_get_current_user();
$fname =  $user->field_user_fname[\'und\'][0][\'value\'];
$lname =  $user->field_user_lname[\'und\'][0][\'value\'];
echo $fname." ".$lname;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Rewritten Output */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Rewritten Output';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_committee] [field_sidejob_organization] [field_job] [field_sidejob_address] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_membership' => 'committee_membership',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$parliament_tag = $row->field_parliament;
$user_parliament_tag = _pw_get_current_parliament_term();
$user_parliament_tid = $user_parliament_tag->tid;
$nid = $row->nid;
$node_parliament_tid = _pw_get_parliament_term_tid_by_nid($nid);

if($node_parliament_tid == $user_parliament_tid)
{
  return FALSE;
}
else return TRUE;
';
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'sidejob' => 'sidejob',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php_1']['id'] = 'php_1';
  $handler->display->display_options['filters']['php_1']['table'] = 'views';
  $handler->display->display_options['filters']['php_1']['field'] = 'php';
  $handler->display->display_options['filters']['php_1']['group'] = 2;
  $handler->display->display_options['filters']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php_1']['php_filter'] = '$parliament_tag = $row->field_parliament;
$user_parliament_tag = _pw_get_current_parliament_term();
$nid = $row->nid;
$node_parliament_tid = _pw_get_parliament_term_tid_by_nid($nid);
$user_parliament_tid = $user_parliament_tag->tid;

if($node_parliament_tid == $user_parliament_tid)
{
  return FALSE;
}
else return TRUE;
';
  /* Filter criterion: Inhalt: Sectors (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['value'] = array(
    17077 => '17077',
  );
  $handler->display->display_options['filters']['field_sectors_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sectors_tid']['vocabulary'] = 'sidejob_sectors';

  /* Display: Sidejobs */
  $handler = $view->new_display('block', 'Sidejobs', 'sidejobs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nebentätigkeiten und Ehrenamtliche Tätigkeiten von [php]';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_valid' => 'field_valid',
    'field_political_role' => 'field_political_role',
    'field_sidejob_sector' => 'field_sidejob_sector',
    'field_sidejob_classification' => 'field_sidejob_classification',
    'field_sidejob_income_interval' => 'field_sidejob_income_interval',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_valid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_political_role' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sidejob_sector' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sidejob_classification' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sidejob_income_interval' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<div class="print"></div>
<div class="ic-info"><div class="info-title"></div><div class="info-content element-hidden"><?php print t(\'Nebeneinkünfte in der Legislaturperiode \'); ?></div></div>
<div id="sidejobs" class="add-sharethis" title="<?php print t(\'Sidejobs of \'); ?> [php]"></div>';
  $handler->display->display_options['header']['area_1']['format'] = 'managed_content';
  $handler->display->display_options['header']['area_1']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['relationships']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['relationships']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | Job */
  $handler->display->display_options['fields']['field_job']['id'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['table'] = 'field_data_field_job';
  $handler->display->display_options['fields']['field_job']['field'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['ui_name'] = 'Excluded | Job';
  $handler->display->display_options['fields']['field_job']['label'] = '';
  $handler->display->display_options['fields']['field_job']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['text'] = '[field_job], ';
  $handler->display->display_options['fields']['field_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | Organisation */
  $handler->display->display_options['fields']['field_sidejob_organization']['id'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['table'] = 'field_data_field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['field'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['ui_name'] = 'Excluded | Organisation';
  $handler->display->display_options['fields']['field_sidejob_organization']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['text'] = '[field_sidejob_organization],';
  $handler->display->display_options['fields']['field_sidejob_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_organization']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | Income Amount */
  $handler->display->display_options['fields']['field_sidejob_income_amount']['id'] = 'field_sidejob_income_amount';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['table'] = 'field_data_field_sidejob_income_amount';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['field'] = 'field_sidejob_income_amount';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['ui_name'] = 'Excluded | Income Amount';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_amount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_amount']['alter']['text'] = '[field_sidejob_income_amount] €';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_income_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Feld: Excluded | Income Amount Max */
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['id'] = 'field_sidejob_income_amount_max';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['table'] = 'field_data_field_sidejob_income_amount_max';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['field'] = 'field_sidejob_income_amount_max';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['ui_name'] = 'Excluded | Income Amount Max';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['alter']['text'] = ' - [field_sidejob_income_amount_max] €,';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Feld: Excluded | Income Interval */
  $handler->display->display_options['fields']['field_sidejob_income_interval']['id'] = 'field_sidejob_income_interval';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['table'] = 'field_data_field_sidejob_income_interval';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['field'] = 'field_sidejob_income_interval';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['ui_name'] = 'Excluded | Income Interval';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_interval']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_income_interval']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Feld: Rewritten Output */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Rewritten Output';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_job] [field_sidejob_organization] Verdienst: [field_sidejob_income_amount][field_sidejob_income_amount_max] [field_sidejob_income_interval] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Feld: Excluded | PHP | FName + LName */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP | FName + LName';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$user = _pw_get_current_user();
$fname =  $user->field_user_fname[\'und\'][0][\'value\'];
$lname =  $user->field_user_lname[\'und\'][0][\'value\'];
echo $fname." ".$lname;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['fail'] = 'empty';
  /* Contextual filter: Feld: Parliament (field_parliament) */
  $handler->display->display_options['arguments']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['arguments']['field_parliament_tid']['field'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_argument_options']['code'] = '$current_parliament_term = _pw_get_current_parliament_term();
$tid = $current_parliament_term->tid;
return $tid;';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_parliament_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_parliament_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_parliament_tid']['validate_options']['vocabularies'] = array(
    'parliaments' => 'parliaments',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sidejob' => 'sidejob',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Inhalt: Job (field_job) */
  $handler->display->display_options['filters']['field_job_tid']['id'] = 'field_job_tid';
  $handler->display->display_options['filters']['field_job_tid']['table'] = 'field_data_field_job';
  $handler->display->display_options['filters']['field_job_tid']['field'] = 'field_job_tid';
  $handler->display->display_options['filters']['field_job_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_job_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_job_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_job_tid']['vocabulary'] = 'sidejob_jobs';
  /* Filter criterion: Inhalt: Sectors (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_sectors_tid']['value'] = array(
    17077 => '17077',
  );
  $handler->display->display_options['filters']['field_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sectors_tid']['vocabulary'] = 'sidejob_sectors';

  /* Display: Speeches */
  $handler = $view->new_display('block', 'Speeches', 'speeches');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gehaltene Reden von [php]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'zebra clearfix';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_valid' => 'field_valid',
    'title' => 'title',
    'field_duration' => 'field_duration',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_valid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_duration' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="print"></div>
<div class="ic-info"><div class="info-title"></div><div class="info-content element-hidden"><?php print t(\'Gehaltene Reden in der Legislaturperiode \'); ?></div></div>
<div id="speeches" class="add-sharethis" title="<?php print t(\'Speeches of \'); ?> [php]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['relationships']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['relationships']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Feld: Inhalt: Duration */
  $handler->display->display_options['fields']['field_duration']['id'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['table'] = 'field_data_field_duration';
  $handler->display->display_options['fields']['field_duration']['field'] = 'field_duration';
  $handler->display->display_options['fields']['field_duration']['label'] = '';
  $handler->display->display_options['fields']['field_duration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_duration']['settings'] = array(
    'format' => 'h:mm:ss',
    'leading_zero' => 1,
  );
  /* Feld: Excluded | PHP | FName + LName */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP | FName + LName';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$user = _pw_get_current_user();
$fname =  $user->field_user_fname[\'und\'][0][\'value\'];
$lname =  $user->field_user_lname[\'und\'][0][\'value\'];
echo $fname." ".$lname;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  /* Contextual filter: Feld: Parliament (field_parliament) */
  $handler->display->display_options['arguments']['field_parliament_tid']['id'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['arguments']['field_parliament_tid']['field'] = 'field_parliament_tid';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parliament_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_parliament_tid']['default_argument_options']['code'] = '$current_parliament_term = _pw_get_current_parliament_term();
$tid = $current_parliament_term->tid;
return $tid;';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parliament_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'speech' => 'speech',
  );
  /* Filter criterion: Inhalt: Titel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';

  /* Display: Political Roles Page */
  $handler = $view->new_display('page_with_page_title', 'Political Roles Page', 'political_roles_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Politische Funktionen von [php]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix zebra';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_valid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_valid' => 'field_valid',
    'field_committee' => 'field_committee',
    'field_sidejob_organization' => 'field_sidejob_organization',
    'field_job' => 'field_job',
    'field_sidejob_address' => 'field_sidejob_address',
    'nid' => 'nid',
    'field_parliament' => 'field_parliament',
    'php' => 'php',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_valid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sidejob_organization' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_job' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sidejob_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parliament' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="add-sharethis" title="<?php print t(\'Political Roles of\'); ?> [field_user_fname-revision_id]  [field_user_lname-revision_id], [field_user_party-revision_id]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  /* Kopfbereich: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'pw_user_profile_fields_rev:short_profile_premium_sub';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="link-profile">[nothing]</p>';
  $handler->display->display_options['footer']['area']['format'] = 'managed_content';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['relationships']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['relationships']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | User:Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_politician_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | User:Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Excluded | PHP | VID */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Excluded | PHP | VID';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$vid = arg(3);
if(isset($vid))echo $vid;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Feld: Excluded | Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['ui_name'] = 'Excluded | Date';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Excluded | Committee */
  $handler->display->display_options['fields']['field_committee']['id'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['table'] = 'field_data_field_committee';
  $handler->display->display_options['fields']['field_committee']['field'] = 'field_committee';
  $handler->display->display_options['fields']['field_committee']['ui_name'] = 'Excluded | Committee';
  $handler->display->display_options['fields']['field_committee']['label'] = '';
  $handler->display->display_options['fields']['field_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_committee']['alter']['text'] = '[field_committee], ';
  $handler->display->display_options['fields']['field_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | Organization */
  $handler->display->display_options['fields']['field_sidejob_organization']['id'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['table'] = 'field_data_field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['field'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['ui_name'] = 'Excluded | Organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['text'] = '[field_sidejob_organization], ';
  $handler->display->display_options['fields']['field_sidejob_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_organization']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | Job */
  $handler->display->display_options['fields']['field_job']['id'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['table'] = 'field_data_field_job';
  $handler->display->display_options['fields']['field_job']['field'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['ui_name'] = 'Excluded | Job';
  $handler->display->display_options['fields']['field_job']['label'] = '';
  $handler->display->display_options['fields']['field_job']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['text'] = '[field_job], ';
  $handler->display->display_options['fields']['field_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | Address */
  $handler->display->display_options['fields']['field_sidejob_address']['id'] = 'field_sidejob_address';
  $handler->display->display_options['fields']['field_sidejob_address']['table'] = 'field_data_field_sidejob_address';
  $handler->display->display_options['fields']['field_sidejob_address']['field'] = 'field_sidejob_address';
  $handler->display->display_options['fields']['field_sidejob_address']['ui_name'] = 'Excluded | Address';
  $handler->display->display_options['fields']['field_sidejob_address']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_sidejob_address']['type'] = 'addressfield_state';
  $handler->display->display_options['fields']['field_sidejob_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Feld: Rewritten Output */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Rewritten Output';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_committee] [field_sidejob_organization] [field_job] [field_sidejob_address]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Excluded | NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Feld: Excluded | Parliament */
  $handler->display->display_options['fields']['field_parliament']['id'] = 'field_parliament';
  $handler->display->display_options['fields']['field_parliament']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['fields']['field_parliament']['field'] = 'field_parliament';
  $handler->display->display_options['fields']['field_parliament']['ui_name'] = 'Excluded | Parliament';
  $handler->display->display_options['fields']['field_parliament']['label'] = '';
  $handler->display->display_options['fields']['field_parliament']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parliament']['element_label_colon'] = FALSE;
  /* Feld: Excluded | PHP | FName + LName */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP | FName + LName';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$user = _pw_get_current_user();

$fname =  $user->field_user_fname[\'und\'][0][\'value\'];
$lname =  $user->field_user_lname[\'und\'][0][\'value\'];

echo $fname." ".$lname;


?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Excluded | Full profile link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Excluded | Full profile link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'zum vollständigen Profil';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'profile/[name]/archive/[php_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_membership' => 'committee_membership',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$parliament_tag = $row->field_parliament;
$user_parliament_tag = _pw_get_current_parliament_term();
$nid = $row->nid;
$node_parliament_tid = _pw_get_parliament_term_tid_by_nid($nid);
$user_parliament_tid = $user_parliament_tag->tid;

if($node_parliament_tid == $user_parliament_tid)
{
  return FALSE;
}
else return TRUE;
';
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'sidejob' => 'sidejob',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Inhalt: Sectors (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['value'] = array(
    17077 => '17077',
  );
  $handler->display->display_options['filters']['field_sectors_tid']['group'] = 2;
  $handler->display->display_options['filters']['field_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sectors_tid']['vocabulary'] = 'sidejob_sectors';
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php_1']['id'] = 'php_1';
  $handler->display->display_options['filters']['php_1']['table'] = 'views';
  $handler->display->display_options['filters']['php_1']['field'] = 'php';
  $handler->display->display_options['filters']['php_1']['group'] = 2;
  $handler->display->display_options['filters']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php_1']['php_filter'] = '$parliament_tag = $row->field_parliament;
$user_parliament_tag = _pw_get_current_parliament_term();
$nid = $row->nid;
$node_parliament_tid = _pw_get_parliament_term_tid_by_nid($nid);
$user_parliament_tid = $user_parliament_tag->tid;

if ($node_parliament_tid == $user_parliament_tid) return FALSE;
else return TRUE;
';
  $handler->display->display_options['path'] = 'profile/%/archive/%/political-roles';

  /* Display: Sidejobs Page */
  $handler = $view->new_display('page_with_page_title', 'Sidejobs Page', 'sidejobs_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nebentätigkeiten und Ehrenamtliche Tätigkeiten von [php]';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'pw_user_profile_fields_rev:short_profile_premium_sub';
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="add-sharethis" title="<?php print t(\'Sidejobs of\'); ?> [php]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="link-profile">[nothing]</p>';
  $handler->display->display_options['footer']['area']['format'] = 'managed_content';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['relationships']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['relationships']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | User Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_politician_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | User Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Feld: Excluded | PHP | VID */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Excluded | PHP | VID';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$vid = arg(3);
if(isset($vid))echo $vid;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Feld: Excluded | Job */
  $handler->display->display_options['fields']['field_job']['id'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['table'] = 'field_data_field_job';
  $handler->display->display_options['fields']['field_job']['field'] = 'field_job';
  $handler->display->display_options['fields']['field_job']['ui_name'] = 'Excluded | Job';
  $handler->display->display_options['fields']['field_job']['label'] = '';
  $handler->display->display_options['fields']['field_job']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job']['alter']['text'] = '[field_job],';
  $handler->display->display_options['fields']['field_job']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_job']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | Organisation */
  $handler->display->display_options['fields']['field_sidejob_organization']['id'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['table'] = 'field_data_field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['field'] = 'field_sidejob_organization';
  $handler->display->display_options['fields']['field_sidejob_organization']['ui_name'] = 'Excluded | Organisation';
  $handler->display->display_options['fields']['field_sidejob_organization']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['alter']['text'] = '[field_sidejob_organization], ';
  $handler->display->display_options['fields']['field_sidejob_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_organization']['type'] = 'taxonomy_term_reference_plain';
  /* Feld: Excluded | Income Amount */
  $handler->display->display_options['fields']['field_sidejob_income_amount']['id'] = 'field_sidejob_income_amount';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['table'] = 'field_data_field_sidejob_income_amount';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['field'] = 'field_sidejob_income_amount';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['ui_name'] = 'Excluded | Income Amount';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_amount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_amount']['alter']['text'] = '[field_sidejob_income_amount] €';
  $handler->display->display_options['fields']['field_sidejob_income_amount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_income_amount']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Feld: Excluded | Income Amount Max */
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['id'] = 'field_sidejob_income_amount_max';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['table'] = 'field_data_field_sidejob_income_amount_max';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['field'] = 'field_sidejob_income_amount_max';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['ui_name'] = 'Excluded | Income Amount Max';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['alter']['text'] = '- [field_sidejob_income_amount_max] €';
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_income_amount_max']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Feld: Excluded | Interval */
  $handler->display->display_options['fields']['field_sidejob_income_interval']['id'] = 'field_sidejob_income_interval';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['table'] = 'field_data_field_sidejob_income_interval';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['field'] = 'field_sidejob_income_interval';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['ui_name'] = 'Excluded | Interval';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['label'] = '';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_interval']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_interval']['alter']['text'] = ', [field_sidejob_income_interval]';
  $handler->display->display_options['fields']['field_sidejob_income_interval']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidejob_income_interval']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sidejob_income_interval']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Feld: Excluded | NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Excluded | NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Feld: Excluded | PHP | FName + LName */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP | FName + LName';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$user = _pw_get_current_user();

$fname =  $user->field_user_fname[\'und\'][0][\'value\'];
$lname =  $user->field_user_lname[\'und\'][0][\'value\'];

echo $fname." ".$lname;


?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Excluded | Full profile link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Excluded | Full profile link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'zum vollständigen Profil';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'profile/[name]/archive/[php_1] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Feld: Rewritten Output */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Rewritten Output';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_job] [field_sidejob_organization] Verdienst: [field_sidejob_income_amount] [field_sidejob_income_amount_max][field_sidejob_income_interval]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sidejob' => 'sidejob',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$parliament_tag = $row->field_parliament;
$user_parliament_tag = _pw_get_current_parliament_term();
$nid = $row->nid;
$node_parliament_tid = _pw_get_parliament_term_tid_by_nid($nid);
$user_parliament_tid = $user_parliament_tag->tid;

if($node_parliament_tid == $user_parliament_tid)
{
  return FALSE;
}
else return TRUE;';
  /* Filter criterion: Inhalt: Sectors (field_sectors) */
  $handler->display->display_options['filters']['field_sectors_tid']['id'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['table'] = 'field_data_field_sectors';
  $handler->display->display_options['filters']['field_sectors_tid']['field'] = 'field_sectors_tid';
  $handler->display->display_options['filters']['field_sectors_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_sectors_tid']['value'] = array(
    17077 => '17077',
  );
  $handler->display->display_options['filters']['field_sectors_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_sectors_tid']['vocabulary'] = 'sidejob_sectors';
  $handler->display->display_options['path'] = 'profile/%/archive/%/sidejobs';

  /* Display: Speeches Page */
  $handler = $view->new_display('page_with_page_title', 'Speeches Page', 'speeches_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gehaltene Reden von [php]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_valid' => 'field_valid',
    'title' => 'title',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_valid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'pw_user_profile_fields_rev:short_profile_premium_sub';
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="print"></div>
<div class="ic-info"><div class="info-title"></div><div class="info-content element-hidden"><?php print t(\'Gehaltene Reden in der Legislaturperiode \'); ?></div></div>
<div class="add-sharethis" title="<?php print t(\'Speeches of\'); ?> [php]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="link-profile">[nothing]</p>';
  $handler->display->display_options['footer']['area']['format'] = 'managed_content';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['relationships']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['relationships']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | PHP | VID */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'Excluded | PHP | VID';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$vid = arg(3);
if(isset($vid))echo $vid;
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Feld: Excluded | User Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_politician_target_id';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | User Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Feld: Excluded | NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Excluded | NID';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Feld: Inhalt: Date */
  $handler->display->display_options['fields']['field_valid']['id'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['table'] = 'field_data_field_valid';
  $handler->display->display_options['fields']['field_valid']['field'] = 'field_valid';
  $handler->display->display_options['fields']['field_valid']['label'] = '';
  $handler->display->display_options['fields']['field_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_valid']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Feld: Feld: Parliament */
  $handler->display->display_options['fields']['field_parliament']['id'] = 'field_parliament';
  $handler->display->display_options['fields']['field_parliament']['table'] = 'field_data_field_parliament';
  $handler->display->display_options['fields']['field_parliament']['field'] = 'field_parliament';
  $handler->display->display_options['fields']['field_parliament']['label'] = '';
  $handler->display->display_options['fields']['field_parliament']['element_label_colon'] = FALSE;
  /* Feld: Excluded | PHP | FName + LName */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP | FName + LName';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$user = _pw_get_current_user();
$fname =  $user->field_user_fname[\'und\'][0][\'value\'];
$lname =  $user->field_user_lname[\'und\'][0][\'value\'];
echo $fname." ".$lname;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Excluded | Full profile link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Excluded | Full profile link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'zum vollständigen Profil';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'profile/[name]/archive/[php_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Inhalt: Politician (field_politician) */
  $handler->display->display_options['arguments']['field_politician_target_id']['id'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['table'] = 'field_data_field_politician';
  $handler->display->display_options['arguments']['field_politician_target_id']['field'] = 'field_politician_target_id';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_politician_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_politician_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_politician_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_politician_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_politician_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_politician_target_id']['validate_options']['type'] = 'either';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'speech' => 'speech',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$parliament_tag = $row->field_parliament;
$user_parliament_tag = _pw_get_current_parliament_term();

$nid = $row->nid;
$node_parliament_tid = _pw_get_parliament_term_tid_by_nid($nid);
firep($node_parliament_tid, "Node TID");
$user_parliament_tid = $user_parliament_tag->tid;
firep($user_parliament_tid,"User TID");
if($node_parliament_tid == $user_parliament_tid) {
  return FALSE;
}
else return TRUE;';
  $handler->display->display_options['path'] = 'profile/%/archive/%/speeches';
  $export['pw_calendar_entries'] = $view;

  return $export;
}
