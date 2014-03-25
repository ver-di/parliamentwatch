<?php
/**
 * @file
 * pw_donation_form.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function pw_donation_form_webform_defaults() {
$webforms = array();
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
    'original' => 'und',
    'data' => array(
      'und' => array(
        'entity_type' => 'node',
        'entity_id' => '10394',
        'language' => 'und',
        'source' => '',
        'uid' => '1',
        'status' => '1',
        'translate' => '0',
        'created' => '1389718065',
        'changed' => '1390386810',
      ),
    ),
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
      'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdonati' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdonati',
        'page_num' => 1,
      ),
      'frage_stellen__firstname' => array(
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
        'machine_name' => 'frage_stellen__firstname',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdonati',
      ),
      'frage_stellen__lastname' => array(
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
        'machine_name' => 'frage_stellen__lastname',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdonati',
      ),
      'unterst_tzen_sie_abgeordnetenwat__donation_free_amount' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__donation_free_amount',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdonati',
      ),
      'frage_stellen__residence' => array(
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
        'machine_name' => 'frage_stellen__residence',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdonati',
      ),
      'unterst_tzen_sie_abgeordnetenwat__donation_target_council' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__donation_target_council',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdonati',
      ),
      'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
        'page_num' => 1,
      ),
      'frage_stellen__question' => array(
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
        'machine_name' => 'frage_stellen__question',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'frage_stellen__option_newsletter' => array(
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
        'machine_name' => 'frage_stellen__option_newsletter',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'frage_stellen__text_codex' => array(
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
        'machine_name' => 'frage_stellen__text_codex',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'frage_stellen__node_path' => array(
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
        'machine_name' => 'frage_stellen__node_path',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'frage_stellen__status' => array(
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
        'machine_name' => 'frage_stellen__status',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'unterst_tzen_sie_abgeordnetenwat__address_street' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__address_street',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'unterst_tzen_sie_abgeordnetenwat__address_zipcode' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__address_zipcode',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'unterst_tzen_sie_abgeordnetenwat__address_city' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__address_city',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'unterst_tzen_sie_abgeordnetenwat__address_country' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__address_country',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'unterst_tzen_sie_abgeordnetenwat__option_newsletter' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__option_newsletter',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'unterst_tzen_sie_abgeordnetenwat__option_not_anonymous' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__option_not_anonymous',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_yourdata',
      ),
      'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_paymentinf' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_paymentinf',
        'page_num' => 1,
      ),
      'unterst_tzen_sie_abgeordnetenwat__option_receipt' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__option_receipt',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_paymentinf',
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_accordion' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_accordion',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__fieldset_donationform_paymentinf',
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_tab_direct_debit' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_tab_direct_debit',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_accordion',
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_direct_debit_holder' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_direct_debit_holder',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_tab_direct_debit',
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_direct_debit_account' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_direct_debit_account',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_tab_direct_debit',
      ),
      'unterst_tzen_sie_abgeordnetenwat__payment_direct_debit_bank' => array(
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
        'machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_direct_debit_bank',
        'page_num' => 1,
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_tab_direct_debit',
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
        'parent_machine_name' => 'unterst_tzen_sie_abgeordnetenwat__payment_accordion',
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
  'last_comment_uid' => '1',
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
