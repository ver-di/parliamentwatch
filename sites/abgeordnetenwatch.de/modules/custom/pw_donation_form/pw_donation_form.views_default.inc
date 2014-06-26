<?php
/**
 * @file
 * pw_donation_form.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_donation_form_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_donation_drive';
  $view->description = 'Zeigt den Stand der aktuell laufenden Spendenkampagne an';
  $view->tag = 'default';
  $view->base_table = 'xml';
  $view->human_name = 'PW Donation Drive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stand der Spendenkampagne';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['xml_file'] = 'sites/abgeordnetenwatch.de/files/private/import/civicrm/donations-total.xml';
  $handler->display->display_options['query']['options']['row_xpath'] = '/donations';
  $handler->display->display_options['query']['options']['show_errors'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Feld: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'text',
    1 => 'text_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'float-left';
  /* Feld: amount: Text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'xml';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = 'amount';
  $handler->display->display_options['fields']['text']['xpath_selector'] = 'amount';
  $handler->display->display_options['fields']['text']['multiple'] = 0;
  /* Feld: count: Text */
  $handler->display->display_options['fields']['text_1']['id'] = 'text_1';
  $handler->display->display_options['fields']['text_1']['table'] = 'xml';
  $handler->display->display_options['fields']['text_1']['field'] = 'text';
  $handler->display->display_options['fields']['text_1']['label'] = 'count';
  $handler->display->display_options['fields']['text_1']['xpath_selector'] = 'count';
  $handler->display->display_options['fields']['text_1']['multiple'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['pw_donation_drive'] = $view;

  $view = new view();
  $view->name = 'pw_donation_state';
  $view->description = '';
  $view->tag = 'mysql';
  $view->base_table = 'xml';
  $view->human_name = 'PW Donations State';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Spenden nach Bundesland';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['xml_file'] = 'sites/abgeordnetenwatch.de/files/private/import/civicrm/donations-by-state.xml';
  $handler->display->display_options['query']['options']['row_xpath'] = '/donations/state';
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'push-bottom-s clearfix';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Kopfbereich: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Starten Sie abgeordnetenwatch.de für Ihr Bundesland. Sobald 10.000 € erreicht sind,
geht es los!<br/><br/></p>';
  $handler->display->display_options['header']['area']['format'] = 'managed_content';
  /* Feld: name: Text */
  $handler->display->display_options['fields']['text']['id'] = 'text';
  $handler->display->display_options['fields']['text']['table'] = 'xml';
  $handler->display->display_options['fields']['text']['field'] = 'text';
  $handler->display->display_options['fields']['text']['label'] = '';
  $handler->display->display_options['fields']['text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['text']['element_wrapper_class'] = 'push-bottom-xs';
  $handler->display->display_options['fields']['text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['text']['xpath_selector'] = 'name';
  $handler->display->display_options['fields']['text']['multiple'] = 0;
  /* Feld: machine_name: Text */
  $handler->display->display_options['fields']['text_3']['id'] = 'text_3';
  $handler->display->display_options['fields']['text_3']['table'] = 'xml';
  $handler->display->display_options['fields']['text_3']['field'] = 'text';
  $handler->display->display_options['fields']['text_3']['label'] = '';
  $handler->display->display_options['fields']['text_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['text_3']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['text_3']['element_wrapper_class'] = 'state-de [text_3] float-left';
  $handler->display->display_options['fields']['text_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['text_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['text_3']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['text_3']['xpath_selector'] = 'machine_name';
  $handler->display->display_options['fields']['text_3']['multiple'] = 0;
  /* Feld: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'php',
    1 => 'text_1',
    2 => 'text_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'float-left';
  /* Feld: PHP: Progress bar */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'PHP: Progress bar';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div class="pw-progress-wrapper"><div class="pw-progress" style="width: <?php 
$required = 10000;
$donations = str_replace(array(\'.\', \',\'), \'\' , $row->text_1);
$progress = $donations/$required;
if($progress > 100){
    $progress = 100;
}
print $progress; ?>%;"><?php print t(\'Progress\') ?>: <?php print $progress; ?>%</div></div>
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: amount: Text */
  $handler->display->display_options['fields']['text_1']['id'] = 'text_1';
  $handler->display->display_options['fields']['text_1']['table'] = 'xml';
  $handler->display->display_options['fields']['text_1']['field'] = 'text';
  $handler->display->display_options['fields']['text_1']['label'] = 'Fördersumme';
  $handler->display->display_options['fields']['text_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['text_1']['element_wrapper_class'] = 'light';
  $handler->display->display_options['fields']['text_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['text_1']['xpath_selector'] = 'amount';
  $handler->display->display_options['fields']['text_1']['multiple'] = 0;
  /* Feld: donors: Text */
  $handler->display->display_options['fields']['text_2']['id'] = 'text_2';
  $handler->display->display_options['fields']['text_2']['table'] = 'xml';
  $handler->display->display_options['fields']['text_2']['field'] = 'text';
  $handler->display->display_options['fields']['text_2']['label'] = 'Fördermitglieder';
  $handler->display->display_options['fields']['text_2']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['text_2']['element_wrapper_class'] = 'light';
  $handler->display->display_options['fields']['text_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['text_2']['xpath_selector'] = 'donors';
  $handler->display->display_options['fields']['text_2']['multiple'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['pw_donation_state'] = $view;

  $view = new view();
  $view->name = 'pw_donations_recent';
  $view->description = '';
  $view->tag = 'mysql';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'PW Donations Recent';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Letzte Spender';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'push-bottom-s';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'pw-donation-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Webform views untersttzen sie abgeordnetenwatchde: Sid */
  $handler->display->display_options['relationships']['sid']['id'] = 'sid';
  $handler->display->display_options['relationships']['sid']['table'] = 'webform_views_untersttzen_sie_abgeordnetenwatchde';
  $handler->display->display_options['relationships']['sid']['field'] = 'sid';
  $handler->display->display_options['relationships']['sid']['required'] = TRUE;
  /* Feld: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted_1']['id'] = 'submitted_1';
  $handler->display->display_options['fields']['submitted_1']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted_1']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['submitted_1']['date_format'] = 'long';
  /* Feld: Webform views untersttzen sie abgeordnetenwatchde: Personal firstname */
  $handler->display->display_options['fields']['personal_firstname']['id'] = 'personal_firstname';
  $handler->display->display_options['fields']['personal_firstname']['table'] = 'webform_views_untersttzen_sie_abgeordnetenwatchde';
  $handler->display->display_options['fields']['personal_firstname']['field'] = 'personal_firstname';
  $handler->display->display_options['fields']['personal_firstname']['exclude'] = TRUE;
  /* Feld: Webform views untersttzen sie abgeordnetenwatchde: Personal lastname */
  $handler->display->display_options['fields']['personal_lastname']['id'] = 'personal_lastname';
  $handler->display->display_options['fields']['personal_lastname']['table'] = 'webform_views_untersttzen_sie_abgeordnetenwatchde';
  $handler->display->display_options['fields']['personal_lastname']['field'] = 'personal_lastname';
  $handler->display->display_options['fields']['personal_lastname']['exclude'] = TRUE;
  /* Feld: Webform views untersttzen sie abgeordnetenwatchde: Civicrm amount */
  $handler->display->display_options['fields']['civicrm_amount']['id'] = 'civicrm_amount';
  $handler->display->display_options['fields']['civicrm_amount']['table'] = 'webform_views_untersttzen_sie_abgeordnetenwatchde';
  $handler->display->display_options['fields']['civicrm_amount']['field'] = 'civicrm_amount';
  $handler->display->display_options['fields']['civicrm_amount']['exclude'] = TRUE;
  /* Feld: Webform views untersttzen sie abgeordnetenwatchde: Civicrm contribution type */
  $handler->display->display_options['fields']['civicrm_contribution_type']['id'] = 'civicrm_contribution_type';
  $handler->display->display_options['fields']['civicrm_contribution_type']['table'] = 'webform_views_untersttzen_sie_abgeordnetenwatchde';
  $handler->display->display_options['fields']['civicrm_contribution_type']['field'] = 'civicrm_contribution_type';
  $handler->display->display_options['fields']['civicrm_contribution_type']['exclude'] = TRUE;
  /* Feld: Webform views untersttzen sie abgeordnetenwatchde: Option not anonymous */
  $handler->display->display_options['fields']['option_not_anonymous']['id'] = 'option_not_anonymous';
  $handler->display->display_options['fields']['option_not_anonymous']['table'] = 'webform_views_untersttzen_sie_abgeordnetenwatchde';
  $handler->display->display_options['fields']['option_not_anonymous']['field'] = 'option_not_anonymous';
  $handler->display->display_options['fields']['option_not_anonymous']['exclude'] = TRUE;
  /* Feld: PHP: Time ago */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['ui_name'] = 'PHP: Time ago';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php_1']['element_wrapper_class'] = 'light';
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
print t(\'@interval ago\', array(\'@interval\' => format_interval(time()-date($row->submitted_1),1,"en-EN")));
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Feld: PHP: Donation */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'PHP: Donation';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$o = $row->civicrm_amount." € ";
$o .= $row->civicrm_contribution_type==="Fördermitglied" ? t("recurring donation from")." " : t("donation from")." ";
$o .= $row->option_not_anonymous==="yes" ? $row->personal_firstname." ".$row->personal_lastname : t("anonymous");
return $o;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'recent');
  $export['pw_donations_recent'] = $view;

  return $export;
}
