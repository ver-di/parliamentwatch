<?php
/**
 * @file
 * pw_diff_tracking.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function pw_diff_tracking_default_rules_configuration() {
  $items = array();
  $items['rules_user_changed'] = entity_import('rules_config', '{ "rules_user_changed" : {
      "LABEL" : "Account updated",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_update" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "181527986" : "181527986" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "Account [account:field-user-fname] [account:field-user-lname] updated",
            "message" : "UUID: [account:uuid]\\r\\nUID: [account:uid]\\r\\nName: [account:field-user-fname] [account:field-user-lname]\\r\\nE-Mail: [account:mail]\\r\\nURL: [account:url]\\r\\nEdit: [account:edit-url]\\r\\n\\r\\nDIFFs\\r\\n+++++++++++++++++++++++++++++++++++\\r\\n[account:diff]\\r\\n+++++++++++++++++++++++++++++++++++",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
