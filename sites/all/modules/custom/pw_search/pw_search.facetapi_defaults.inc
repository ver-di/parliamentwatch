<?php
/**
 * @file
 * pw_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function pw_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr::im_field_user_constituency';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = '';
  $facet->facet = 'im_field_user_constituency';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '0',
    'query_type' => 'term',
  );
  $export['apachesolr@solr::im_field_user_constituency'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr:block:im_field_user_constituency';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = 'block';
  $facet->facet = 'im_field_user_constituency';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'rewrite_items' => array(
        'status' => 1,
        'weight' => '-48',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'indexed' => 'indexed',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'indexed' => '-48',
      'display' => '-47',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'indexed' => '4',
      'display' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'managed_content',
    ),
    'submit_realm' => 'Speichern und zur Bereichskonfiguration zurückgehen',
  );
  $export['apachesolr@solr:block:im_field_user_constituency'] = $facet;

  return $export;
}
