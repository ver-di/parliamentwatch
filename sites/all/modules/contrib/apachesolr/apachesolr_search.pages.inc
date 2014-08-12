<?php

/**
 * @file
 *   Provides the page callback for user defined search pages.
 */

/**
 * Returns search results on user defined search pages.
 */
function apachesolr_search_custom_page($page_id, $keys = '', $path_replacer = NULL) {
  $search_page = apachesolr_search_page_load($page_id);
  if (empty($search_page)) {
    drupal_set_message(t('This search page cannot be found'), 'error');
    return drupal_not_found();
  }
  // Add our replacement value in the conditions array
  if (!empty($path_replacer)) {
    $search_page['settings']['apachesolr_search_path_replacer'] = $path_replacer;
  }
  // Replace dynamic path with current path
  $search_page['search_path'] = str_replace('%', $path_replacer, $search_page['search_path']);
  // Retrieve the conditions that apply to this page
  $conditions = apachesolr_search_conditions_default($search_page);
  // Process our keys so they are clean
  $keys = rawurldecode($keys);
  // Retrieve the results of the search
  // $results = apachesolr_search_search_results($keys, $conditions, $search_page);
  $results = apachesolr_search_search_results(ltrim($keys, '0'), $conditions, $search_page); //Extremely quick + dirty fix for PLZ search
  // Initiate our build array
  $build = array();
  // Add a custom search form if required
  if (!empty($search_page['settings']['apachesolr_search_search_box'])) {
    // Adds the search form to the page.
    $build['search_form'] = drupal_get_form('apachesolr_search_custom_page_search_form', $search_page, $keys);
  }
  // Build our page and allow modification.
  //  var_dump($results);
  $build_results = apachesolr_search_search_page_custom($results, $search_page, $build);
  //  $foo = taxonomy_get_vocabularies();
  //  $bar = featured_content_get_vocadbulary_terms($foo["14"]);
  //  var_dump($bar);
if (isset($keys) && preg_match("@^\d{4,5}$@",$keys)) {
    $tid_array = array();
    foreach ($build_results["search_results"]["search_results"] as $ccid){
        $tid = $ccid["#account"]->field_user_constituency["und"]["0"]["tid"];
        if (!in_array($tid,$tid_array)) $tid_array[] = $tid;
    }
    $tid_array = array_filter($tid_array);
}

    if ( sizeof($tid_array) > 1 &&
         isset($keys) && preg_match("@^\d{4,5}$@",$keys)){ //RegEx-Bedingung für PLZ
        $const_names = taxonomy_term_load_multiple($tid_array);

        $style="background: #f4f4f4;
border: 1px solid #dedede;
-webkit-border-radius: 3px;
-moz-border-radius: 3px;
border-radius: 3px;
-webkit-box-shadow: 0px 0px 4px 1px #ebebeb;
-moz-box-shadow: 0px 0px 4px 1px #ebebeb;
box-shadow: 0px 0px 4px 1px #ebebeb;
padding: 10px;
margin-top:-25px;
margin-bottom:20px";

        $box = "<div class='search-form compact-form' style='".$style."'> <b>Diese Postleitzahl fällt in mehrere Wahlkreise, bitte wählen Sie aus den folgenden Möglichkeiten:</b>\n";
        foreach($const_names as $const){
            $parliament_term = taxonomy_term_load($const->field_parliament["und"]["0"]["tid"]);
            $parliament_name = strtolower($parliament_term->name);
            if ($parliament_name == "thüringen") $parliament_name = "thueringen";

            if ($parliament_name == "sachsen" || $parliament_name == "thueringen" || $parliament_name == "brandenburg")
            $box .= "<li> <a href='/".$parliament_name."/profile?field_user_constituency_tid=".$const->tid."'>".$const->name."</a>\n";
        }
        $box .= "</div>\n";
    }
    $build_results["search_results"]["search_title"]["#markup"] = $box.$build_results["search_results"]["search_title"]["#markup"];

  return $build_results;
}

/**
 * Search for placed on user defined search pages.
 */
function apachesolr_search_custom_page_search_form($form, &$form_state, $search_page, $keys = '') {
  // Loads the core Search CSS file, use the core search module's classes.
  drupal_add_css(drupal_get_path('module', 'search') . '/search.css');

  $form = array();
  $form['#id'] = 'search-form';
  $form['#attributes']['class'][] = 'search-form';
  $form['#search_page'] = $search_page;
  $form['basic'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('container-inline')),
  );
  $form['basic']['keys'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter terms'),
    '#default_value' => $keys,
    '#size' => 20,
    '#maxlength' => 255,
  );
  $form['basic']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
  );

  $form['basic']['get'] = array(
    '#type' => 'hidden',
    '#default_value' => json_encode(array_diff_key($_GET, array('q' => 1, 'page' => 1, 'solrsort' => 1, 'retain-filters' => 1))),
  );

  $fq = NULL;

  if (apachesolr_has_searched($search_page['env_id'])) {
    $query = apachesolr_current_query($search_page['env_id']);
    // We use the presence of filter query params as a flag for the retain filters checkbox.
    $fq = $query->getParam('fq');
  }

  if ($fq || isset($form_state['input']['retain-filters'])) {
    $form['basic']['retain-filters'] = array(
      '#type' => 'checkbox',
      '#title' => t('Retain current filters'),
      '#default_value' => (int) !empty($_GET['retain-filters']),
    );
  }
  return $form;
}

/**
 * Processes apachesolr_search_custom_page_search_form submissions.
 */
function apachesolr_search_custom_page_search_form_submit(&$form, &$form_state) {
  $search_page = $form['#search_page'];
  $redirect = $search_page['search_path'];

  // Also encode slashes so we don't get akward situations when obtaining the
  // search key. We can't use drupal_encode_path because for "aestetic" reasons
  // they don't encode slashes...
  $redirect_value = rawurlencode($form_state['values']['keys']);

  if (strlen($form_state['values']['keys'])) {
    $redirect .= '/' . $redirect_value;
  }

  $get = array();
  if (isset($form_state['values']['get'])) {
    $get = json_decode($form_state['values']['get'], TRUE);
  }
  if (!empty($form_state['values']['retain-filters'])) {
    // Add our saved values
    $get['retain-filters'] = '1';
  }
  else {
    // Remove all filters
    if (!empty($search_page['settings']['apachesolr_search_allow_user_input'])) {
      unset($get['fq']);
    }
    if (module_exists('facetapi')) {
      unset($get['f']);
    }
  }

  // Add the query values into the redirect.
  $form_state['redirect'] = array($redirect, array('query' => $get));
}
