<?php
/**
 * @file
 * pw_solr_search_settings.features.inc
 */

/**
 * Implements hook_views_api().
 */
function pw_solr_search_settings_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function pw_solr_search_settings_default_search_api_index() {
  $items = array();
  $items['pw_node_solr'] = entity_import('search_api_index', '{
    "name" : "pw_node_solr",
    "machine_name" : "pw_node_solr",
    "description" : null,
    "server" : null,
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "type" : "integer" },
        "vid" : { "type" : "integer" },
        "type" : { "type" : "string" },
        "title" : { "type" : "text" },
        "language" : { "type" : "string" },
        "url" : { "type" : "uri" },
        "edit_url" : { "type" : "uri" },
        "status" : { "type" : "integer" },
        "promote" : { "type" : "boolean" },
        "sticky" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "source" : { "type" : "integer", "entity_type" : "node" },
        "log" : { "type" : "text" },
        "revision" : { "type" : "boolean" },
        "comment" : { "type" : "integer" },
        "comment_count" : { "type" : "integer" },
        "comment_count_new" : { "type" : "integer" },
        "feed_nid" : { "type" : "integer" },
        "uuid" : { "type" : "text" },
        "vuuid" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_dialogue_id" : { "type" : "integer" },
        "field_dialogue_message_id" : { "type" : "integer" },
        "field_dialogue_message_type" : { "type" : "string" },
        "field_dialogue_recipient" : { "type" : "integer", "entity_type" : "user" },
        "field_dialogue_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_dialogue_topic" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_dialogue_sender_name" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "search_api_viewed" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "body:summary" : { "type" : "text" },
        "body:format" : { "type" : "string" },
        "field_image:file" : { "type" : "integer", "entity_type" : "file" },
        "field_image:alt" : { "type" : "text" },
        "field_image:file:fid" : { "type" : "integer" },
        "field_image:file:name" : { "type" : "text" },
        "field_image:file:mime" : { "type" : "text" },
        "field_image:file:size" : { "type" : "integer" },
        "field_image:file:url" : { "type" : "text" },
        "field_image:file:timestamp" : { "type" : "date" },
        "field_image:file:owner" : { "type" : "integer", "entity_type" : "user" },
        "field_image:file:type" : { "type" : "string" },
        "field_image:file:uuid" : { "type" : "text" },
        "field_image:file:field_image_copyright" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_language_control" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "log" : true,
              "uuid" : true,
              "vuuid" : true,
              "field_dialogue_sender_name" : true,
              "field_image:alt" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "log" : true,
              "uuid" : true,
              "vuuid" : true,
              "field_dialogue_sender_name" : true,
              "field_image:alt" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "log" : true,
              "uuid" : true,
              "vuuid" : true,
              "field_dialogue_sender_name" : true,
              "field_image:alt" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "log" : true,
              "uuid" : true,
              "vuuid" : true,
              "field_dialogue_sender_name" : true,
              "field_image:alt" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "0",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  $items['pw_user_solr'] = entity_import('search_api_index', '{
    "name" : "pw_user_solr",
    "machine_name" : "pw_user_solr",
    "description" : null,
    "server" : "pw_solr_stage_apachesolr",
    "item_type" : "user",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "uid" : { "type" : "integer" },
        "name" : { "type" : "text" },
        "url" : { "type" : "uri" },
        "edit_url" : { "type" : "uri" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "language" : { "type" : "string" },
        "vid" : { "type" : "integer" },
        "field_user_answers_give" : { "type" : "integer" },
        "field_user_childs" : { "type" : "integer" },
        "field_user_commitee" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_user_constituency" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_user_fname" : { "type" : "text" },
        "field_user_gender" : { "type" : "string" },
        "field_user_job_skills" : { "type" : "text" },
        "field_user_lname" : { "type" : "text" },
        "field_user_marriage_status" : { "type" : "string" },
        "field_user_parliament" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_user_party" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_user_pseudonym" : { "type" : "text" },
        "field_user_first_letter_lname" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "search_api_viewed" : { "type" : "text" },
        "field_user_constituency:field_committee_vice_chairman" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "user" },
        "field_user_constituency:field_parliament" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_user_constituency:field_voc_constituency_zip" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_user_picture:file" : { "type" : "integer", "entity_type" : "file" },
        "field_user_constituency:field_voc_constituency_zip:name" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_user_constituency:field_voc_constituency_zip:field_voc_constituency_zip" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        }
      },
      "data_alter_callbacks" : {
        "search_api_alter_language_control" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_user_fname" : true,
              "field_user_lname" : true,
              "field_user_first_letter_lname" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_user_fname" : true,
              "field_user_lname" : true,
              "field_user_first_letter_lname" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_user_fname" : true,
              "field_user_lname" : true,
              "field_user_first_letter_lname" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_user_fname" : true,
              "field_user_lname" : true,
              "field_user_first_letter_lname" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function pw_solr_search_settings_default_search_api_server() {
  $items = array();
  $items['pw_solr_stage_apachesolr'] = entity_import('search_api_server', '{
    "name" : "pw-solr-stage-apachesolr",
    "machine_name" : "pw_solr_stage_apachesolr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "host" : "stage1.abgeordnetenwatch.de",
      "port" : "8983",
      "path" : "\\/solr\\/sapi",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
