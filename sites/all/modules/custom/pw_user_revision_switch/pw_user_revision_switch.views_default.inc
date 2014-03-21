<?php
/**
 * @file
 * pw_user_revision_switch.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_user_revision_switch_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_user_profile_fields_rev';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'user_revision';
  $view->human_name = 'PW User Profile Fields Rev';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'relative';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Name, Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Name, Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Benutzer: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Feld: Benutzer (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Contextual filter: User revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = '$cpath = explode(\'/\',current_path());
$path_uid = $cpath[1];
if (array_key_exists(3, $cpath))
{
  $path_vid  =  $cpath[3];
  return $path_vid;
}
else{
$result =db_query("SELECT vid FROM {user_revision} u WHERE uid = (:uids) ORDER BY vid DESC LIMIT 0,1", array(\':uids\' => $path_uid))->fetchField();
return $result;
}
';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';

  /* Display: Headline */
  $handler = $view->new_display('block', 'Headline', 'headline');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<div id="" class="add-sharethis" title="[field_user_party-revision_id]"></div>';
  $handler->display->display_options['footer']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Name, Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Name, Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';

  /* Display: Profile Picture */
  $handler = $view->new_display('block', 'Profile Picture', 'profile_picture');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Profile picture (field_user_picture:fid) */
  $handler->display->display_options['relationships']['field_user_picture_fid']['id'] = 'field_user_picture_fid';
  $handler->display->display_options['relationships']['field_user_picture_fid']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['relationships']['field_user_picture_fid']['field'] = 'field_user_picture_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | Profile Picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['ui_name'] = 'Excluded | Profile Picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_m',
  );
  /* Feld: Exlcuded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Exlcuded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Profile Picture PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Profile Picture PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$profiluser = $myuser = user_load($row->uid);
$profiluserroles = $profiluser->roles;
if(in_array("Premium User",$profiluserroles)) {
print theme(\'image_style\', array(\'path\' => $data->field_field_user_picture[0][\'raw\'][\'uri\'], \'style_name\' => \'pw_portrait_l\'));
print "<div class=\\"copyright\\">".$data->field_field_user_picture[0][\'raw\'][\'field_image_copyright\'][\'und\'][0][\'value\']."</div>";
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Parliament Info */
  $handler = $view->new_display('block', 'Parliament Info', 'parlliament_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Parliament Info';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | Parliament Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | Parliament Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Valid til */
  $handler->display->display_options['fields']['field_parliament_valid']['id'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['table'] = 'field_data_field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['field'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['field_parliament_valid']['ui_name'] = 'Excluded | Valid til';
  $handler->display->display_options['fields']['field_parliament_valid']['label'] = '';
  $handler->display->display_options['fields']['field_parliament_valid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parliament_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Rewritten | Custom Text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Rewritten | Custom Text';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Member of [name] valid til [field_parliament_valid].';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'push-bottom-xs';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;

  /* Display: Profile Extension */
  $handler = $view->new_display('block', 'Profile Extension', 'profile_extension');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Profile Extension Text';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Durch die Verwendung einer Profilerweiterung unterstützt der Kandidat abgeordnetenwatch einmalig mit 179 Euro (149 Euro als Frühbucherrabatt). ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'light';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Basic Info */
  $handler = $view->new_display('block', 'Basic Info', 'basic_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Grunddaten von [field_user_fname-revision_id] [field_user_lname-revision_id]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'zebra clearfix';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['format'] = 'managed_content';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User revision: Benutzer */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'user_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Benutzer (historical data): Constituency (field_user_constituency) */
  $handler->display->display_options['relationships']['field_user_constituency_tid']['id'] = 'field_user_constituency_tid';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['table'] = 'field_revision_field_user_constituency';
  $handler->display->display_options['relationships']['field_user_constituency_tid']['field'] = 'field_user_constituency_tid';
  /* Relationship: Benutzer (historical data): List Position (field_user_list_position) */
  $handler->display->display_options['relationships']['field_user_list_position_tid']['id'] = 'field_user_list_position_tid';
  $handler->display->display_options['relationships']['field_user_list_position_tid']['table'] = 'field_revision_field_user_list_position';
  $handler->display->display_options['relationships']['field_user_list_position_tid']['field'] = 'field_user_list_position_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Benutzer: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Birthday */
  $handler->display->display_options['fields']['field_user_birthday-revision_id']['id'] = 'field_user_birthday-revision_id';
  $handler->display->display_options['fields']['field_user_birthday-revision_id']['table'] = 'field_revision_field_user_birthday';
  $handler->display->display_options['fields']['field_user_birthday-revision_id']['field'] = 'field_user_birthday-revision_id';
  $handler->display->display_options['fields']['field_user_birthday-revision_id']['label'] = 'Geburtstag';
  $handler->display->display_options['fields']['field_user_birthday-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_birthday-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_birthday-revision_id']['empty'] = '-';
  $handler->display->display_options['fields']['field_user_birthday-revision_id']['settings'] = array(
    'format_type' => 'date_only_short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Benutzer (historical data): Education */
  $handler->display->display_options['fields']['field_user_education-revision_id']['id'] = 'field_user_education-revision_id';
  $handler->display->display_options['fields']['field_user_education-revision_id']['table'] = 'field_revision_field_user_education';
  $handler->display->display_options['fields']['field_user_education-revision_id']['field'] = 'field_user_education-revision_id';
  $handler->display->display_options['fields']['field_user_education-revision_id']['label'] = 'Berufliche Qualifikationen';
  $handler->display->display_options['fields']['field_user_education-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_education-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_education-revision_id']['element_wrapper_class'] = 'views-row-odd clear clearfix';
  $handler->display->display_options['fields']['field_user_education-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_education-revision_id']['empty'] = '-';
  /* Feld: Benutzer (historical data): Address */
  $handler->display->display_options['fields']['field_user_address-revision_id']['id'] = 'field_user_address-revision_id';
  $handler->display->display_options['fields']['field_user_address-revision_id']['table'] = 'field_revision_field_user_address';
  $handler->display->display_options['fields']['field_user_address-revision_id']['field'] = 'field_user_address-revision_id';
  $handler->display->display_options['fields']['field_user_address-revision_id']['label'] = 'Wohnort';
  $handler->display->display_options['fields']['field_user_address-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_address-revision_id']['empty'] = '-';
  $handler->display->display_options['fields']['field_user_address-revision_id']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_user_address-revision_id']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_user_address-revision_id']['type'] = 'addressfield_components';
  $handler->display->display_options['fields']['field_user_address-revision_id']['settings'] = array(
    'components' => array(
      'locality' => 'locality',
    ),
    'separator' => ', ',
  );
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_constituency_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Wahlkreis';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_wrapper_class'] = 'views-row-odd clear clearfix';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['empty'] = '-';
  /* Feld: Taxonomie-Begriff: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_user_list_position_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Listenplatz';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['empty'] = '-';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = '$cpath = explode(\'/\',current_path());
$path_uid = $cpath[1];
if (array_key_exists(3, $cpath))
{
  $path_vid  =  $cpath[3];
  return $path_vid;
}
else{
$result =db_query("SELECT vid FROM {user_revision} u WHERE uid = (:uids) ORDER BY vid DESC LIMIT 0,1", array(\':uids\' => $path_uid))->fetchField();
return $result;
}
';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';

  /* Display: About */
  $handler = $view->new_display('block', 'About', 'about');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '[field_user_fname-revision_id] [field_user_lname-revision_id] über sich';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div id="about" class="add-sharethis" title="<?php print t(\'About [field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]\'); ?>"></div>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Benutzer (historical data): About */
  $handler->display->display_options['fields']['field_user_about-revision_id']['id'] = 'field_user_about-revision_id';
  $handler->display->display_options['fields']['field_user_about-revision_id']['table'] = 'field_revision_field_user_about';
  $handler->display->display_options['fields']['field_user_about-revision_id']['field'] = 'field_user_about-revision_id';
  $handler->display->display_options['fields']['field_user_about-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_about-revision_id']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_about-revision_id']['element_class'] = 'pw-expander';
  $handler->display->display_options['fields']['field_user_about-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_about-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Benutzer (historical data): About (field_user_about) */
  $handler->display->display_options['filters']['field_user_about_value']['id'] = 'field_user_about_value';
  $handler->display->display_options['filters']['field_user_about_value']['table'] = 'field_revision_field_user_about';
  $handler->display->display_options['filters']['field_user_about_value']['field'] = 'field_user_about_value';
  $handler->display->display_options['filters']['field_user_about_value']['operator'] = 'not empty';

  /* Display: About Page */
  $handler = $view->new_display('page', 'About Page', 'about_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id] über sich';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="add-sharethis" title="About [field_user_fname-revision_id] [field_user_lname-revision_id]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Kopfbereich: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['empty'] = TRUE;
  $handler->display->display_options['header']['view']['view_to_insert'] = 'pw_user_profile_fields_rev:short_profile_premium_sub';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="link-profile">[nothing_1]</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | VID */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | VID';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Excluded | VID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'Excluded | VID';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  /* Feld: Exlcuded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Exlcuded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Subline */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Subline';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'About me';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'clear clearfix';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Feld: Benutzer (historical data): About */
  $handler->display->display_options['fields']['field_user_about-revision_id']['id'] = 'field_user_about-revision_id';
  $handler->display->display_options['fields']['field_user_about-revision_id']['table'] = 'field_revision_field_user_about';
  $handler->display->display_options['fields']['field_user_about-revision_id']['field'] = 'field_user_about-revision_id';
  $handler->display->display_options['fields']['field_user_about-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_about-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_about-revision_id']['element_default_classes'] = FALSE;
  /* Feld: Excluded | to the full profile */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Excluded | to the full profile';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'to the full profile';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'profile/[name]/archive/[vid]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  /* Contextual filter: User revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = '$cpath = explode(\'/\',current_path());
$path_uid = $cpath[1];
if (array_key_exists(3, $cpath))
{
  $path_vid  =  $cpath[3];
  return $path_vid;
}
else{
$result =db_query("SELECT vid FROM {user_revision} u WHERE uid = (:uids) ORDER BY vid DESC LIMIT 0,1", array(\':uids\' => $path_uid))->fetchField();
return $result;
}
';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'profile/%/about/%';

  /* Display: Image Gallery */
  $handler = $view->new_display('block', 'Image Gallery', 'image_gallery');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bildergalerie von [field_user_fname-revision_id] [field_user_lname-revision_id]';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'weiterlesen';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'image_gallery_page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div id="imagegallery" class="add-sharethis" title="<?php print t(\'Imagegallery of [field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]\'); ?>"></div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['format'] = 'managed_content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Benutzer (historical data): Image Gallery */
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['id'] = 'field_user_image_gallery-revision_id';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['table'] = 'field_revision_field_user_image_gallery';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['field'] = 'field_user_image_gallery-revision_id';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['element_wrapper_class'] = 'img-outline user-image-gallery-wrapper';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['settings'] = array(
    'colorbox_node_style' => 'pw_thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'custom',
    'colorbox_caption_custom' => '[file:field-image-copyright]',
  );
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Benutzer (historical data): Image Gallery (field_user_image_gallery:fid) */
  $handler->display->display_options['filters']['field_user_image_gallery_fid']['id'] = 'field_user_image_gallery_fid';
  $handler->display->display_options['filters']['field_user_image_gallery_fid']['table'] = 'field_revision_field_user_image_gallery';
  $handler->display->display_options['filters']['field_user_image_gallery_fid']['field'] = 'field_user_image_gallery_fid';
  $handler->display->display_options['filters']['field_user_image_gallery_fid']['operator'] = 'not empty';

  /* Display: Image Gallery Page */
  $handler = $view->new_display('page', 'Image Gallery Page', 'image_gallery_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Image Gallery of  [field_user_fname-revision_id] [field_user_lname-revision_id]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix field-name-user-image-gallery';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="add-sharethis" title="Image Gallery of [field_user_fname-revision_id]  [[field_user_lname-revision_id], [field_user_party-revision_id]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Kopfbereich: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['empty'] = TRUE;
  $handler->display->display_options['header']['view']['view_to_insert'] = 'pw_user_profile_fields_rev:short_profile_premium_sub';
  $handler->display->display_options['header']['view']['inherit_arguments'] = TRUE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h3>Image Gallery</h3>';
  $handler->display->display_options['header']['area_1']['format'] = 'managed_content';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="link-profile">[nothing]</p>';
  $handler->display->display_options['footer']['area']['format'] = 'managed_content';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Image Gallery (field_user_image_gallery:fid) */
  $handler->display->display_options['relationships']['field_user_image_gallery_fid']['id'] = 'field_user_image_gallery_fid';
  $handler->display->display_options['relationships']['field_user_image_gallery_fid']['table'] = 'field_revision_field_user_image_gallery';
  $handler->display->display_options['relationships']['field_user_image_gallery_fid']['field'] = 'field_user_image_gallery_fid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | VID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'Excluded | VID';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  /* Feld: Excluded | User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | User: Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_user_image_gallery-revision_id',
    1 => 'field_image_copyright',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'user-image-gallery-wrapper';
  /* Feld: Benutzer (historical data): Image Gallery */
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['id'] = 'field_user_image_gallery-revision_id';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['table'] = 'field_revision_field_user_image_gallery';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['field'] = 'field_user_image_gallery-revision_id';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['settings'] = array(
    'colorbox_node_style' => 'media_thumbnail',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'field_page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_user_image_gallery-revision_id']['delta_offset'] = '0';
  /* Feld: Datei: copyright */
  $handler->display->display_options['fields']['field_image_copyright']['id'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['table'] = 'field_data_field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['field'] = 'field_image_copyright';
  $handler->display->display_options['fields']['field_image_copyright']['relationship'] = 'field_user_image_gallery_fid';
  $handler->display->display_options['fields']['field_image_copyright']['label'] = '';
  $handler->display->display_options['fields']['field_image_copyright']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_copyright']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image_copyright']['element_wrapper_class'] = 'copyright';
  $handler->display->display_options['fields']['field_image_copyright']['element_default_classes'] = FALSE;
  /* Feld: Excluded | Full profile link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Excluded | Full profile link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'to the full profile';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'profile/[name]/archive/[vid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Benutzer: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  /* Contextual filter: User revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = '$cpath = explode(\'/\',current_path());
$path_uid = $cpath[1];
if (array_key_exists(3, $cpath))
{
  $path_vid  =  $cpath[3];
  return $path_vid;
}
else{
$result =db_query("SELECT vid FROM {user_revision} u WHERE uid = (:uids) ORDER BY vid DESC LIMIT 0,1", array(\':uids\' => $path_uid))->fetchField();
return $result;
}
';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'profile/%/imagegallery/%';

  /* Display: Political Goals */
  $handler = $view->new_display('block', 'Political Goals', 'political_goals');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Die politischen Ziele von [field_user_fname-revision_id] [field_user_lname-revision_id]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div id="political-goals" class="add-sharethis" title="<?php print t(\'Political Goals of [field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]\'); ?>"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['format'] = 'managed_content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Benutzer (historical data): Political Goals */
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['id'] = 'field_user_political_goals-revision_id';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['table'] = 'field_revision_field_user_political_goals';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['field'] = 'field_user_political_goals-revision_id';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['element_class'] = 'pw-expander';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Benutzer (historical data): Political Goals (field_user_political_goals) */
  $handler->display->display_options['filters']['field_user_political_goals_value']['id'] = 'field_user_political_goals_value';
  $handler->display->display_options['filters']['field_user_political_goals_value']['table'] = 'field_revision_field_user_political_goals';
  $handler->display->display_options['filters']['field_user_political_goals_value']['field'] = 'field_user_political_goals_value';
  $handler->display->display_options['filters']['field_user_political_goals_value']['operator'] = 'not empty';

  /* Display: Political Goals Page */
  $handler = $view->new_display('page', 'Political Goals Page', 'political_goals_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Die politischen Ziele von [field_user_fname-revision_id] [field_user_lname-revision_id]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="add-sharethis" title="Political Goals of [field_user_fname-revision_id] [field_user_lname-revision_id]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
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
  $handler->display->display_options['footer']['area']['content'] = '<p class="link-profile">[nothing_1]</p>';
  $handler->display->display_options['footer']['area']['format'] = 'managed_content';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | User:Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | User:Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Excluded | VID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'Excluded | VID';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  /* Feld: Excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Subline */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Subline';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Political Goals';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'clear clearfix';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Feld: Benutzer (historical data): Political Goals */
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['id'] = 'field_user_political_goals-revision_id';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['table'] = 'field_revision_field_user_political_goals';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['field'] = 'field_user_political_goals-revision_id';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['element_wrapper_class'] = 'push-bottom-l';
  $handler->display->display_options['fields']['field_user_political_goals-revision_id']['element_default_classes'] = FALSE;
  /* Feld: Excluded | Full profile link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Excluded | Full profile link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'to the full profile';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'profile/[name]/archive/[vid]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  /* Contextual filter: User revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = '$cpath = explode(\'/\',current_path());
$path_uid = $cpath[1];
if (array_key_exists(3, $cpath))
{
  $path_vid  =  $cpath[3];
  return $path_vid;
}
else{
$result =db_query("SELECT vid FROM {user_revision} u WHERE uid = (:uids) ORDER BY vid DESC LIMIT 0,1", array(\':uids\' => $path_uid))->fetchField();
return $result;
}
';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'profile/%/political-goals/%';

  /* Display: Additional Links */
  $handler = $view->new_display('block', 'Additional Links', 'additional_links');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Additional Links of  [field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div id="additional-links" class="add-sharethis" title="<?php print t(\'Additional links of [field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]\'); ?>"></div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Benutzer (historical data): External Links */
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['id'] = 'field_user_links_more-revision_id';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['table'] = 'field_revision_field_user_links_more';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['field'] = 'field_user_links_more-revision_id';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Benutzer (historical data): External Links (field_user_links_more:url) */
  $handler->display->display_options['filters']['field_user_links_more_url']['id'] = 'field_user_links_more_url';
  $handler->display->display_options['filters']['field_user_links_more_url']['table'] = 'field_revision_field_user_links_more';
  $handler->display->display_options['filters']['field_user_links_more_url']['field'] = 'field_user_links_more_url';
  $handler->display->display_options['filters']['field_user_links_more_url']['operator'] = 'not empty';

  /* Display: Additional Links Page */
  $handler = $view->new_display('page', 'Additional Links Page', 'additional_links_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Additional Links of [field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['style_options']['class'] = 'zebra push-bottom-l';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="add-sharethis" title="Additional Links of [field_user_fname-revision_id]  [field_user_lname-revision_id], [field_user_party-revision_id]"></div>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Kopfbereich: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['empty'] = TRUE;
  $handler->display->display_options['header']['view']['view_to_insert'] = 'pw_user_profile_fields_rev:short_profile_premium_sub';
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h3>Additional information</h3>';
  $handler->display->display_options['header']['area_1']['format'] = 'managed_content';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Fußbereich: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="link-profile">[nothing]</p>';
  $handler->display->display_options['footer']['area']['format'] = 'managed_content';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | User:Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'user_revision';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | User:Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user_revision'] = 0;
  /* Feld: Excluded| VID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_revision';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'Excluded| VID';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  /* Feld: Excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Benutzer (historical data): External Links */
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['id'] = 'field_user_links_more-revision_id';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['table'] = 'field_revision_field_user_links_more';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['field'] = 'field_user_links_more-revision_id';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_user_links_more-revision_id']['delta_offset'] = '0';
  /* Feld: Exlcuded | to full profile */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Exlcuded | to full profile';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'to the full profile';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'profile/[name]/archive/[vid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Benutzer: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  /* Contextual filter: User revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'user_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['vid']['default_argument_options']['code'] = '$cpath = explode(\'/\',current_path());
$path_uid = $cpath[1];
if (array_key_exists(3, $cpath))
{
  $path_vid  =  $cpath[3];
  return $path_vid;
}
else{
$result =db_query("SELECT vid FROM {user_revision} u WHERE uid = (:uids) ORDER BY vid DESC LIMIT 0,1", array(\':uids\' => $path_uid))->fetchField();
return $result;
}
';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'profile/%/additional-links/%';

  /* Display: Short Profile Premium Mainpage */
  $handler = $view->new_display('block', 'Short Profile Premium Mainpage', 'short_profile_premium_main');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'relative clearfix';
  $handler->display->display_options['display_description'] = 'used as header field on pages';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: PHP remove page title */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'PHP remove page title';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
drupal_set_title("");
?>';
  /* Kopfbereich: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div id="" class="add-sharethis" title="[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]"></div>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | User: Uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['ui_name'] = 'Excluded | User UUID';
  $handler->display->display_options['fields']['uuid']['label'] = '';
  $handler->display->display_options['fields']['uuid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uuid']['element_default_classes'] = FALSE;
  /* Feld: Excluded | User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | User: Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Feld: Excluded | User: First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | User: First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_default_classes'] = FALSE;
  /* Feld: Excluded | User: Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | User: Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_default_classes'] = FALSE;
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | Taxonomie: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['name_1']['ui_name'] = 'Excluded | Taxonomie: Name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Parliament: Valid date */
  $handler->display->display_options['fields']['field_parliament_valid']['id'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['table'] = 'field_data_field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['field'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['field_parliament_valid']['ui_name'] = 'Excluded | Parliament: Valid date';
  $handler->display->display_options['fields']['field_parliament_valid']['label'] = '';
  $handler->display->display_options['fields']['field_parliament_valid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parliament_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Benutzer (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_class'] = 'file-image float-left portrait-l';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Feld: Global: Custom text: Headline */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Global: Custom text: Headline';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_class'] = 'push-bottom-xxs';
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  /* Feld: Custom: Parliament Information */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Custom: Parliament Information';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Candidate of [name_1] ';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Feld: PHP | Profile extension */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'PHP | Profile extension';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['php_1']['element_wrapper_class'] = 'light';
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$profiluser = $myuser = user_load($row->uid);
$profiluserroles = $profiluser->roles;
if(in_array("Premium User",$profiluserroles)) {
print "Durch die Verwendung einer Profilerweiterung unterstützt der Kandidat abgeordnetenwatch einmalig mit 179 Euro (149 Euro als Frühbucherrabatt).";
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Feld: Global: Custom text: Ask a Question */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Global: Custom text: Ask a Question';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Frage stellen';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'node/10446?width=600&height=600&uuid=[uuid]';
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing_2']['element_class'] = 'form-submit big link-question';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'center push-bottom-l';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Feld: Excluded | User: Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['id'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['table'] = 'field_revision_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['field'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['ui_name'] = 'Excluded | User: Answers Give';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Feld: Excluded | User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['id'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['table'] = 'field_revision_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['field'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['ui_name'] = 'Excluded | User: Questions Get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Feld: Excluded | Link to questions and answers */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Excluded | Link to questions and answers';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Zu den Fragen und Antworten';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '#pw-block-questions-and-answers';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'link-qa';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Feld: Rewritten | dialogue count and qa link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Rewritten | dialogue count and qa link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[nothing]<br/>
[field_user_questions_get-revision_id] / [field_user_answers_give-revision_id]
';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'float-left bubble tiny';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;

  /* Display: Short Profile Premium Subpage */
  $handler = $view->new_display('block', 'Short Profile Premium Subpage', 'short_profile_premium_sub');
  $handler->display->display_options['display_description'] = 'used as header field on pages';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
drupal_set_title("");
?>
';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | User: Uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['ui_name'] = 'Excluded | User: Name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | User: Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | User: Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | Taxonomie: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | Taxonomie: Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Feld: Taxonomie-Begriff: Valid Date */
  $handler->display->display_options['fields']['field_parliament_valid']['id'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['table'] = 'field_data_field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['field'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['field_parliament_valid']['label'] = '';
  $handler->display->display_options['fields']['field_parliament_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Benutzer (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['id'] = 'field_user_picture-revision_id_1';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['element_wrapper_class'] = 'file-image float-left portrait-l';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture-revision_id_1']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Feld: Global: Custom text: Headline */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global: Custom text: Headline';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'push-bottom-xxs';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Feld: Custom: Parliament Information */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom: Parliament Information';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Candidate of [name]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'push-bottom-xs';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Feld: PHP | Profile extension */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'PHP | Profile extension';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'light';
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$profiluser = $myuser = user_load($row->uid);
$profiluserroles = $profiluser->roles;
if(in_array("Premium User",$profiluserroles)) {
print "Durch die Verwendung einer Profilerweiterung unterstützt der Kandidat abgeordnetenwatch einmalig mit 179 Euro (149 Euro als Frühbucherrabatt).";
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Global: Custom text: Ask a Question */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Global: Custom text: Ask a Question';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Frage stellen';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing_2']['element_class'] = 'form-submit big link-question';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'center push-bottom-l';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Feld: User: Link: profile link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['ui_name'] = 'User: Link: profile link';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['text'] = 'to the full profile';

  /* Display: Short Profile Deputy Mainpage */
  $handler = $view->new_display('block', 'Short Profile Deputy Mainpage', 'short_profile_deputy_main');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User Profile Fields';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'relative clearfix';
  $handler->display->display_options['display_description'] = 'used as header field on pages';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: PHP remove page title */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'PHP remove page title';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
drupal_set_title("");
?>
';
  /* Kopfbereich: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div id="" class="add-sharethis" title="[field_user_fname-revision_id] [field_user_lname-revision_id] , [field_user_party-revision_id]"></div>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | User: Uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | User UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['ui_name'] = 'Excluded | User UUID';
  $handler->display->display_options['fields']['uuid']['label'] = '';
  $handler->display->display_options['fields']['uuid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  /* Feld: Excluded | User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['ui_name'] = 'Excluded | User: Name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | User: Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | User: Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Excluded | Taxonomie: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | Taxonomie: Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Parliament: Valid date */
  $handler->display->display_options['fields']['field_parliament_valid']['id'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['table'] = 'field_data_field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['field'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['field_parliament_valid']['ui_name'] = 'Excluded | Parliament: Valid date';
  $handler->display->display_options['fields']['field_parliament_valid']['label'] = '';
  $handler->display->display_options['fields']['field_parliament_valid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parliament_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Benutzer (historical data): Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_class'] = 'file-image float-left portrait-l';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Feld: Global: Custom text: Headline */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Global: Custom text: Headline';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['nothing_4']['element_wrapper_class'] = 'push-bottom-xxs';
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  /* Feld: Custom: Parliament Information */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Custom: Parliament Information';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Member of [name]';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'push-bottom-xs';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Feld: Global: Custom text: Ask a Question */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Global: Custom text: Ask a Question';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Frage stellen';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'node/10446?width=600&height=600&uuid=[uuid]';
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['nothing_2']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing_2']['element_class'] = 'form-submit big link-question';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'center push-bottom-l';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  /* Feld: Excluded | User: Answers Give */
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['id'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['table'] = 'field_revision_field_user_answers_give';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['field'] = 'field_user_answers_give-revision_id';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['ui_name'] = 'Excluded | User: Answers Give';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_answers_give-revision_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Feld: Excluded | User: Questions Get */
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['id'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['table'] = 'field_revision_field_user_questions_get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['field'] = 'field_user_questions_get-revision_id';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['ui_name'] = 'Excluded | User: Questions Get';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_questions_get-revision_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Feld: Excluded | Link to questions and answers */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Excluded | Link to questions and answers';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Zu den Fragen und Antworten';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '#pw-block-questions-and-answers';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'link-qa';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Feld: Rewritten | dialogue count and qa link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Rewritten | dialogue count and qa link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[nothing]<br/>
[field_user_questions_get-revision_id] / [field_user_answers_give-revision_id]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'float-left bubble tiny';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;

  /* Display: Short Profile Deputy Subpage */
  $handler = $view->new_display('block', 'Short Profile Deputy Subpage', 'short_profile_deputy_sub');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'relative clearfix';
  $handler->display->display_options['display_description'] = 'used as header field on pages';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: PHP remove page title */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'PHP remove page title';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
drupal_set_title("");
?>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Benutzer (historical data): Parliament (field_user_parliament) */
  $handler->display->display_options['relationships']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['table'] = 'field_revision_field_user_parliament';
  $handler->display->display_options['relationships']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | User: Uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Excluded | User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['ui_name'] = 'Excluded | User: Name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Feld: Excluded | First Name */
  $handler->display->display_options['fields']['field_user_fname-revision_id']['id'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['table'] = 'field_revision_field_user_fname';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['field'] = 'field_user_fname-revision_id';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['ui_name'] = 'Excluded | First Name';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_fname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_fname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Last Name */
  $handler->display->display_options['fields']['field_user_lname-revision_id']['id'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['table'] = 'field_revision_field_user_lname';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['field'] = 'field_user_lname-revision_id';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['ui_name'] = 'Excluded | Last Name';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_lname-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_lname-revision_id']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Taxonomie: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'Excluded | Taxonomie: Name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Feld: Excluded | Parliament: Valid date */
  $handler->display->display_options['fields']['field_parliament_valid']['id'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['table'] = 'field_data_field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['field'] = 'field_parliament_valid';
  $handler->display->display_options['fields']['field_parliament_valid']['relationship'] = 'field_user_parliament_tid';
  $handler->display->display_options['fields']['field_parliament_valid']['ui_name'] = 'Excluded | Parliament: Valid date';
  $handler->display->display_options['fields']['field_parliament_valid']['label'] = '';
  $handler->display->display_options['fields']['field_parliament_valid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parliament_valid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parliament_valid']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Feld: Excluded | User: Profile picture */
  $handler->display->display_options['fields']['field_user_picture-revision_id']['id'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['table'] = 'field_revision_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['field'] = 'field_user_picture-revision_id';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['ui_name'] = 'Excluded | User: Profile picture';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_wrapper_class'] = 'file-image float-left portrait-l';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture-revision_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_user_picture-revision_id']['settings'] = array(
    'file_view_mode' => 'pw_file_portrait_l',
  );
  /* Feld: Global: PHP: Profile picture */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Global: PHP: Profile picture';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_wrapper_class'] = 'file-image float-left push-bottom-l portrait-l';
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$profiluser = $myuser = user_load($row->uid);
$profiluserroles = $profiluser->roles;
if(in_array("Premium User",$profiluserroles)) {
print theme(\'image_style\', array(\'path\' => $data->field_field_user_picture[0][\'raw\'][\'uri\'], \'style_name\' => \'pw_portrait_l\'));
print "<div class=\\"copyright\\">".$data->field_field_user_picture[0][\'raw\'][\'field_image_copyright\'][\'und\'][0][\'value\']."</div>";
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Excluded | Party */
  $handler->display->display_options['fields']['field_user_party-revision_id']['id'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['table'] = 'field_revision_field_user_party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['field'] = 'field_user_party-revision_id';
  $handler->display->display_options['fields']['field_user_party-revision_id']['ui_name'] = 'Excluded | Party';
  $handler->display->display_options['fields']['field_user_party-revision_id']['label'] = '';
  $handler->display->display_options['fields']['field_user_party-revision_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_party-revision_id']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_user_party-revision_id']['delta_offset'] = '0';
  /* Feld: Custom: Parliament Information */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Parliament Information';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Member of [name]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'push-bottom-xs';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Feld: Custom | Profile extension */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Custom | Profile extension';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Durch die Verwendung einer Profilerweiterung unterstützt der Kandidat abgeordnetenwatch einmalig mit 179 Euro (149 Euro als Frühbucherrabatt).';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'light';
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = FALSE;
  /* Feld: Global: Custom text: Ask a Question */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Global: Custom text: Ask a Question';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Frage stellen';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'form-submit big link-question';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'center push-bottom-l';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Feld: User: Link: profile link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['ui_name'] = 'User: Link: profile link';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['view_user']['element_wrapper_class'] = 'link-profile';
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_user']['text'] = 'to the full profile';
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_user_fname-revision_id] [field_user_lname-revision_id], [field_user_party-revision_id]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['nothing_2']['element_wrapper_class'] = 'push-bottom-xxs';
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = FALSE;
  $export['pw_user_profile_fields_rev'] = $view;

  $view = new view();
  $view->name = 'pw_user_revision_switch';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'user_archive_cache';
  $view->human_name = 'PW User Revision Switch';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Wählergedächnis';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'pw-list-expander';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="ic-info"><div class="info-title"></div><div class="info-content element-hidden">Infotext</div></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Feld: Exkuded | User Name */
  $handler->display->display_options['fields']['user_name']['id'] = 'user_name';
  $handler->display->display_options['fields']['user_name']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['user_name']['field'] = 'user_name';
  $handler->display->display_options['fields']['user_name']['ui_name'] = 'Exkuded | User Name';
  $handler->display->display_options['fields']['user_name']['label'] = '';
  $handler->display->display_options['fields']['user_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_name']['element_label_colon'] = FALSE;
  /* Feld: Excluded | VID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'Excluded | VID';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vid']['separator'] = '';
  /* Feld: Excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  /* Feld: Excluded | Parliament */
  $handler->display->display_options['fields']['parliament_name_1']['id'] = 'parliament_name_1';
  $handler->display->display_options['fields']['parliament_name_1']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['parliament_name_1']['field'] = 'parliament_name';
  $handler->display->display_options['fields']['parliament_name_1']['ui_name'] = 'Excluded | Parliament';
  $handler->display->display_options['fields']['parliament_name_1']['label'] = '';
  $handler->display->display_options['fields']['parliament_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['parliament_name_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | User Role */
  $handler->display->display_options['fields']['user_role']['id'] = 'user_role';
  $handler->display->display_options['fields']['user_role']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['user_role']['field'] = 'user_role';
  $handler->display->display_options['fields']['user_role']['ui_name'] = 'Excluded | User Role';
  $handler->display->display_options['fields']['user_role']['label'] = '';
  $handler->display->display_options['fields']['user_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_role']['element_label_colon'] = FALSE;
  /* Feld: Excluded | PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$urole = $row->user_role;
if ( !empty($urole) && $urole ==  "candidate") print t("Kandidatenprofil");
else if ( !empty($urole) && $urole ==  "deputy") print t("Abgeordnetenprofil");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[php] [parliament_name_1] ';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'number_of_questions',
    1 => 'number_of_answers',
    2 => 'number_of_sideline_jobs',
    3 => 'number_of_speeches',
    4 => 'number_of_missed_votings',
    5 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['collapsible'] = 1;
  $handler->display->display_options['fields']['fieldset']['fieldset']['collapsed'] = 1;
  /* Feld: Excluded | Number of Questions */
  $handler->display->display_options['fields']['number_of_questions']['id'] = 'number_of_questions';
  $handler->display->display_options['fields']['number_of_questions']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_questions']['field'] = 'number_of_questions';
  $handler->display->display_options['fields']['number_of_questions']['ui_name'] = 'Excluded | Number of Questions';
  $handler->display->display_options['fields']['number_of_questions']['label'] = '';
  $handler->display->display_options['fields']['number_of_questions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['number_of_questions']['alter']['text'] = '[number_of_questions] Fragen /';
  $handler->display->display_options['fields']['number_of_questions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_questions']['separator'] = '';
  $handler->display->display_options['fields']['number_of_questions']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_questions']['format_plural_singular'] = '1 question';
  $handler->display->display_options['fields']['number_of_questions']['format_plural_plural'] = '@count questions';
  /* Feld: Overwritten | Questions + Answers */
  $handler->display->display_options['fields']['number_of_answers']['id'] = 'number_of_answers';
  $handler->display->display_options['fields']['number_of_answers']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_answers']['field'] = 'number_of_answers';
  $handler->display->display_options['fields']['number_of_answers']['ui_name'] = 'Overwritten | Questions + Answers';
  $handler->display->display_options['fields']['number_of_answers']['label'] = '';
  $handler->display->display_options['fields']['number_of_answers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['number_of_answers']['alter']['text'] = '[number_of_questions] / [number_of_answers]';
  $handler->display->display_options['fields']['number_of_answers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_answers']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['number_of_answers']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['number_of_answers']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['number_of_answers']['separator'] = '';
  $handler->display->display_options['fields']['number_of_answers']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_answers']['format_plural_singular'] = '1 answer';
  $handler->display->display_options['fields']['number_of_answers']['format_plural_plural'] = '@count answers';
  /* Feld: User archive cache: Number of sideline jobs */
  $handler->display->display_options['fields']['number_of_sideline_jobs']['id'] = 'number_of_sideline_jobs';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['field'] = 'number_of_sideline_jobs';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['label'] = '';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['alter']['text'] = '[number_of_sideline_jobs] Nebentätigkeiten';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_sideline_jobs']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['number_of_sideline_jobs']['separator'] = '';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_sideline_jobs']['format_plural_singular'] = '1 sideline job';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['format_plural_plural'] = '@count sideline jobs';
  /* Feld: User archive cache: Number of speeches */
  $handler->display->display_options['fields']['number_of_speeches']['id'] = 'number_of_speeches';
  $handler->display->display_options['fields']['number_of_speeches']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_speeches']['field'] = 'number_of_speeches';
  $handler->display->display_options['fields']['number_of_speeches']['label'] = '';
  $handler->display->display_options['fields']['number_of_speeches']['alter']['text'] = '[number_of_speeches] Gehaltene Reden';
  $handler->display->display_options['fields']['number_of_speeches']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_speeches']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['number_of_speeches']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['number_of_speeches']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['number_of_speeches']['separator'] = '';
  $handler->display->display_options['fields']['number_of_speeches']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_speeches']['format_plural_singular'] = '1 speech';
  $handler->display->display_options['fields']['number_of_speeches']['format_plural_plural'] = '@count speeches';
  /* Feld: User archive cache: Number of missed votings */
  $handler->display->display_options['fields']['number_of_missed_votings']['id'] = 'number_of_missed_votings';
  $handler->display->display_options['fields']['number_of_missed_votings']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_missed_votings']['field'] = 'number_of_missed_votings';
  $handler->display->display_options['fields']['number_of_missed_votings']['label'] = '';
  $handler->display->display_options['fields']['number_of_missed_votings']['alter']['text'] = '[number_of_missed_votings] Verpasste Abstimmungen';
  $handler->display->display_options['fields']['number_of_missed_votings']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_missed_votings']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['number_of_missed_votings']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['number_of_missed_votings']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_missed_votings']['format_plural_singular'] = '1 missed voting';
  $handler->display->display_options['fields']['number_of_missed_votings']['format_plural_plural'] = '@count missed votings';
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Zeitraumsprofil öffnen';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[user_name]/revisions/[vid]/view';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'text-right';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: User archive cache: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'user_archive_cache';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  /* Contextual filter: User archive cache: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'user_archive_cache';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';

  /* Display: Wählergedächnis */
  $handler = $view->new_display('block', 'Wählergedächnis', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Excluded | VID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['ui_name'] = 'Excluded | VID';
  $handler->display->display_options['fields']['vid']['label'] = '';
  $handler->display->display_options['fields']['vid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['vid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['vid']['separator'] = '';
  /* Feld: Exlcuded | User Name */
  $handler->display->display_options['fields']['user_name']['id'] = 'user_name';
  $handler->display->display_options['fields']['user_name']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['user_name']['field'] = 'user_name';
  $handler->display->display_options['fields']['user_name']['ui_name'] = 'Exlcuded | User Name';
  $handler->display->display_options['fields']['user_name']['label'] = '';
  $handler->display->display_options['fields']['user_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_name']['element_label_colon'] = FALSE;
  /* Feld: Excluded | UID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['ui_name'] = 'Excluded | UID';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['separator'] = '';
  /* Feld: Excluded | Parliament */
  $handler->display->display_options['fields']['parliament_name_1']['id'] = 'parliament_name_1';
  $handler->display->display_options['fields']['parliament_name_1']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['parliament_name_1']['field'] = 'parliament_name';
  $handler->display->display_options['fields']['parliament_name_1']['ui_name'] = 'Excluded | Parliament';
  $handler->display->display_options['fields']['parliament_name_1']['label'] = '';
  $handler->display->display_options['fields']['parliament_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['parliament_name_1']['element_label_colon'] = FALSE;
  /* Feld: Excluded | User Role */
  $handler->display->display_options['fields']['user_role']['id'] = 'user_role';
  $handler->display->display_options['fields']['user_role']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['user_role']['field'] = 'user_role';
  $handler->display->display_options['fields']['user_role']['ui_name'] = 'Excluded | User Role';
  $handler->display->display_options['fields']['user_role']['label'] = '';
  $handler->display->display_options['fields']['user_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user_role']['element_label_colon'] = FALSE;
  /* Feld: Excluded | PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Excluded | PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$urole = $row->user_role;
if ( !empty($urole) && $urole ==  "candidate") print t("Kandidatenprofil");
else if ( !empty($urole) && $urole ==  "deputy") print t("Abgeordnetenprofil");
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '[php] [parliament_name_1] ';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'number_of_questions',
    1 => 'number_of_answers',
    2 => 'number_of_sideline_jobs',
    3 => 'number_of_speeches',
    4 => 'number_of_missed_votings',
    5 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['collapsible'] = 1;
  $handler->display->display_options['fields']['fieldset']['fieldset']['collapsed'] = 1;
  /* Feld: Excluded | Number of Questions */
  $handler->display->display_options['fields']['number_of_questions']['id'] = 'number_of_questions';
  $handler->display->display_options['fields']['number_of_questions']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_questions']['field'] = 'number_of_questions';
  $handler->display->display_options['fields']['number_of_questions']['ui_name'] = 'Excluded | Number of Questions';
  $handler->display->display_options['fields']['number_of_questions']['label'] = '';
  $handler->display->display_options['fields']['number_of_questions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['number_of_questions']['alter']['text'] = '[number_of_questions] Fragen /';
  $handler->display->display_options['fields']['number_of_questions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_questions']['separator'] = '';
  $handler->display->display_options['fields']['number_of_questions']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_questions']['format_plural_singular'] = '1 question';
  $handler->display->display_options['fields']['number_of_questions']['format_plural_plural'] = '@count questions';
  /* Feld: Overwritten | Questions + Answers */
  $handler->display->display_options['fields']['number_of_answers']['id'] = 'number_of_answers';
  $handler->display->display_options['fields']['number_of_answers']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_answers']['field'] = 'number_of_answers';
  $handler->display->display_options['fields']['number_of_answers']['ui_name'] = 'Overwritten | Questions + Answers';
  $handler->display->display_options['fields']['number_of_answers']['label'] = '';
  $handler->display->display_options['fields']['number_of_answers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['number_of_answers']['alter']['text'] = '[number_of_questions] / [number_of_answers]';
  $handler->display->display_options['fields']['number_of_answers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_answers']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['number_of_answers']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['number_of_answers']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['number_of_answers']['separator'] = '';
  $handler->display->display_options['fields']['number_of_answers']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_answers']['format_plural_singular'] = '1 answer';
  $handler->display->display_options['fields']['number_of_answers']['format_plural_plural'] = '@count answers';
  /* Feld: User archive cache: Number of sideline jobs */
  $handler->display->display_options['fields']['number_of_sideline_jobs']['id'] = 'number_of_sideline_jobs';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['field'] = 'number_of_sideline_jobs';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['label'] = '';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['alter']['text'] = '[number_of_sideline_jobs] Nebentätigkeiten';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_sideline_jobs']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['number_of_sideline_jobs']['separator'] = '';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_sideline_jobs']['format_plural_singular'] = '1 sideline job';
  $handler->display->display_options['fields']['number_of_sideline_jobs']['format_plural_plural'] = '@count sideline jobs';
  /* Feld: User archive cache: Number of speeches */
  $handler->display->display_options['fields']['number_of_speeches']['id'] = 'number_of_speeches';
  $handler->display->display_options['fields']['number_of_speeches']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_speeches']['field'] = 'number_of_speeches';
  $handler->display->display_options['fields']['number_of_speeches']['label'] = '';
  $handler->display->display_options['fields']['number_of_speeches']['alter']['text'] = '[number_of_speeches] Gehaltene Reden';
  $handler->display->display_options['fields']['number_of_speeches']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_speeches']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['number_of_speeches']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['number_of_speeches']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['number_of_speeches']['separator'] = '';
  $handler->display->display_options['fields']['number_of_speeches']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_speeches']['format_plural_singular'] = '1 speech';
  $handler->display->display_options['fields']['number_of_speeches']['format_plural_plural'] = '@count speeches';
  /* Feld: User archive cache: Number of missed votings */
  $handler->display->display_options['fields']['number_of_missed_votings']['id'] = 'number_of_missed_votings';
  $handler->display->display_options['fields']['number_of_missed_votings']['table'] = 'user_archive_cache';
  $handler->display->display_options['fields']['number_of_missed_votings']['field'] = 'number_of_missed_votings';
  $handler->display->display_options['fields']['number_of_missed_votings']['label'] = '';
  $handler->display->display_options['fields']['number_of_missed_votings']['alter']['text'] = '[number_of_missed_votings] Verpasste Abstimmungen';
  $handler->display->display_options['fields']['number_of_missed_votings']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['number_of_missed_votings']['element_wrapper_class'] = 'medium';
  $handler->display->display_options['fields']['number_of_missed_votings']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['number_of_missed_votings']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['number_of_missed_votings']['format_plural_singular'] = '1 missed voting';
  $handler->display->display_options['fields']['number_of_missed_votings']['format_plural_plural'] = '@count missed votings';
  /* Feld: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Profil öffnen';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'profile/[user_name]/archive/[vid]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'text-right';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User archive cache: User name */
  $handler->display->display_options['arguments']['user_name']['id'] = 'user_name';
  $handler->display->display_options['arguments']['user_name']['table'] = 'user_archive_cache';
  $handler->display->display_options['arguments']['user_name']['field'] = 'user_name';
  $handler->display->display_options['arguments']['user_name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['user_name']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['user_name']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['user_name']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['user_name']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['user_name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['user_name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['user_name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['user_name']['limit'] = '0';
  $export['pw_user_revision_switch'] = $view;

  return $export;
}
