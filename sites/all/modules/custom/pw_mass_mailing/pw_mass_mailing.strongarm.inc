<?php
/**
 * @file
 * pw_mass_mailing.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pw_mass_mailing_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailsystem_theme';
  $strongarm->value = 'abgeordnetenwatch';
  $export['mailsystem_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'MimeMailSystem__SmtpMailSystem',
    'mimemail' => 'MimeMailSystem__SmtpMailSystem',
    'views_send_direct' => 'MimeMailSystem__SmtpMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_engine';
  $strongarm->value = 'mimemail';
  $export['mimemail_engine'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_format';
  $strongarm->value = 'html_mail';
  $export['mimemail_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_incoming';
  $strongarm->value = 0;
  $export['mimemail_incoming'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_key';
  $strongarm->value = 'dafda4626d331b29ad3b7da01ab04d6d';
  $export['mimemail_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_linkonly';
  $strongarm->value = 0;
  $export['mimemail_linkonly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_mail';
  $strongarm->value = 'service@abgeordnetenwatch.de';
  $export['mimemail_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_name';
  $strongarm->value = 'Abgeordnetenwatch.de';
  $export['mimemail_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_simple_address';
  $strongarm->value = 0;
  $export['mimemail_simple_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_sitestyle';
  $strongarm->value = 1;
  $export['mimemail_sitestyle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_textonly';
  $strongarm->value = 0;
  $export['mimemail_textonly'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_allowhtml';
  $strongarm->value = 1;
  $export['smtp_allowhtml'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_debugging';
  $strongarm->value = 0;
  $export['smtp_debugging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_from';
  $strongarm->value = 'service@abgeordnetenwatch.de';
  $export['smtp_from'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_fromname';
  $strongarm->value = 'Abgeordnetenwatch.de';
  $export['smtp_fromname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_host';
  $strongarm->value = 'mx1.pwsrv.org';
  $export['smtp_host'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_hostbackup';
  $strongarm->value = '';
  $export['smtp_hostbackup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_library';
  $strongarm->value = 'sites/all/modules/contrib/smtp/smtp.module';
  $export['smtp_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_on';
  $strongarm->value = '1';
  $export['smtp_on'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_password';
  $strongarm->value = '';
  $export['smtp_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_port';
  $strongarm->value = '25';
  $export['smtp_port'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_protocol';
  $strongarm->value = 'standard';
  $export['smtp_protocol'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smtp_username';
  $strongarm->value = '';
  $export['smtp_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_attachments_pw_mass_mail:page';
  $strongarm->value = '';
  $export['views_send_attachments_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_carbon_copy_pw_mass_mail:page';
  $strongarm->value = 0;
  $export['views_send_carbon_copy_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_debug';
  $strongarm->value = 1;
  $export['views_send_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_direct_pw_mass_mail:page';
  $strongarm->value = 0;
  $export['views_send_direct_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_from_mail_pw_mass_mail:page';
  $strongarm->value = 'service@abgeordnetenwatch.de';
  $export['views_send_from_mail_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_from_name_pw_mass_mail:page';
  $strongarm->value = 'Abgeordnetenwatch.de';
  $export['views_send_from_name_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_headers_pw_mass_mail:page';
  $strongarm->value = '';
  $export['views_send_headers_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_message_pw_mass_mail:page';
  $strongarm->value = array(
    'value' => '[user:greeting] [user:fullname],

Sie kandidieren am 25. Mai 2014 zu den Europawahlen. Wir haben Sie daher mit einem kostenlosen Grundeintrag auf abgeordnetenwatch.de aufgenommen und bitten Sie, Ihre Daten über den Link am Ende dieser Mail zu überprüfen.

abgeordnetenwatch.de zur Europawahl 2014 gibt Bürgerinnen und Bürgern die Möglichkeit, Sie und die Kandidierenden aller Parteien öffentlich zu befragen. Sie können dann unmittelbar und direkt online antworten. Das ist für alle einsehbar, also öffentlich und im besten Sinne demokratisch.

Zusätzlich möchten wir Ihnen eine Profilerweiterung anbieten. Diese beinhaltet u.a. ein Porträtfoto, die Gelegenheit zu einer Einbindung des eigenen Facebook- und Twitter-Kanals sowie die Möglichkeit zur Darstellung der eigenen politischen Ziele.

Die Profile der Kandidierenden zur Europawahl werden auf Portalen wie SPIEGEL ONLINE prominent eingebunden. Damit Bürgerinnen und Bürger die Kandidierenden aus ihrer Nachbarschaft trotz des Listenwahlrechts leicht auffinden können, planen wir eine Deutschlandkarte, über die Interessierte zu den Profilseiten ihrer heimischen Politikerinnen und Politiker finden können.

Positionieren Sie sich im Wahlkampf!

Ihre Zusatzfunktionen einer Profilerweiterung im Überblick:

+ Porträtfoto auf abgeordnetenwatch.de und den Portalseiten unserer Medienpartner
+ Link zu Ihrer privaten Webseite oder Ihrem Blog
+ Selbstdarstellung Ihrer politischen Ziele
+ Lebenslauf
+ Terminkalender
+ Einbindung Ihres Twitterkanals, Ihrer Facebookseite (sofern vorhanden) und weiterer Links, die persönlich oder politisch für Sie wichtig sind.

Zeigen Sie Profil und unterstützen Sie so abgeordnetenwatch.de!

Ihre Profilerweiterung kostet regulär 179 Euro inkl. MwSt. Bis einschließlich 15. April 2014 bieten wir Ihnen einen Frühbucherrabatt von 30 Euro. Sie zahlen also nur 149 Euro inkl. MWSt.

Profilerweiterung bestellen: [user:login-one-time]/booking_form
Nur Grundeintrag überprüfen: [user:login-one-time]

(Hier sollte noch ein zusätzlicher Satz rein.)

Login-Link: [site:login-url]
Benutzername: [user:name]
Passwort: [user:new-password]

Wir wünschen Ihnen viel Erfolg im Wahlkampf und stehen Ihnen für Rückfragen jederzeit gerne zur Verfügung.

Mit freundlichen Grüßen

Gregor Hackmack und Boris Hekele

PS: Mit diesem Betrag zeigen Sie nicht nur Profil sondern unterstützen zudem ein gutes Projekt. Denn abgeordnetenwatch.de ist eine unabhängige und überparteiliche Plattform, die den Dialog zwischen Bürgerinnen und Bürgern und Kandidatinnen und Kandidaten fördert. Darüber hinaus: Im Vergleich zu einer Anzeige in Ihrer Lokalzeitung ist eine Profilerweiterung eine günstige Möglichkeit für die eigenen Positionen zu werben.

====================================

Wie erfahre ich von den Fragen/wie kann ich antworten?

Fragen an Sie werden von uns an Ihre bei uns hinterlegte Mailadresse geschickt, d.h. Sie müssen auf abgeordnetenwatch.de nicht extra nachschauen, ob Sie eine Frage erhalten haben. Sie antworten, indem Sie unsere Benachrichtigungsmail mit Ihrem Antworttext an uns zurückschicken. Eine ausführliche Anleitung finden Sie unter http://www.abgeordnetenwatch.de/images/daten/AW_anleitung.pdf

Werden alle Fragen an mich veröffentlicht?

Unsere geschulten Moderatorinnen und Moderatoren lesen jede Mail vor der Veröffentlichung und Weiterleitung an Sie durch. So verhindern wir, dass bloße Meinungsäußerungen, Fragen zum Privatleben, Beleidigungen oder Massenanfragen auf Ihrer Profilseite bei abgeordnetenwatch.de veröffentlicht werden. Bei unseren Moderationsentscheidungen orientieren wir uns an unserem Moderations-Codex, den Sie hier einsehen können: http://www.abgeordnetenwatch.de/moderations_codex-766-0.html

Sollten wir eine Frage wegen eines Verstoßes gegen den Moderations-Codex nicht freischalten, erhalten Sie (und der Fragesteller) eine Hinweismail über den Eingang und den Ablehnungsgrund der Frage. Ihnen steht es frei, die Frage dennoch öffentlich zu beantworten.

Wenn Sie einmal mit einer Moderationsentscheidung nicht einverstanden sind, wenden Sie sich bitte an moderation@abgeordnetenwatch.de. Dort wird der Vorgang noch einmal geprüft. Sollten Sie auch danach noch nicht mit der getroffenen Entscheidung einverstanden sein, können Sie sich an unser Kuratorium aus unabhängigen Persönlichkeiten wenden: http://www.abgeordnetenwatch.de/kuratorium-876-0.html

====================================

IMPRESSUM:
Parlamentwatch e.V. / Parlamentwatch GmbH
Mittelweg 12
20148 Hamburg
Tel: 040 - 317 69 10 - 26
Fax: 040 - 317 69 10 - 28
email: info@abgeordnetenwatch.de
www.abgeordnetenwatch.de

Parlamentwatch ist ein eingetragener Verein mit Sitz in Hamburg, eingetragen beim Amtsgericht Hamburg VR 19479, vertretungsberechtigte Vorstandsmitglieder sind Boris Hekele und Gregor Hackmack

Die Parlamentwatch GmbH ist eingetragen beim Amtsgericht Hamburg unter HRB - 98928. Die USt.-IdNr. lautet DE 253099897. Geschäftsführer sind Gregor Hackmack und Boris Hekele. Die Parlamentwatch GmbH muss ihre Gewinne gemeinnützigen Organisationen darunter dem Parlamentwatch e.V. spenden.',
    'format' => 'html_mail',
  );
  $export['views_send_message_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_priority_pw_mass_mail:page';
  $strongarm->value = '0';
  $export['views_send_priority_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_receipt_pw_mass_mail:page';
  $strongarm->value = 0;
  $export['views_send_receipt_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_remember_pw_mass_mail:page';
  $strongarm->value = 1;
  $export['views_send_remember_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_spool_expire';
  $strongarm->value = '1';
  $export['views_send_spool_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_subject_pw_mass_mail:page';
  $strongarm->value = 'Begrüßungsmail';
  $export['views_send_subject_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_throttle';
  $strongarm->value = '100';
  $export['views_send_throttle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_tokens_pw_mass_mail:page';
  $strongarm->value = array(
    'uid_pos_1' => 'uid',
    'users_name_pos_2' => 'name',
    'users_mail_pos_3' => 'mail',
    'field_user_lname_pos_4' => 'field_user_lname',
    'field_user_fname_pos_5' => 'field_user_fname',
    'field_user_party_pos_6' => 'field_user_party',
    'field_user_parliament_pos_7' => 'field_user_parliament',
    'users_created_pos_8' => 'created',
  );
  $export['views_send_tokens_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_to_mail_pw_mass_mail:page';
  $strongarm->value = 'users_mail_pos_3';
  $export['views_send_to_mail_pw_mass_mail:page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_send_to_name_pw_mass_mail:page';
  $strongarm->value = 'field_user_lname_pos_4';
  $export['views_send_to_name_pw_mass_mail:page'] = $strongarm;

  return $export;
}
