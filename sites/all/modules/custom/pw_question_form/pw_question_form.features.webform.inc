<?php
/**
 * @file
 * pw_question_form.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function pw_question_form_webform_defaults() {
$webforms = array();
  $webforms['frage_stellen'] = array(
  'title' => 'Frage stellen',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'b6b2b1a7-f59e-46cb-82c6-0ea44aa8a246',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '451cb368-988c-4b6d-8f8c-0b36031901ca',
  'body' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'translations' => array(
    'original' => 'und',
    'data' => array(
      'und' => array(
        'entity_type' => 'node',
        'entity_id' => '10446',
        'language' => 'und',
        'source' => '',
        'uid' => '1',
        'status' => '1',
        'translate' => '0',
        'created' => '1391509598',
        'changed' => '1391509598',
      ),
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => 'managed_content',
    'redirect_url' => 'frage-stellen/vielen-dank',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => 'Frage abschicken',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'webform_ajax' => '1',
    'machine_name' => 'frage_stellen',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(),
    'components' => array(
      'frage_stellen__firstname' => array(
        'form_key' => 'firstname',
        'name' => 'Vorname',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '0',
        'machine_name' => 'frage_stellen__firstname',
        'page_num' => 1,
      ),
      'frage_stellen__lastname' => array(
        'form_key' => 'lastname',
        'name' => 'Nachname',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '1',
        'machine_name' => 'frage_stellen__lastname',
        'page_num' => 1,
      ),
      'frage_stellen__email' => array(
        'form_key' => 'email',
        'name' => 'E-Mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '2',
        'machine_name' => 'frage_stellen__email',
        'page_num' => 1,
      ),
      'frage_stellen__option_newsletter' => array(
        'form_key' => 'option_newsletter',
        'name' => 'Newsletter',
        'type' => 'select',
        'value' => 'yes',
        'extra' => array(
          'items' => 'yes|Ja, ich möchte den Newsletter von abgeordnetenwatch.de abonnieren',
          'multiple' => 1,
          'title_display' => 'none',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '3',
        'machine_name' => 'frage_stellen__option_newsletter',
        'page_num' => 1,
      ),
      'frage_stellen__residence' => array(
        'form_key' => 'residence',
        'name' => 'Wohnort',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '4',
        'machine_name' => 'frage_stellen__residence',
        'page_num' => 1,
      ),
      'frage_stellen__subject' => array(
        'form_key' => 'subject',
        'name' => 'Thema',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'tid_4281|Administration
tid_1506|Agriculture and Environment
tid_7050|Arbeit
tid_7053|Bildung und Forschung
tid_6489|Children
tid_6493|Culture
tid_7047|Demokratie und Bürgerrechte
tid_6490|Education
tid_6491|Education and Social Protection
tid_6485|Employment, Business
tid_6486|Finance
tid_6495|Foreign Policy
tid_7045|Gesundheit
tid_6492|Government Procedure
tid_3|Health
tid_4|Healthcare Policy
tid_7052|Integration
tid_7051|Internationales
tid_6482|Investigations and Petitions
tid_2395|Justice and Security
tid_6494|North/South Relations
tid_6488|Privileges
tid_6484|Procedure
tid_7048|Sicherheit
tid_6487|Social Welfare
tid_7049|Soziales
tid_7046|Städtebau und Stadtentwicklung
tid_6483|Transport, Communications
',
          'options_source' => 'vid_26',
          'multiple' => 0,
          'title_display' => 'none',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '5',
        'machine_name' => 'frage_stellen__subject',
        'page_num' => 1,
      ),
      'frage_stellen__question' => array(
        'form_key' => 'question',
        'name' => 'Frage',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'Ihre Frage darf 2000 Zeichen nicht überschreiten.',
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'cols' => '',
          'rows' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '6',
        'machine_name' => 'frage_stellen__question',
        'page_num' => 1,
      ),
      'frage_stellen__text_codex' => array(
        'form_key' => 'text_codex',
        'name' => 'Hinweis Moderations-Codex',
        'type' => 'markup',
        'value' => '<?php
drupal_add_library(\'system\', \'drupal.collapse\');
drupal_add_library(\'system\', \'drupal.form\');
?>	
<div>Die Freischaltung von Fragen kann je nach Nutzeraufkommen u.U. einige Stunden dauern, da alle eingehenden Fragen von einem Moderatorenteam überprüft werden. Ich habe den Moderations-Codex gelesen und sichergestellt, dass meine Frage nicht gegen diesen verstößt. <br/>
<fieldset class="collapsible collapsed form-wrapper push-bottom-m">
    <legend>
        <span class="fieldset-legend">Moderations-Codex anzeigen</span>
    </legend>
    <div class="fieldset-wrapper comment">
        <div class="content-inner">
        <?php
             = node_load(7734);
             = [][0][\'value\'];
            print ;
        ?>
        </div>
    </div>
</fieldset>
</div>
<div>
Falls meine Frage nicht freigeschaltet werden kann, werde ich darüber von einem Moderator informiert. Aus Gründen der Rechtssicherheit wird Ihre IP-Adresse gespeichert, aber nicht veröffentlicht oder an Dritte weitergegeben. Weitere Informationen erhalten Sie in unserer
<fieldset class="collapsible collapsed form-wrapper push-bottom-m">
    <legend>
        <span class="fieldset-legend">Datenschutzerklärung</span>
    </legend>
    <div class="fieldset-wrapper comment">
        <div class="content-inner">
        <?php
             = node_load(10006);
             = [][0][\'value\'];
            print ;
        ?>
        </div>
    </div>
</fieldset>
</div>



</div>',
        'extra' => array(
          'format' => 'php_code',
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '7',
        'machine_name' => 'frage_stellen__text_codex',
        'page_num' => 1,
      ),
      'frage_stellen__node_path' => array(
        'form_key' => 'node_path',
        'name' => 'Node Path',
        'type' => 'hidden',
        'value' => '%get[q]',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '8',
        'machine_name' => 'frage_stellen__node_path',
        'page_num' => 1,
      ),
      'frage_stellen__status' => array(
        'form_key' => 'status',
        'name' => 'Status',
        'type' => 'hidden',
        'value' => 'subscribed',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '9',
        'machine_name' => 'frage_stellen__status',
        'page_num' => 1,
      ),
    ),
  ),
  'signature' => '',
  'spaminess' => 0,
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '0',
  'comment_count' => '0',
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => '',
  'picture' => '0',
  'data' => NULL,
  'weight_weight' => FALSE,
  'webform_features_author' => '',
  'webform_features_revision_author' => '',
);
return $webforms;
}
