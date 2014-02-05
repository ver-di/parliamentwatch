<?php
/**
 * @file
 * pw_eu_frontpage.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function pw_eu_frontpage_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'10485\',
      \'uid\' => \'24952\',
      \'title\' => \'EU Wahlen 2014\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e14ad95f-b3ef-47d6-8f19-ec6ba580883e\',
      \'ds_switch\' => \'\',
      \'nid\' => \'10452\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1391549922\',
      \'changed\' => \'1391550119\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f02e308d-8272-47bf-b631-8635b8d7cdbd\',
      \'revision_timestamp\' => \'1391616077\',
      \'revision_uid\' => \'24952\',
      \'body\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'translations\' => (object) array(
          \'original\' => \'und\',
          \'data\' => array(
            \'und\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'10452\',
              \'language\' => \'und\',
              \'source\' => \'\',
              \'uid\' => \'24952\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1391512160\',
              \'changed\' => \'1391549922\',
            ),
          ),
        ),
      \'webform\' => array(
        \'confirmation\' => \'\',
        \'confirmation_format\' => NULL,
        \'redirect_url\' => \'<confirmation>\',
        \'teaser\' => \'0\',
        \'block\' => \'0\',
        \'allow_draft\' => \'0\',
        \'auto_save\' => \'0\',
        \'submit_notice\' => \'1\',
        \'submit_text\' => \'\',
        \'submit_limit\' => \'-1\',
        \'submit_interval\' => \'-1\',
        \'total_submit_limit\' => \'-1\',
        \'total_submit_interval\' => \'-1\',
        \'status\' => \'1\',
        \'record_exists\' => FALSE,
        \'roles\' => array(
          \'1\',
          \'2\',
        ),
        \'emails\' => array(),
        \'components\' => array(),
      ),
      \'signature\' => \'\',
      \'spaminess\' => 0,
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1391608706\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'submenutree_enable\' => \'0\',
      \'submenutree_title\' => \'\',
      \'submenutree_display\' => \'2\',
      \'submenutree_weight\' => \'0\',
      \'siblingmenutree_enable\' => \'0\',
      \'siblingmenutree_title\' => \'\',
      \'siblingmenutree_display\' => \'0\',
      \'siblingmenutree_weight\' => \'0\',
      \'name\' => \'ruth\',
      \'picture\' => \'0\',
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'weight_weight\' => FALSE,
      \'path\' => array(
        \'pid\' => \'79348\',
        \'source\' => \'node/10452\',
        \'alias\' => \'parlamente/eu\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
