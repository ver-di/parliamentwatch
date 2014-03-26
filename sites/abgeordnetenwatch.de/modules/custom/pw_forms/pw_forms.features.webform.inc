<?php
/**
 * @file
 * pw_forms.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function pw_forms_webform_defaults() {
$webforms = array();
  $webforms['_nderung_fehler_mitteilen_'] = array(
  'title' => 'Änderung/Fehler mitteilen:',
  'log' => '',
  'status' => '0',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '994bb01c-ac3e-425f-b75e-4bf2afc8c944',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'fcf53e15-deca-4555-a47e-c65f1e4fa73f',
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
        'entity_id' => '10386',
        'language' => 'und',
        'source' => '',
        'uid' => '1344',
        'status' => '0',
        'translate' => '0',
        'created' => '1389887010',
        'changed' => '1389887010',
      ),
    ),
  ),
  'webform' => array(
    'confirmation' => '<p>
	Herzlichen Dank für Ihren Hinweis. Wir nehmen die Änderung in Kürze vor.
</p>
',
    'confirmation_format' => 'managed_content',
    'redirect_url' => '<confirmation>',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '1',
    'submit_text' => 'Abschicken',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'webform_ajax' => '0',
    'machine_name' => '_nderung_fehler_mitteilen_',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(
      0 => array(
        'email' => 'kommune@abgeordnetenwatch.de',
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => '0',
        'attachments' => '0',
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'profilerweiterung_buchen__ihre_daten' => array(
        'form_key' => 'stadt',
        'name' => 'Stadt',
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
        'machine_name' => 'profilerweiterung_buchen__ihre_daten',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__user_uuid' => array(
        'form_key' => 'politiker_in',
        'name' => 'Politiker/in',
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
        'machine_name' => 'profilerweiterung_buchen__user_uuid',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__constituency' => array(
        'form_key' => 'was_hat_sich_geaendert',
        'name' => 'Was hat sich geändert?',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '2',
        'machine_name' => 'profilerweiterung_buchen__constituency',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__party' => array(
        'form_key' => 'datum_der_aenderung',
        'name' => 'Datum der Änderung',
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
        'weight' => '3',
        'machine_name' => 'profilerweiterung_buchen__party',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__anrede' => array(
        'form_key' => 'ihr_name',
        'name' => 'Ihr Name',
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
        'machine_name' => 'profilerweiterung_buchen__anrede',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__vorname' => array(
        'form_key' => 'ihre_mailadresse_fuer_rueckfragen',
        'name' => 'Ihre Mailadresse (für Rückfragen)',
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
        'weight' => '5',
        'machine_name' => 'profilerweiterung_buchen__vorname',
        'page_num' => 1,
      ),
    ),
  ),
  'signature' => '',
  'spaminess' => 0,
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1344',
  'comment_count' => '0',
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => 'roman',
  'picture' => '0',
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'weight_weight' => FALSE,
  'webform_features_author' => 'roman',
  'webform_features_revision_author' => '',
);
  $webforms['feedback'] = array(
  'title' => 'Feedback',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '5d3c565f-6737-48aa-814f-8a2f00d168fe',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '0f77bf60-ac14-40af-ad7e-b92912fabde1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Sie möchten uns eine Nachricht zukommen lassen? Geben Sie Ihren Text hier in das Formular ein. Wir freuen uns über jedes Feedback und hoffen abgeordnetenwatch.de so noch besser gestalten zu können.
</p>
',
        'summary' => '',
        'format' => 'managed_content',
        'safe_value' => '<p>
	Sie möchten uns eine Nachricht zukommen lassen? Geben Sie Ihren Text hier in das Formular ein. Wir freuen uns über jedes Feedback und hoffen abgeordnetenwatch.de so noch besser gestalten zu können.
</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
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
        'entity_id' => '6313',
        'language' => 'und',
        'source' => '',
        'uid' => '1',
        'status' => '1',
        'translate' => '0',
        'created' => '1368714870',
        'changed' => '1368714870',
      ),
    ),
  ),
  'webform' => array(
    'confirmation' => '<div class="messages status">
	Herzlichen Dank für Ihre Nachricht an abgeordnetenwatch.de!
</div>
',
    'confirmation_format' => 'managed_content',
    'redirect_url' => '<confirmation>',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '0',
    'submit_text' => 'Abschicken',
    'submit_limit' => '20',
    'submit_interval' => '3600',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'webform_ajax' => '0',
    'machine_name' => 'feedback',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(
      0 => array(
        'email' => 'info@abgeordnetenwatch.de',
        'subject' => 'default',
        'from_name' => 'profilerweiterung_buchen__constituency',
        'from_address' => 'profilerweiterung_buchen__ihre_daten',
        'template' => 'Abgeschickt am %date
von der IP %ip_address

Übertragene Daten:
%email_values

Folgender Browser wurde benutzt:
%value[user_agent]

Das Kontaktformular wurde abgeschickt von der Seite:
%value[referrer]

Gegebenenfalls bezieht es sich von dort auf einen bestimmten Artikel:
[site:url]node/%value[refnid]

Alle eingegangenen Nachrichten findest du hier:
%submission_url',
        'excluded_components' => array(),
        'html' => '0',
        'attachments' => '0',
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => TRUE,
          'from_address' => TRUE,
        ),
      ),
    ),
    'components' => array(
      'profilerweiterung_buchen__constituency' => array(
        'form_key' => 'ihr_name',
        'name' => 'Ihr Name',
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
        'weight' => '2',
        'machine_name' => 'profilerweiterung_buchen__constituency',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__ihre_daten' => array(
        'form_key' => 'ihre_e_mail_adresse',
        'name' => 'Ihre E-Mail-Adresse',
        'type' => 'email',
        'value' => '%useremail',
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
        'weight' => '3',
        'machine_name' => 'profilerweiterung_buchen__ihre_daten',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__user_uuid' => array(
        'form_key' => 'ihre_nachricht_an_uns',
        'name' => 'Ihre Nachricht an uns',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '4',
        'machine_name' => 'profilerweiterung_buchen__user_uuid',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__party' => array(
        'form_key' => 'referrer',
        'name' => 'Referrer',
        'type' => 'hidden',
        'value' => '%server[HTTP_REFERER]',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '5',
        'machine_name' => 'profilerweiterung_buchen__party',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__anrede' => array(
        'form_key' => 'refnid',
        'name' => 'refnid',
        'type' => 'hidden',
        'value' => '%get[url]',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '6',
        'machine_name' => 'profilerweiterung_buchen__anrede',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__vorname' => array(
        'form_key' => 'user_agent',
        'name' => 'User agent',
        'type' => 'hidden',
        'value' => '%server[HTTP_USER_AGENT]',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '7',
        'machine_name' => 'profilerweiterung_buchen__vorname',
        'page_num' => 1,
      ),
    ),
  ),
  'signature' => '',
  'spaminess' => 0,
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => 'root',
  'picture' => '0',
  'data' => 'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:17:"mimemail_textonly";i:0;s:7:"overlay";i:1;}',
  'weight_weight' => '0',
  'webform_features_author' => 'root',
  'webform_features_revision_author' => '',
);
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
      'profilerweiterung_buchen__ihre_daten' => array(
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
        'machine_name' => 'profilerweiterung_buchen__ihre_daten',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__user_uuid' => array(
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
        'machine_name' => 'profilerweiterung_buchen__user_uuid',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__constituency' => array(
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
        'machine_name' => 'profilerweiterung_buchen__constituency',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__nachname' => array(
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
        'machine_name' => 'profilerweiterung_buchen__nachname',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__party' => array(
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
        'machine_name' => 'profilerweiterung_buchen__party',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__anrede' => array(
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
        'machine_name' => 'profilerweiterung_buchen__anrede',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__vorname' => array(
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
        'machine_name' => 'profilerweiterung_buchen__vorname',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__strasse_hausnummer' => array(
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
        'machine_name' => 'profilerweiterung_buchen__strasse_hausnummer',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__plz' => array(
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
        'machine_name' => 'profilerweiterung_buchen__plz',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__stadt' => array(
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
        'machine_name' => 'profilerweiterung_buchen__stadt',
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
  'name' => 'root',
  'picture' => '0',
  'data' => 'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:17:"mimemail_textonly";i:0;s:7:"overlay";i:1;}',
  'weight_weight' => FALSE,
  'webform_features_author' => 'root',
  'webform_features_revision_author' => 'root',
);
  $webforms['kontakt'] = array(
  'title' => 'Kontakt',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '5d3c565f-6737-48aa-814f-8a2f00d168fe',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '2043edea-d674-4195-a18b-a9f1a2afbdb7',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	Sie möchten uns eine Nachricht zukommen lassen? Geben Sie Ihren Text hier in das Formular ein. Wir freuen uns über jedes Feedback und hoffen abgeordnetenwatch.de so noch besser gestalten zu können.
</p>
',
        'summary' => '',
        'format' => 'managed_content',
        'safe_value' => '<p>
	Sie möchten uns eine Nachricht zukommen lassen? Geben Sie Ihren Text hier in das Formular ein. Wir freuen uns über jedes Feedback und hoffen abgeordnetenwatch.de so noch besser gestalten zu können.
</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
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
        'entity_id' => '6578',
        'language' => 'und',
        'source' => '',
        'uid' => '1',
        'status' => '1',
        'translate' => '0',
        'created' => '1368714870',
        'changed' => '1368785063',
      ),
    ),
  ),
  'webform' => array(
    'confirmation' => '<div class="messages status">
	Herzlichen Dank für Ihre Nachricht an abgeordnetenwatch.de!
</div>
',
    'confirmation_format' => 'managed_content',
    'redirect_url' => '<confirmation>',
    'status' => '1',
    'block' => '1',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '0',
    'submit_text' => 'Abschicken',
    'submit_limit' => '20',
    'submit_interval' => '3600',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'webform_ajax' => '0',
    'machine_name' => 'kontakt',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(
      0 => array(
        'email' => 'info@abgeordnetenwatch.de',
        'subject' => 'default',
        'from_name' => 'profilerweiterung_buchen__constituency',
        'from_address' => 'profilerweiterung_buchen__ihre_daten',
        'template' => 'Abgeschickt am %date
von der IP %ip_address

Übertragene Daten:
%email_values

Das Kontaktformular wurde abgeschickt von der Seite:
%value[referrer]

Gegebenenfalls bezieht es sich von dort auf einen bestimmten Artikel:
[site:url]node/%value[refnid]

Alle eingegangenen Nachrichten findest du hier:
%submission_url',
        'excluded_components' => array(),
        'html' => '0',
        'attachments' => '0',
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => TRUE,
          'from_address' => TRUE,
        ),
      ),
    ),
    'components' => array(
      'profilerweiterung_buchen__constituency' => array(
        'form_key' => 'ihr_name',
        'name' => 'Ihr Name',
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
        'weight' => '2',
        'machine_name' => 'profilerweiterung_buchen__constituency',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__ihre_daten' => array(
        'form_key' => 'ihre_e_mail_adresse',
        'name' => 'Ihre E-Mail-Adresse',
        'type' => 'email',
        'value' => '%useremail',
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
        'weight' => '3',
        'machine_name' => 'profilerweiterung_buchen__ihre_daten',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__user_uuid' => array(
        'form_key' => 'ihre_nachricht_an_uns',
        'name' => 'Ihre Nachricht an uns',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '4',
        'machine_name' => 'profilerweiterung_buchen__user_uuid',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__party' => array(
        'form_key' => 'referrer',
        'name' => 'Referrer',
        'type' => 'hidden',
        'value' => '%server[HTTP_REFERER]',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '5',
        'machine_name' => 'profilerweiterung_buchen__party',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__anrede' => array(
        'form_key' => 'refnid',
        'name' => 'refnid',
        'type' => 'hidden',
        'value' => '%get[url]',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '6',
        'machine_name' => 'profilerweiterung_buchen__anrede',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__vorname' => array(
        'form_key' => 'user_agent',
        'name' => 'User agent',
        'type' => 'hidden',
        'value' => '%server[HTTP_USER_AGENT]',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '7',
        'machine_name' => 'profilerweiterung_buchen__vorname',
        'page_num' => 1,
      ),
    ),
  ),
  'signature' => '',
  'spaminess' => 0,
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => 'root',
  'picture' => '0',
  'data' => 'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:17:"mimemail_textonly";i:0;s:7:"overlay";i:1;}',
  'weight_weight' => '0',
  'webform_features_author' => 'root',
  'webform_features_revision_author' => '',
);
  $webforms['newsletter_subscription'] = array(
  'title' => 'Newsletter Subscription',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'c1c5b786-554c-429f-ba6e-37a58a183a79',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '02763736-dab6-4d2f-9e45-87da9211d495',
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
        'entity_id' => '10380',
        'language' => 'und',
        'source' => '',
        'uid' => '1',
        'status' => '1',
        'translate' => '0',
        'created' => '1385667175',
        'changed' => '1389108721',
      ),
    ),
  ),
  'webform' => array(
    'confirmation' => '<p>
	Vielen Dank!
</p>
<p>
	Hier geht es zurück zur Homepage: www.abgeordnetenwatch.de
</p>
',
    'confirmation_format' => 'managed_content',
    'redirect_url' => '<none>',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '0',
    'submit_text' => '',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'webform_ajax' => '0',
    'machine_name' => 'newsletter_subscription',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(
      0 => array(
        'email' => 'profilerweiterung_buchen__ihre_daten',
        'subject' => 'Bitte bestätigen Sie Ihr Newsletter Abonnement',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Vielen Dank, dass Sie sich für unseren Newsletter interessieren! Der Newsletter ist kostenlos, unverbindlich und kann zu jeder Zeit abbestellt werden.

Um Ihr Abonnement zu bestätigen, klicken Sie bitte auf folgenden Aktivierungslink:
%confirm_url

Vielen Dank!

Wenn Sie den Newsletter nicht abonnieren wollen, brauchen Sie nichts zu tun.

Beste Grüße,
Ihr abgeordnetenwatch.de-Team

info@abgeordnetenwatch.de
Tel.: 040 - 317 69 10 - 26
Fax: 040 - 317 69 10 - 28

Immer auf dem Laufenden bleiben:

im Blog: http://blog.abgeordnetenwatch.de/
bei Twitter: http://www.twitter.com/a_watch
bei Facebook: https://www.facebook.com/abgeordnetenwatch.de
bei Google+: https://plus.google.com/+abgeordnetenwatch/posts
Mittelweg 12
20148 Hamburg
www.abgeordnetenwatch.de',
        'excluded_components' => array(),
        'html' => '0',
        'attachments' => '0',
        'components_machine_names' => array(
          'email' => TRUE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'profilerweiterung_buchen__ihre_daten' => array(
        'form_key' => 'e_mail',
        'name' => 'E-Mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 1,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '0',
        'machine_name' => 'profilerweiterung_buchen__ihre_daten',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__user_uuid' => array(
        'form_key' => 'status',
        'name' => 'status',
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
        'weight' => '1',
        'machine_name' => 'profilerweiterung_buchen__user_uuid',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__constituency' => array(
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
        'weight' => '2',
        'machine_name' => 'profilerweiterung_buchen__constituency',
        'page_num' => 1,
      ),
    ),
  ),
  'signature' => '',
  'spaminess' => 0,
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => 'root',
  'picture' => '0',
  'data' => 'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:17:"mimemail_textonly";i:0;s:7:"overlay";i:1;}',
  'weight_weight' => FALSE,
  'webform_features_author' => 'root',
  'webform_features_revision_author' => '',
);
  $webforms['petition_unterschreiben'] = array(
  'title' => 'Petition unterschreiben',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'b305206e-e883-4a63-85d8-606fa9c6d483',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'de',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '7480b5f4-9c09-43e8-811b-468863974a17',
  'body' => array(
    'de' => array(
      0 => array(
        'value' => '',
        'summary' => '
',
        'format' => 'managed_content',
        'safe_value' => '',
        'safe_summary' => '',
      ),
    ),
    'und' => array(
      0 => array(
        'value' => '<p>
	Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.
</p>
',
        'summary' => '<p>
	Dies ist die Zusammenfassung
</p>
',
        'format' => 'managed_content',
        'safe_value' => '<p>
	Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet.
</p>
',
        'safe_summary' => '<p>
	Dies ist die Zusammenfassung
</p>
',
      ),
    ),
  ),
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
    'original' => 'de',
    'data' => array(
      'de' => array(
        'entity_type' => 'node',
        'entity_id' => '10369',
        'language' => 'de',
        'source' => '',
        'uid' => '1',
        'status' => '1',
        'translate' => '0',
        'created' => '1385378982',
        'changed' => '1387296298',
      ),
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => 'managed_content',
    'redirect_url' => 'petitionen/vielen-dank',
    'status' => '1',
    'block' => '1',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '0',
    'submit_text' => 'Unterschreiben',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'webform_ajax' => '0',
    'machine_name' => 'petition_unterschreiben',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(
      0 => array(
        'email' => 'profilerweiterung_buchen__user_uuid',
        'subject' => 'Bitte bestätigen Sie Ihre Zeichnung!',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Hallo %value[first_name] %value[last_name],

vielen Dank, dass Sie die Petition unterstützen! Damit Ihre Unterschrift gezählt werden kann, klicken Sie bitte auf den folgenden Bestätigungslink:

%confirm_url

Gemeinsam werden wir erfolgreich sein!

Beste Grüße aus Hamburg,
Gregor Hackmack, Boris Hekele
und das abgeordnetenwatch.de-Team

Kontakt:
info@abgeordnetenwatch.de
Tel.: 040 - 317 69 10 - 26
Fax: 040 - 317 69 10 - 28

Immer auf dem Laufenden bleiben:

im Blog: http://blog.abgeordnetenwatch.de/
bei Twitter: http://www.twitter.com/a_watch
bei Facebook: https://www.facebook.com/abgeordnetenwatch.de
bei Google+: https://plus.google.com/+abgeordnetenwatch/posts
Mittelweg 12
20148 Hamburg
www.abgeordnetenwatch.de',
        'excluded_components' => array(
          0 => '13',
        ),
        'html' => '0',
        'attachments' => '0',
        'components_machine_names' => array(
          'email' => TRUE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'profilerweiterung_buchen__constituency' => array(
        'form_key' => 'prefix',
        'name' => 'Anrede',
        'type' => 'select',
        'value' => '0',
        'extra' => array(
          'items' => '0|Anrede *
mrs|Frau
mr|Herr',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '2',
        'machine_name' => 'profilerweiterung_buchen__constituency',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__ihre_daten' => array(
        'form_key' => 'first_name',
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
        'weight' => '3',
        'machine_name' => 'profilerweiterung_buchen__ihre_daten',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__party' => array(
        'form_key' => 'last_name',
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
        'weight' => '4',
        'machine_name' => 'profilerweiterung_buchen__party',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__user_uuid' => array(
        'form_key' => 'e_mail',
        'name' => 'E-Mail-Adresse',
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
        'weight' => '5',
        'machine_name' => 'profilerweiterung_buchen__user_uuid',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__anrede' => array(
        'form_key' => 'phone',
        'name' => 'Telefonnummer',
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
        'weight' => '6',
        'machine_name' => 'profilerweiterung_buchen__anrede',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__vorname' => array(
        'form_key' => 'street',
        'name' => 'Straße und Hausnummer',
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
        'weight' => '7',
        'machine_name' => 'profilerweiterung_buchen__vorname',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__nachname' => array(
        'form_key' => 'zipcode',
        'name' => 'Postleitzahl',
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
        'weight' => '8',
        'machine_name' => 'profilerweiterung_buchen__nachname',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__strasse_hausnummer' => array(
        'form_key' => 'city',
        'name' => 'Stadt',
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
        'weight' => '9',
        'machine_name' => 'profilerweiterung_buchen__strasse_hausnummer',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__plz' => array(
        'form_key' => 'country',
        'name' => 'Land',
        'type' => 'select',
        'value' => 'DE',
        'extra' => array(
          'items' => 'germany|Germany',
          'options_source' => 'countries',
          'multiple' => 0,
          'title_display' => 'before',
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
        'weight' => '10',
        'machine_name' => 'profilerweiterung_buchen__plz',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__stadt' => array(
        'form_key' => 'reason',
        'name' => 'Warum unterschreiben Sie die Petition?',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'rows' => '10',
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '11',
        'machine_name' => 'profilerweiterung_buchen__stadt',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__e_mail' => array(
        'form_key' => 'make_subscription_public',
        'name' => 'Unterschrift öffentlich machen',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'yes|Unterschrift öffentlich auf abgeordnetenwatch.de anzeigen',
          'multiple' => 1,
          'title_display' => 'none',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '12',
        'machine_name' => 'profilerweiterung_buchen__e_mail',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__telefon' => array(
        'form_key' => 'keep_me_updated',
        'name' => 'Auf dem Laufenden halten',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'yes|Bitte halten Sie mich auf dem Laufenden und informieren sie mich per Newsletter, telefonisch oder per Post.',
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
        'weight' => '14',
        'machine_name' => 'profilerweiterung_buchen__telefon',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__ihre_buchung' => array(
        'form_key' => 'datenschutz',
        'name' => 'Datenschutz',
        'type' => 'markup',
        'value' => 'Ihr Name und Ihre Kontaktdaten (sofern angegeben) werden von abgeordnetenwatch.de gespeichert und ggf. dem Adressaten der Petition überreicht. abgeordnetenwatch.de nutzt Ihre Daten nur mit Ihrer Einwilligung zu weiteren Zwecken. Sie haben die Möglichkeit, die bei abgeordnetenwatch.de über Sie gespeicherten Daten zu erfragen, korrigieren oder löschen zu lassen. Die ins Formular eingegebenen Daten werden verschlüsselt übertragen.
<a href="/datenschutzerklaerung?width=800&height=600" class="colorbox-node read-more">Datenschutzerklärung lesen</a>',
        'extra' => array(
          'conditional_operator' => '=',
          'format' => 'managed_content',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '15',
        'machine_name' => 'profilerweiterung_buchen__ihre_buchung',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__kontoinhaber_wenn_abweichend' => array(
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
        'weight' => '16',
        'machine_name' => 'profilerweiterung_buchen__kontoinhaber_wenn_abweichend',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__zahlungsart' => array(
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
        'weight' => '17',
        'machine_name' => 'profilerweiterung_buchen__zahlungsart',
        'page_num' => 1,
      ),
    ),
  ),
  'signature' => '',
  'spaminess' => 0,
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => 'root',
  'picture' => '0',
  'data' => 'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:17:"mimemail_textonly";i:0;s:7:"overlay";i:1;}',
  'weight_weight' => FALSE,
  'webform_features_author' => 'root',
  'webform_features_revision_author' => '',
);
  $webforms['profilerweiterung_buchen'] = array(
  'title' => 'Profilerweiterung buchen',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '6881491b-f571-41c4-a403-a321da9b1738',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'd6f67351-8974-4e3a-88d8-150931a45f5b',
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
        'entity_id' => '10492',
        'language' => 'und',
        'source' => '',
        'uid' => '1',
        'status' => '1',
        'translate' => '0',
        'created' => '1395757686',
        'changed' => '1395757686',
      ),
    ),
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => 'managed_content',
    'redirect_url' => '<none>',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '0',
    'submit_text' => 'Profilerweiterung buchen',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'webform_ajax' => '1',
    'machine_name' => 'profilerweiterung_buchen',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(
      0 => array(
        'email' => 'hekele@abgeordnetenwatch.de',
        'subject' => 'Profilerweiterung gebucht',
        'from_name' => 'profilerweiterung_buchen__nachname',
        'from_address' => 'profilerweiterung_buchen__e_mail',
        'template' => 'default',
        'excluded_components' => array(
          0 => '24',
          1 => '25',
          2 => '19',
        ),
        'html' => '0',
        'attachments' => '0',
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => TRUE,
          'from_address' => TRUE,
        ),
      ),
    ),
    'components' => array(
      'profilerweiterung_buchen__markup_ihre_daten' => array(
        'form_key' => 'ihre_daten',
        'name' => 'Ihre Daten',
        'type' => 'markup',
        'value' => '',
        'extra' => array(
          'format' => 'managed_content',
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '23',
        'machine_name' => 'profilerweiterung_buchen__markup_ihre_daten',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__user_uuid' => array(
        'form_key' => 'user_uuid',
        'name' => 'user_uuid',
        'type' => 'hidden',
        'value' => '%profile[uuid]',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '24',
        'machine_name' => 'profilerweiterung_buchen__user_uuid',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__parliament' => array(
        'form_key' => 'user_parliament',
        'name' => 'parliament',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '25',
        'machine_name' => 'profilerweiterung_buchen__parliament',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__constituency' => array(
        'form_key' => 'user_constituency',
        'name' => 'constituency',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '26',
        'machine_name' => 'profilerweiterung_buchen__constituency',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__party' => array(
        'form_key' => 'user_party',
        'name' => 'party',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '27',
        'machine_name' => 'profilerweiterung_buchen__party',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__anrede' => array(
        'form_key' => 'user_prefix',
        'name' => 'Anrede',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'mr|Herr
mrs|Frau',
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
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '28',
        'machine_name' => 'profilerweiterung_buchen__anrede',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__vorname' => array(
        'form_key' => 'user_first_name',
        'name' => 'Vorname',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '29',
        'machine_name' => 'profilerweiterung_buchen__vorname',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__nachname' => array(
        'form_key' => 'user_last_name',
        'name' => 'Nachname',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '30',
        'machine_name' => 'profilerweiterung_buchen__nachname',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__strasse_hausnummer' => array(
        'form_key' => 'user_address_street',
        'name' => 'Straße + Hausnummer',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '31',
        'machine_name' => 'profilerweiterung_buchen__strasse_hausnummer',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__plz' => array(
        'form_key' => 'user_address_postal_code',
        'name' => 'PLZ',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '32',
        'machine_name' => 'profilerweiterung_buchen__plz',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__stadt' => array(
        'form_key' => 'user_address_city',
        'name' => 'Stadt',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '33',
        'machine_name' => 'profilerweiterung_buchen__stadt',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__e_mail' => array(
        'form_key' => 'user_email',
        'name' => 'E-Mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '34',
        'machine_name' => 'profilerweiterung_buchen__e_mail',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__telefon' => array(
        'form_key' => 'user_phone',
        'name' => 'Telefon',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '35',
        'machine_name' => 'profilerweiterung_buchen__telefon',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__markup_ihre_buchung' => array(
        'form_key' => 'ihre_buchung',
        'name' => 'Ihre Buchung',
        'type' => 'markup',
        'value' => '',
        'extra' => array(
          'format' => 'managed_content',
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '36',
        'machine_name' => 'profilerweiterung_buchen__markup_ihre_buchung',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__preis' => array(
        'form_key' => 'preis',
        'name' => 'Preis',
        'type' => 'hidden',
        'value' => '149',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '37',
        'machine_name' => 'profilerweiterung_buchen__preis',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__zahlungsart' => array(
        'form_key' => 'payment_option',
        'name' => 'Zahlungsart',
        'type' => 'select',
        'value' => 'sepa_direct_debit',
        'extra' => array(
          'items' => 'sepa_direct_debit|SEPA-Lastschrift
bank_transfer|Überweisung',
          'multiple' => 0,
          'title_display' => 'before',
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
        'mandatory' => '1',
        'weight' => '38',
        'machine_name' => 'profilerweiterung_buchen__zahlungsart',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__kontoinhaber_wenn_abweichend' => array(
        'form_key' => 'payment_sepa_holder',
        'name' => 'Kontoinhaber (wenn abweichend)',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'webform_conditional_field_value' => 'sepa_direct_debit',
          'webform_conditional_cid' => '15',
          'webform_conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '39',
        'machine_name' => 'profilerweiterung_buchen__kontoinhaber_wenn_abweichend',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__iban' => array(
        'form_key' => 'payment_sepa_iban',
        'name' => 'IBAN',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'webform_conditional_field_value' => 'sepa_direct_debit',
          'webform_conditional_cid' => '15',
          'webform_conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '40',
        'machine_name' => 'profilerweiterung_buchen__iban',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__bic' => array(
        'form_key' => 'payment_sepa_bic',
        'name' => 'BIC',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'webform_conditional_field_value' => 'sepa_direct_debit',
          'webform_conditional_cid' => '15',
          'webform_conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '41',
        'machine_name' => 'profilerweiterung_buchen__bic',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__kontoverbindung' => array(
        'form_key' => 'kontoverbindung',
        'name' => 'Kontoverbindung',
        'type' => 'markup',
        'value' => '<p>
	Unsere Kontoverbindung:
</p>
<p>
	Parlamentwatch GmbH
</p>
<p>
	<strong>IBAN:</strong> DE62430609672040204000<br />
	<strong>BIC:</strong> GENODEM1GLS
</p>
<p>
	GLS-Bank
</p>
',
        'extra' => array(
          'format' => 'managed_content',
          'webform_conditional_field_value' => 'bank_transfer',
          'webform_conditional_cid' => '15',
          'webform_conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '42',
        'machine_name' => 'profilerweiterung_buchen__kontoverbindung',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__nachricht' => array(
        'form_key' => 'message',
        'name' => 'Nachricht',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '43',
        'machine_name' => 'profilerweiterung_buchen__nachricht',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__node_path' => array(
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
        'weight' => '44',
        'machine_name' => 'profilerweiterung_buchen__node_path',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__status' => array(
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
        'weight' => '45',
        'machine_name' => 'profilerweiterung_buchen__status',
        'page_num' => 1,
      ),
    ),
  ),
  'signature' => '',
  'spaminess' => 0,
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => 'root',
  'picture' => '0',
  'data' => 'a:7:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:17:"mimemail_textonly";i:0;s:7:"overlay";i:1;}',
  'weight_weight' => FALSE,
  'webform_features_author' => 'root',
  'webform_features_revision_author' => 'root',
);
  $webforms['unterst_tzen_sie_abgeordnetenwat'] = array(
  'title' => 'Unterstützen Sie abgeordnetenwatch.de!',
  'log' => 'neuen Header eingebaut',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '21b28426-89c5-4b43-9f50-ba8bd861e864',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'be5a5fb5-27f9-473b-86e2-d48262a8dc45',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>
	abgeordnetenwatch.de schaut Abgeordneten und den Parteien auf die Finger. Bitte unterstützen Sie unsere Arbeit für mehr Transparenz und Bürgernähe.
</p>
<p>
	Wir setzen Ihre Spende sparsam und effizient ein. Wie genau, erfahren Sie in unserem<br />
	<a class="link-download" href="/node/7759">Jahres- und Wirkungsbericht 2012</a>.
</p>
',
        'summary' => '',
        'format' => 'managed_content',
        'safe_value' => '<p>
	abgeordnetenwatch.de schaut Abgeordneten und den Parteien auf die Finger. Bitte unterstützen Sie unsere Arbeit für mehr Transparenz und Bürgernähe.
</p>
<p>
	Wir setzen Ihre Spende sparsam und effizient ein. Wie genau, erfahren Sie in unserem<br /><a class="link-download" href="/ueber-uns/mehr/finanzierung/parlamentwatch-eV">Jahres- und Wirkungsbericht 2012</a>.
</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
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
    'original' => NULL,
    'data' => array(),
  ),
  'webform' => array(
    'confirmation' => '<p>
	Vielen Dank! Ihre Spende ist angekommen. Sie bekommen schnellmöglich eine Bestätigung per E-Mail.&nbsp;
</p>
',
    'confirmation_format' => 'managed_content',
    'redirect_url' => 'ueber-uns/spendenformular/vielen-dank',
    'status' => '1',
    'block' => '0',
    'teaser' => '0',
    'allow_draft' => '0',
    'auto_save' => '0',
    'submit_notice' => '0',
    'submit_text' => 'Jetzt spenden',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'total_submit_limit' => '-1',
    'total_submit_interval' => '-1',
    'webform_ajax' => '0',
    'machine_name' => 'unterst_tzen_sie_abgeordnetenwat',
    'record_exists' => TRUE,
    'roles' => array(
      0 => '1',
      1 => '2',
    ),
    'emails' => array(
      0 => array(
        'email' => 'foerdern@abgeordnetenwatch.de',
        'subject' => 'Eine Spende ist eingegangen',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'default',
        'excluded_components' => array(
          0 => '26',
          1 => '30',
          2 => '31',
          3 => '32',
          4 => '29',
          5 => '16',
          6 => '17',
          7 => '18',
        ),
        'html' => '0',
        'attachments' => '0',
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'profilerweiterung_buchen__ihre_daten' => array(
        'form_key' => 'fieldset_donationform_yourdonation',
        'name' => 'Ihre Spende',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'description' => 'Bitte wählen Sie Ihren Spendenbetrag und wofür Sie spenden möchten.',
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'conditional_operator' => '=',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '24',
        'machine_name' => 'profilerweiterung_buchen__ihre_daten',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__user_uuid' => array(
        'form_key' => 'donation_frequency',
        'name' => 'Wie oft möchten Sie spenden?',
        'type' => 'select',
        'value' => '0',
        'extra' => array(
          'items' => '0|einmalig
1|monatlich
3|vierteljährlich
6|halbjährlich
12|jährlich',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '24',
        'machine_name' => 'profilerweiterung_buchen__user_uuid',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__ihre_daten',
      ),
      'profilerweiterung_buchen__constituency' => array(
        'form_key' => 'donation_amount',
        'name' => 'Ihr Spendenbetrag',
        'type' => 'select',
        'value' => '10',
        'extra' => array(
          'items' => '10|10 €
20|20 €
50|50 €
100|100 €
free|Freibetrag',
          'multiple' => 0,
          'title_display' => 'before',
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
        'mandatory' => '1',
        'weight' => '25',
        'machine_name' => 'profilerweiterung_buchen__constituency',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__ihre_daten',
      ),
      'profilerweiterung_buchen__party' => array(
        'form_key' => 'donation_free_amount',
        'name' => 'Freibetrag',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'field_suffix' => ' €',
          'disabled' => 0,
          'unique' => 0,
          'webform_conditional_field_value' => 'free',
          'webform_conditional_cid' => '2',
          'webform_conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '26',
        'machine_name' => 'profilerweiterung_buchen__party',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__ihre_daten',
      ),
      'profilerweiterung_buchen__anrede' => array(
        'form_key' => 'donation_target',
        'name' => 'Ziel der Spende',
        'type' => 'select',
        'value' => 'overall-project',
        'extra' => array(
          'description' => 'Möchten Sie Ihre Spende einem bestimmten Teilprojekt von abgeordnetenwatch.de, also einem sogenannten Förderkreis, zukommen lassen? Sie können ein Bundesland oder auch eine bestimmte Stadt oder einen Landkreis auswählen.',
          'items' => 'overall-project|gesamtes Projekt
baden-wuerttemberg|Baden-Württemberg
bayern|Bayern
berlin|Berlin
brandenburg|Brandenburg
bremen|Bremen
hamburg|Hamburg
hessen|Hessen
mecklenburg-vorpommern|Mecklenburg-Vorpommern
niedersachsen|Niedersachsen
nordrhein-westfalen|Nordrhein-Westfalen
rheinland-pfalz|Rheinland-Pfalz
saarland|Saarland
sachsen|Sachsen
sachsen-anhalt|Sachsen-Anhalt
Schleswig-holstein|Schleswig-Holstein
thueringen|Thüringen
council|Stadt oder Landkreis',
          'multiple' => 0,
          'title_display' => 'none',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '27',
        'machine_name' => 'profilerweiterung_buchen__anrede',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__ihre_daten',
      ),
      'profilerweiterung_buchen__vorname' => array(
        'form_key' => 'donation_target_council',
        'name' => 'Stadt oder Landkreis',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'webform_conditional_field_value' => 'council',
          'webform_conditional_cid' => '4',
          'webform_conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '28',
        'machine_name' => 'profilerweiterung_buchen__vorname',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__ihre_daten',
      ),
      'profilerweiterung_buchen__nachname' => array(
        'form_key' => 'fieldset_donationform_yourdata',
        'name' => 'Ihre Daten',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'description' => 'Bitte tragen Sie hier Ihre persönlichen Daten ein.',
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '25',
        'machine_name' => 'profilerweiterung_buchen__nachname',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__strasse_hausnummer' => array(
        'form_key' => 'personal_prefix',
        'name' => 'Anrede',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'mrs|Frau
mr|Herr',
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
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'weight' => '34',
        'machine_name' => 'profilerweiterung_buchen__strasse_hausnummer',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__plz' => array(
        'form_key' => 'personal_firstname',
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
        'weight' => '36',
        'machine_name' => 'profilerweiterung_buchen__plz',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__stadt' => array(
        'form_key' => 'personal_lastname',
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
        'weight' => '39',
        'machine_name' => 'profilerweiterung_buchen__stadt',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__e_mail' => array(
        'form_key' => 'personal_email',
        'name' => 'E-Mail-Adresse',
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
        'weight' => '40',
        'machine_name' => 'profilerweiterung_buchen__e_mail',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__telefon' => array(
        'form_key' => 'personal_phone',
        'name' => 'Telefon',
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
        'weight' => '41',
        'machine_name' => 'profilerweiterung_buchen__telefon',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__ihre_buchung' => array(
        'form_key' => 'address_street',
        'name' => 'Straße und Hausnummer',
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
        'weight' => '42',
        'machine_name' => 'profilerweiterung_buchen__ihre_buchung',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__preis' => array(
        'form_key' => 'address_zipcode',
        'name' => 'PLZ',
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
        'weight' => '43',
        'machine_name' => 'profilerweiterung_buchen__preis',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__zahlungsart' => array(
        'form_key' => 'address_city',
        'name' => 'Stadt',
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
        'weight' => '44',
        'machine_name' => 'profilerweiterung_buchen__zahlungsart',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__kontoinhaber_wenn_abweichend' => array(
        'form_key' => 'address_country',
        'name' => 'Land',
        'type' => 'select',
        'value' => 'DE',
        'extra' => array(
          'items' => 'AF|Afghanistan
AL|Albanien
DZ|Algerien
AS|Amerikanisch-Samoa
VI|Amerikanische Jungferninseln
AD|Andorra
AO|Angola
AI|Anguilla
AQ|Antarktis
AG|Antigua und Barbuda
AR|Argentinien
AM|Armenien
AW|Aruba
AZ|Aserbaidschan
AU|Australien
BS|Bahamas
BH|Bahrain
BD|Bangladesch
BB|Barbados
BE|Belgien
BZ|Belize
BJ|Benin
BM|Bermuda
BT|Bhutan
BO|Bolivien
BA|Bosnien und Herzegowina
BW|Botswana
BV|Bouvetinsel
BR|Brasilien
VG|Britische Jungferninseln
IO|Britisches Territorium im Indischen Ozean
BN|Brunei
BG|Bulgarien
BF|Burkina Faso
BI|Burundi
CL|Chile
CN|China
CK|Cookinseln
CR|Costa Rica
CW|Curaçao
CD|Demokratische Republik Kongo
DE|Deutschland
DM|Dominica
DO|Dominikanische Republik
DJ|Dschibuti
DK|Dänemark
CI|Elfenbeinküste
SV|El Salvador
EC|Equador
ER|Eritrea
EE|Estland
FK|Falklandinseln
FJ|Fidschi
FI|Finnland
FR|Frankreich
GF|Französisch-Guayana
PF|Französisch-Polynesien
TF|Französische Süd- und Antarktisgebiete
FO|Färöer
GA|Gabun
GM|Gambia
GE|Georgien
GH|Ghana
GI|Gibraltar
GD|Grenada
GR|Griechenland
GL|Grönland
GP|Guadeloupe
GU|Guam
GT|Guatemala
GG|Guernsey
GN|Guinea
GW|Guinea-Bissau
GY|Guyana
HT|Haiti
HM|Heard und McDonaldinseln
HN|Honduras
HK|Hongkong
IN|Indien
ID|Indonesien
IQ|Irak
IR|Iran
IE|Irland
IS|Island
IM|Isle of Man
IL|Israel
IT|Italien
JM|Jamaika
JP|Japan
YE|Jemen
JE|Jersey
JO|Jordanien
KY|Kaimaninseln
KH|Kambodscha
CM|Kamerun
CA|Kanada
CV|Kapverden
KZ|Kasachstan
QA|Katar
KE|Kenia
KG|Kirgisistan
KI|Kiribati
CC|Kokosinseln
CO|Kolumbien
KM|Komoren
HR|Kroatien
CU|Kuba
KW|Kuwait
LA|Laos
LS|Lesotho
LV|Lettland
LB|Libanon
LR|Liberia
LY|Libyen
LI|Liechtenstein
LT|Litauen
LU|Luxemburg
MO|Macao
MG|Madagaskar
MW|Malawi
MY|Malaysia
MV|Malediven
ML|Mali
MT|Malta
MA|Marokko
MH|Marshallinseln
MQ|Martinique
MR|Mauretanien
MU|Mauritius
YT|Mayotte
MK|Mazedonien
MX|Mexiko
FM|Mikronesien
MD|Moldawien
MC|Monaco
MN|Mongolei
ME|Montenegro
MS|Montserrat
MZ|Mosambik
MM|Myanmar
NA|Namibia
NR|Nauru
NP|Nepal
NC|Neukaledonien
NZ|Neuseeland
NI|Nicaragua
NL|Niederlande
AN|Niederländische Antillen
NE|Niger
NG|Nigeria
NU|Niue
KP|Nordkorea
NF|Norfolkinsel
NO|Norwegen
MP|Nördliche Marianen
OM|Oman
TL|Osttimor
PK|Pakistan
PW|Palau
PS|Palästinensische Gebiete
PA|Panama
PG|Papua-Neuguinea
PY|Paraguay
PE|Peru
PH|Philippinen
PN|Pitcairn
PL|Polen
PT|Portugal
PR|Puerto Rico
CG|Republik Kongo
RW|Ruanda
RO|Rumänien
RU|Russland
RE|Réunion
BL|Saint-Barthélemy
MF|Saint-Martin
PM|Saint-Pierre und Miquelon
SB|Salomonen
ZM|Sambia
WS|Samoa
SM|San Marino
SA|Saudi-Arabien
SE|Schweden
CH|Schweiz
SN|Senegal
RS|Serbien
SC|Seychellen
SL|Sierra Leone
ZW|Simbabwe
SG|Singapur
SK|Slowakei
SI|Slowenien
SO|Somalia
ES|Spanien
SJ|Spitzbergen und Jan Mayen
LK|Sri Lanka
SH|St. Helena
KN|St. Kitts und Nevis
LC|St. Lucia
VC|St. Vincent und die Grenadinen
SD|Sudan
SR|Surinam
SZ|Swasiland
SY|Syrien
ST|São Tomé und Príncipe
ZA|Südafrika
GS|Südgeorgien und die Südlichen Sandwichinseln
KR|Südkorea
TJ|Tadschikistan
TW|Taiwan
TZ|Tansania
TH|Thailand
TG|Togo
TK|Tokelau
TO|Tonga
TT|Trinidad und Tobago
TD|Tschad
CZ|Tschechische Republik
TN|Tunesien
TM|Turkmenistan
TC|Turks- und Caicosinseln
TV|Tuvalu
TR|Türkei
UG|Uganda
UA|Ukraine
HU|Ungarn
UM|United States Minor Outlying Islands
UY|Uruguay
UZ|Usbekistan
VU|Vanuatu
VA|Vatikan
VE|Venezuela
AE|Vereinigte Arabische Emirate
GB|Vereinigtes Königreich
US|Vereinigte Staaten
VN|Vietnam
WF|Wallis und Futuna
CX|Weihnachtsinsel
BY|Weißrussland
EH|Westsahara
CF|Zentralafrikanische Republik
CY|Zypern
EG|Ägypten
GQ|Äquatorialguinea
ET|Äthiopien
AX|Åland
AT|Österreich
',
          'options_source' => 'countries',
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
        'mandatory' => '0',
        'weight' => '45',
        'machine_name' => 'profilerweiterung_buchen__kontoinhaber_wenn_abweichend',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__iban' => array(
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
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '46',
        'machine_name' => 'profilerweiterung_buchen__iban',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__bic' => array(
        'form_key' => 'option_not_anonymous',
        'name' => 'namentlich nennen',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'yes|Ja, ich möchte namentlich mit meinem Beitrag auf abgeordnetenwatch.de genannt werden.',
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
        'weight' => '47',
        'machine_name' => 'profilerweiterung_buchen__bic',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__nachname',
      ),
      'profilerweiterung_buchen__kontoverbindung' => array(
        'form_key' => 'fieldset_donationform_paymentinfo',
        'name' => 'Zahlungsart',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'description' => 'Für den Einzug der Spende von Ihrem Konto per SEPA-Lastschrift können Sie entweder Ihre Kontonummer und BLZ oder, wenn bekannt, auch die IBAN und BIC angeben. Nach Ablauf des Jahres schicken wir Ihnen automatisch eine Spendenbescheinigung zu.',
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '26',
        'machine_name' => 'profilerweiterung_buchen__kontoverbindung',
        'page_num' => 1,
      ),
      'profilerweiterung_buchen__nachricht' => array(
        'form_key' => 'option_receipt',
        'name' => 'Spendenquittung',
        'type' => 'select',
        'value' => 'yes',
        'extra' => array(
          'items' => 'yes|ja
no|nein',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 1,
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
        'weight' => '32',
        'machine_name' => 'profilerweiterung_buchen__nachricht',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__kontoverbindung',
      ),
      'profilerweiterung_buchen__node_path' => array(
        'form_key' => 'payment_accordion',
        'name' => 'Zahlungsart',
        'type' => 'accordion_grp',
        'value' => '',
        'extra' => array(
          'webform_accordion_settings' => array(
            'webform_accordion_grp_autoheight' => 1,
            'webform_accordion_grp_clearstyle' => 0,
            'webform_accordion_grp_collapsible' => 0,
            'webform_accordion_grp_active' => '0',
          ),
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '33',
        'machine_name' => 'profilerweiterung_buchen__node_path',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__kontoverbindung',
      ),
      'profilerweiterung_buchen__status' => array(
        'form_key' => 'payment_tab_direct_debit',
        'name' => 'Kontonummer & BLZ',
        'type' => 'accordion_tab',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '58',
        'machine_name' => 'profilerweiterung_buchen__status',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__node_path',
      ),
      'profilerweiterung_buchen__parliament' => array(
        'form_key' => 'payment_direct_debit_holder',
        'name' => 'Kontoinhaber (wenn abweichend vom Spender)',
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
        'weight' => '43',
        'machine_name' => 'profilerweiterung_buchen__parliament',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__status',
      ),
      'profilerweiterung_buchen__markup_ihre_daten' => array(
        'form_key' => 'payment_direct_debit_account',
        'name' => 'Kontonummer',
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
        'weight' => '44',
        'machine_name' => 'profilerweiterung_buchen__markup_ihre_daten',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__status',
      ),
      'profilerweiterung_buchen__markup_ihre_buchung' => array(
        'form_key' => 'payment_direct_debit_bank',
        'name' => 'BLZ',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '45',
        'machine_name' => 'profilerweiterung_buchen__markup_ihre_buchung',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__status',
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_tab_sepa' => array(
        'form_key' => 'payment_tab_sepa',
        'name' => 'IBAN & BIC',
        'type' => 'accordion_tab',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '59',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_tab_sepa',
        'page_num' => 1,
        'parent_machine_name' => 'profilerweiterung_buchen__node_path',
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_sepa_holder' => array(
        'form_key' => 'payment_sepa_holder',
        'name' => 'Kontoinhaber (wenn abweichend vom Spender)',
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
        'weight' => '43',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_sepa_holder',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_tab_sepa',
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_sepa_iban' => array(
        'form_key' => 'payment_sepa_iban',
        'name' => 'IBAN',
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
        'weight' => '44',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_sepa_iban',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_tab_sepa',
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_sepa_bic' => array(
        'form_key' => 'payment_sepa_bic',
        'name' => 'BIC',
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
        'weight' => '45',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_sepa_bic',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_tab_sepa',
      ),
      'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_message' => array(
        'form_key' => 'fieldset_donationform_message',
        'name' => 'Ihre Nachricht an uns',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '27',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_message',
        'page_num' => 1,
      ),
      'unterst_tzen_sie_abgeordnetenwat__message' => array(
        'form_key' => 'message',
        'name' => 'Nachricht an uns',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '28',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__message',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_message',
      ),
      'unterst_tzen_sie_abgeordnetenwat__fieldset_meta' => array(
        'form_key' => 'fieldset_meta',
        'name' => 'Meta',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '28',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_meta',
        'page_num' => 1,
      ),
      'unterst_tzen_sie_abgeordnetenwat__node_path' => array(
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
        'weight' => '29',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__node_path',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_meta',
      ),
      'unterst_tzen_sie_abgeordnetenwat__status' => array(
        'form_key' => 'status',
        'name' => 'status',
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
        'weight' => '30',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__status',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_meta',
      ),
      'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm' => array(
        'form_key' => 'fieldset_donationform_civicrm',
        'name' => 'CiviCRM',
        'type' => 'fieldset',
        'value' => '',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'collapsible' => 0,
          'collapsed' => 0,
          'description' => '',
          'conditional_component' => '',
          'conditional_operator' => '=',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '29',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm',
        'page_num' => 1,
      ),
      'unterst_tzen_sie_abgeordnetenwat__civicrm_payment_instrument' => array(
        'form_key' => 'civicrm_payment_instrument',
        'name' => 'CiviCRM Payment Instrument',
        'type' => 'hidden',
        'value' => 'Lastschrift',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '31',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__civicrm_payment_instrument',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm',
      ),
      'unterst_tzen_sie_abgeordnetenwat__civicrm_contribution_status' => array(
        'form_key' => 'civicrm_contribution_status',
        'name' => 'CiviCRM Contribution Status',
        'type' => 'hidden',
        'value' => 'anstehend',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '32',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__civicrm_contribution_status',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm',
      ),
      'unterst_tzen_sie_abgeordnetenwat__civicrm_amount' => array(
        'form_key' => 'civicrm_amount',
        'name' => 'CiviCRM Amount',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '33',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__civicrm_amount',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm',
      ),
      'unterst_tzen_sie_abgeordnetenwat__civicrm_direct_debit_authority' => array(
        'form_key' => 'civicrm_direct_debit_authority',
        'name' => 'CiviCRM Direct Debit Authority',
        'type' => 'hidden',
        'value' => 'yes',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '34',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__civicrm_direct_debit_authority',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm',
      ),
      'unterst_tzen_sie_abgeordnetenwat__civicrm_groups' => array(
        'form_key' => 'civicrm_groups',
        'name' => 'CiviCRM Groups',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '35',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__civicrm_groups',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm',
      ),
      'unterst_tzen_sie_abgeordnetenwat__civicrm_description' => array(
        'form_key' => 'civicrm_description',
        'name' => 'CiviCRM Description',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '36',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__civicrm_description',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm',
      ),
      'unterst_tzen_sie_abgeordnetenwat__civicrm_contribution_type' => array(
        'form_key' => 'civicrm_contribution_type',
        'name' => 'CiviCRM Contribution Type',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '37',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__civicrm_contribution_type',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm',
      ),
      'unterst_tzen_sie_abgeordnetenwat__civicrm_date_start' => array(
        'form_key' => 'civicrm_date_start',
        'name' => 'CiviCRM Date Start',
        'type' => 'hidden',
        'value' => '%date',
        'extra' => array(
          'hidden_type' => 'value',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'weight' => '38',
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__civicrm_date_start',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_civicrm',
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
  'webform_features_revision_author' => 'root',
);
return $webforms;
}
