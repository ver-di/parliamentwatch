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
  $view->name = 'letzte_spender';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Letzte Spender';
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
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Spende';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$o = $row->civicrm_amount."€ ";
$o .= $row->civicrm_contribution_type==="Fördermitglied" ? t("recurring donation from")." " : t("donation from")." ";
$o .= $row->option_not_anonymous==="yes" ? $row->personal_firstname." ".$row->personal_lastname : t("anonymous");
return $o;';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Zeitpunkt';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php_1']['php_setup'] = 'function tts($ptime)
{
    $etime = time() - $ptime;

    if ($etime < 1)
    {
        return \'0 seconds\';
    }

    $a = array( 12 * 30 * 24 * 60 * 60  =>  \'year\',
                30 * 24 * 60 * 60       =>  \'month\',
                24 * 60 * 60            =>  \'day\',
                60 * 60                 =>  \'hour\',
                60                      =>  \'minute\',
                1                       =>  \'second\'
                );

    foreach ($a as $secs => $str)
    {
        $d = $etime / $secs;
        if ($d >= 1)
        {
            $r = round($d);
            return $r . \' \' . $str . ($r > 1 ? \'s\' : \'\') . \' ago\';
        }
    }
}';
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return t(tts(date($row->submitted_1)));';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['letzte_spender'] = $view;

  return $export;
}
