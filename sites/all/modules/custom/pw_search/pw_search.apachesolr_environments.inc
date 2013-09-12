<?php
/**
 * @file
 * pw_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function pw_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'solr.pwsrv.org';
  $environment->url = 'http://localhost:8983/solr/collection1';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'comment' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'i18n_translation' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1377246239',
        'last_entity_id' => '10811',
      ),
      'redirect' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'search_api_server' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'search_api_index' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'file' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'rules_config' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1377246257,
    'apachesolr_last_optimize' => 1377240409,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '0:0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'article' => '0',
      'page' => '0',
      'user' => '21.0',
      'blogpost' => '0',
      'calendar_entry' => '0',
      'dialogue' => '0',
      'migrate_extras_media_example' => '0',
      'migrate_example_pathauto' => '0',
      'pw_poll' => '0',
      'press_release' => '0',
      'press_article' => '0',
      'slider_item' => '0',
      'trustee' => '0',
      'poll' => '0',
      'election_programme' => '0',
      'webform' => '0',
    ),
    'field_bias' => array(
      'content' => '1.0',
      'label' => '5.0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'ts_comments' => '0.5',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'dialogue',
    ),
    'user' => array(
      0 => 'user',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
