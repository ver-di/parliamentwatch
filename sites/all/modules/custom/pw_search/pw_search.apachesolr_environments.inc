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
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1404140655',
        'last_entity_id' => '21544',
      ),
    ),
    'apachesolr_index_updated' => 0,
    'apachesolr_last_optimize' => 1404292090,
    'apachesolr_multilingual_index_settings' => array(
      'apachesolr_multilingual_index' => 0,
      'apachesolr_multilingual_map_language_neutral' => 'und',
      'apachesolr_multilingual_clir' => array(
        'apachesolr_multilingual_index_translations' => 0,
        'apachesolr_multilingual_index_unpublished_translations' => 0,
        'apachesolr_multilingual_index_term_translations' => 0,
      ),
    ),
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '0:0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'announcement' => '0',
      'article' => '0',
      'user' => '21.0',
      'blogpost' => '0',
      'calendar_entry' => '0',
      'dialogue' => '0',
      'page' => '0',
      'pw_kc_position' => '0',
      'pw_kc_thesis' => '0',
      'migrate_extras_media_example' => '0',
      'migrate_example_pathauto' => '0',
      'pw_poll' => '0',
      'pw_petition' => '0',
      'press_release' => '0',
      'press_article' => '2.0',
      'pw_slider' => '0',
      'trustee' => '0',
      'poll' => '0',
      'election_programme' => '0',
      'webform' => '0',
    ),
    'apachesolr_soft_commit' => 0,
    'field_bias' => array(
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'ds_last_comment_timestamp' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_dialogue_tags' => '0',
      'im_field_dialogue_topic' => '0',
      'im_field_parliament' => '0',
      'im_field_pw_parmliament' => '0',
      'im_field_user_parliament' => '0',
      'im_field_user_party' => '0',
      'im_vid_18' => '0',
      'im_vid_25' => '0',
      'im_vid_26' => '0',
      'is_comment_count' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'is_weight' => '0',
      'label' => '0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_vid_Dialogue_tags' => '0',
      'sm_vid_Dialogue_topics' => '0',
      'sm_vid_Parliaments' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_vid_18_names' => '0',
      'tm_vid_25_names' => '0',
      'tm_vid_26_names' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0.5',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'blogpost',
      1 => 'dialogue',
      2 => 'press_article',
    ),
    'user' => array(
      0 => 'user',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
