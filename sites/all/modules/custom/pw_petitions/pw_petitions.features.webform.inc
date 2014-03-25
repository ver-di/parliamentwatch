<?php
/**
 * @file
 * pw_petitions.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function pw_petitions_webform_defaults() {
$webforms = array();
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
        'email' => 'frage_stellen__lastname',
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
      'frage_stellen__email' => array(
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
        'machine_name' => 'frage_stellen__email',
        'page_num' => 1,
      ),
      'frage_stellen__firstname' => array(
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
        'machine_name' => 'frage_stellen__firstname',
        'page_num' => 1,
      ),
      'frage_stellen__residence' => array(
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
        'machine_name' => 'frage_stellen__residence',
        'page_num' => 1,
      ),
      'frage_stellen__lastname' => array(
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
        'machine_name' => 'frage_stellen__lastname',
        'page_num' => 1,
      ),
      'frage_stellen__subject' => array(
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
        'machine_name' => 'frage_stellen__subject',
        'page_num' => 1,
      ),
      'frage_stellen__question' => array(
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
        'machine_name' => 'frage_stellen__question',
        'page_num' => 1,
      ),
      'frage_stellen__option_newsletter' => array(
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
        'machine_name' => 'frage_stellen__option_newsletter',
        'page_num' => 1,
      ),
      'frage_stellen__text_codex' => array(
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
        'machine_name' => 'frage_stellen__text_codex',
        'page_num' => 1,
      ),
      'frage_stellen__node_path' => array(
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
        'machine_name' => 'frage_stellen__node_path',
        'page_num' => 1,
      ),
      'frage_stellen__status' => array(
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
        'machine_name' => 'frage_stellen__status',
        'page_num' => 1,
      ),
      'unterst_tzen_sie_abgeordnetenwat__address_street' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__address_street',
        'page_num' => 1,
      ),
      'unterst_tzen_sie_abgeordnetenwat__address_zipcode' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__address_zipcode',
        'page_num' => 1,
      ),
      'unterst_tzen_sie_abgeordnetenwat__address_city' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__address_city',
        'page_num' => 1,
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_sepa_holder' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_sepa_holder',
        'page_num' => 1,
      ),
      'petition_unterschreiben__status' => array(
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
        'machine_name' => 'petition_unterschreiben__status',
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
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'weight_weight' => FALSE,
  'webform_features_author' => 'root',
  'webform_features_revision_author' => '',
);
return $webforms;
}
