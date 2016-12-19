<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup templates
 */
?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> modal clearfix"<?php print $attributes; ?>>
  <?php
  print render($user_profile_small);
  ?>
  <div class="modal-body">
    <div class="row">
      <?php
        // Hide comments, tags, and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        hide($content['field_tags']);
        print render($content);
      ?>
    </div>
  </div>
  <div class="modal-footer">
    <div class="row">
      <div class="col-xs-12 col-sm-6 text-left small">
          <p>
          Die Website Sozialversicherung.watch versteht sich als Dialogplattform zwischen Kandidierenden zu den Sozialwahlen und den Wählerinnen und Wählern. Die Website ist kein Beratungsangebot für persönliche Versicherungsfälle. Sofern Sie auf der Suche nach Beratungsleistungen sind, empfehlen wir Ihnen folgende Anlaufstellen<br>
          <a href="#" type="button" data-toggle="collapse" data-target="#question_info_anlaufstellen" aria-expanded="false" aria-controls="question_info"><i class="fa fa-angle-right"></i> Anlaufstellen anzeigen</a>
        </p>
        <div id="question_info_anlaufstellen" class="collapse">
          <div class="panel padded">
            <p>
              <strong>Krankenversicherungen:</strong> Die Beratung von Versicherten ist eine Serviceaufgabe der Krankenkassen vor Ort. Bitte wende Dich an Deine Kasse. Bist Du mit einer Leistung nicht zufrieden? Dann lege schriftlich Widerspruch bei Deiner Kasse ein. Dieses Schreiben wird dann einem der zahlreichen Widerspruchausausschüsse vorgelegt werden, an denen unsere Vertreterinnen und Vertreter beteiligt sind, um Deine Interessen zu wahren.<br /><br />
              <strong>Rentenversicherungen:</strong> Hier erreichen Sie die <a href="http://arbeitsmarkt-und-sozialpolitik.verdi.de/service/versichertenberatung" target="_blank">ver.di-Versichertenberater/-innen der Deutschen Rentenversicherung Bund</a>
            </p>
          </div>
        </div>
        <p>
          Wir gehen davon aus, dass Du den Moderationscodex gelesen hast und sicherstellst, dass Deine Frage nicht gegen diesen verstößt.<br>
          <a href="#" type="button" data-toggle="collapse" data-target="#question_info_codex" aria-expanded="false" aria-controls="question_info"><i class="fa fa-angle-right"></i> Moderations-Codex anzeigen</a>
        </p>
        <div id="question_info_codex" class="collapse">
          <div class="panel padded">
            <p>
              <?php print render($node_codex['body']); ?>
            </p>
          </div>
        </div>
      </div>
      <div class="col-xs-12 col-sm-6 text-left small">
        <!--p>
          Die Nutzung von Sozialversicherung.watch ist grundsätzlich frei, eine vorherige Registrierung ist nicht erforderlich. Durch die Nutzung der Webseiten erklärst Du Dich damit einverstanden, an die Nutzungsbedingungen in der jeweils geltenden Fassung gebunden zu sein.
          <a href="#" type="button" data-toggle="collapse" data-target="#question_info_nutzungsbedingungen" aria-expanded="false" aria-controls="question_info"><i class="fa fa-angle-right"></i> Nutzungsbedingungen</a>
        </p>
        <div id="question_info_nutzungsbedingungen" class="collapse">
          <div class="panel padded">
            <p>
              Lorem ipsum dolor sit amet, consectetur adipisicing elit. Accusamus aliquid at aut autem culpa deleniti, dicta dolore esse explicabo ipsa minus natus nisi nobis odit sed similique soluta, veritatis vitae!
            </p>
          </div>
        </div-->
        <p>
          Falls Deine Frage nicht freigeschaltet werden kann, wirst Du darüber vom Moderationsteam informiert. Aus Gründen der Rechtssicherheit wird Deine IP-Adresse gespeichert, aber nicht veröffentlicht oder an Dritte weitergegeben. <br />
          <a href="#" type="button" data-toggle="collapse" data-target="#question_info_datenschutz" aria-expanded="false" aria-controls="question_info"><i class="fa fa-angle-right"></i> Datenschutzerklärung anzeigen</a>
        </p>
          <div id="question_info_datenschutz" class="collapse">
            <div class="panel padded">
              <p>
                Sozialversicherung.watch nimmt den Schutz Ihrer persönlichen Daten sehr ernst und hält sich strikt an die Regeln der Datenschutzgesetze. In keinem Fall werden die erhobenen Daten verkauft und nur mit Ihrer Zustimmung an Dritte weitergegeben.<br /><br />

Die Nutzung von Sozialversicherung.watch ist grundsätzlich frei, eine vorherige Registrierung ist nicht erforderlich.<br /><br />

Die nachfolgende Erklärung gibt Ihnen einen Überblick darüber, wie wir den Datenschutz gewährleisten und welche Art von Daten zu welchem Zweck erhoben werden.<br /><br />

1. Erhebung personenbezogener Daten<br />
Ein zentraler Bestandteil der genannten Portale ist das Befragen von Kandidierende zu den Sozialwahlen durch Bürgerinnen und Bürger. Um von der Fragefunktion Gebrauch zu machen, werden folgende Daten abgefragt:<br /><br />

Nachname<br />
Vorname<br />
E-Mail-Adresse (wird nicht veröffentlicht)<br />
Nur bei der vollständigen Eingabe dieser Daten können die Fragen auf Sozialversicherung.watch freigeschaltet werden.<br /><br />

2. Zweckbestimmung für die Erhebung personenbezogener Daten<br />
sozialversicherung.watch ist kein Meinungsforum. Durch den Online-Dialog zwischen Bürgerinnen und Bürgern und den Kandidierenden soll transparenter und bürgernäher werden. Dazu gehört auch gegenseitige Transparenz der mitwirkenden Akteure: Den Fragestellern sind durch die Angaben in den Kandidierendenprofilen wesentliche Angaben des befragten Kandidierenden bekannt. Dies muss auch umgekehrt gelten. Darum leiten wir Vornamen und Familiennamen an die Kandidierenden weiter. Der vollständige Name wird verschlüsselt und für google nicht auffindbar im Zusammenhang mit der gestellten Frage veröffentlicht. Die E-Mail-Adresse wird nicht veröffentlicht oder an die Kandidierenden weitergegeben. Sie dienen dazu, mit dem Fragesteller Kontakt aufnehmen zu können. Außerdem werden Fragesteller (wie auch Kandidierende) in dem Fall per E-Mail benachrichtigt, in dem eine Frage gegen den Moderationscodex verstößt und nicht auf Sozialversicherung.watch freigeschaltet wird.<br /><br />

3. Speicherung der IP<br />
Aus Gründen der Rechtssicherheit wird die IP des Besuchers, in Kombination mit dem Datum, dann gespeichert, wenn er sich auf Sozialversicherung.watch inhaltlich beteiligt, beispielsweise indem er Kandidierende befragt. Die IP Adressen werden nach fünf Tagen gelöscht.<br /><br />

4. Server-Logfiles<br />
Bei jedem Seitenaufruf von Sozialversicherung.watch werden Browser-Informationen der Besucherinnen und Besucher automatisch an uns weitergeleitet. Dazu gehören Angaben zu Browser-Typ, Betriebssystem, IP, Uhrzeit und zuvor besuchte Seiten (referrers). Diese Daten sind für den Betreiber von Sozialversicherung.watch nicht bestimmten Personen zuzuordnen. Die Daten werden nicht mit anderen Datenquellen zusammengeführt, die Logfiles werden zudem nach einer statistischen Auswertung gelöscht.<br /><br />

5. Cookies<br />
Auf Sozialversicherung.watch werden an mehreren Stellen so genannte Cookies verwendet. Sie dienen dazu, unser Angebot nutzerfreundlicher und effektiver zu machen.<br />
Durch die Einstellung des Internet-Browsers können Nutzerinnen und Nutzer selbst entscheiden, ob sie Cookies akzeptieren, beim Setzen eines Cookies jeweils informiert werden möchten oder ob Sie alle Cookies ablehnen. Sozialversicherung.watch ist auch bei deaktivierten Cookies vollkommen funktionstüchtig.<br /><br />

6. Weiterführende Links<br />
Trotz sorgfältiger Prüfung können wir keine Gewähr für die Inhalte verlinkter Webseiten übernehmen. Dies gilt für alle auf Sozialversicherung.watch angezeigten Links bzw. verlinkte Banner.<br /><br />

7. Datenschutzerklärung zur Nutzung von Piwik<br />
Diese Website benutzt Piwik, eine Open-Source-Software zur statistischen Auswertung der Besucherzugriffe. Piwik verwendet sog. "Cookies”, Textdateien, die auf Ihrem Computer gespeichert werden und die eine Analyse der Benutzung der Website durch Sie ermöglichen. Die durch den Cookie erzeugten Informationen über Ihre Benutzung dieses Internetangebotes werden auf dem Server des Anbieters in Deutschland gespeichert. Die IP-Adresse wird sofort nach der Verarbeitung und vor deren Speicherung anonymisiert.<br /><br />

Sie können die Installation der Cookies durch eine entsprechende Einstellung Ihrer Browser-Software verhindern; wir weisen Sie jedoch darauf hin, dass Sie in diesem Fall gegebenenfalls nicht sämtliche Funktionen dieser Website vollumfänglich nutzen können.<br />
              </p>
            </div>
          </div>
      </div>
    </div>
  </div>
</article>
