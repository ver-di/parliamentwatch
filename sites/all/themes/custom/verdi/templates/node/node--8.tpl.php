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
  <?php if ((!$page && !empty($title)) || !empty($title_prefix) || !empty($title_suffix) || $display_submitted): ?>
  <div class="modal-header">
    <div class="question-form-head clearfix">
      <div class="question-form-head-label">Deine Frage an:</div>
      <div class="question-form-head-title">
        <h4><?php print $title; ?></h4>
      </div>
    </div>
  </div>
  <?php endif; ?>
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
          Die Website Sozialwahlwatch.de versteht sich als Dialogplattform zwischen Kandidierenden zu den Sozialwahlen und den Wählerinnen und Wählern. Die Website ist kein Beratungsangebot für persönliche Versicherungsfälle. Sofern Sie auf der Suche nach Beratungsleistungen sind, empfehlen wir Ihnen folgende Anlaufstellen.<br>
          <a href="#"><i class="fa fa-angle-right"></i> Anlaufstellen anzeigen</a>
        </p>
        <p>
          Die Freischaltung von Fragen kann je nach Nutzeraufkommen u.U. einige Stunden dauern, da alle eingehenden Fragen von einem Moderatorenteam überprüft werden. Ich habe den Moderations-Codex gelesen und sichergestellt, dass meine Frage nicht gegen diesen verstößt.<br>
          <a href="#"><i class="fa fa-angle-right"></i> Moderations-Codex anzeigen</a>
        </p>
      </div>
      <div class="col-xs-12 col-sm-6 text-left small">
        <p>
          Die Nutzung von Sozialwahlwatch.de ist grundsätzlich frei, eine vorherige Registrierung ist nicht erforderlich. Durch die Nutzung der Webseiten erklären Sie sich damit einverstanden, an die Nutzungsbedingungen in der jeweils geltenden Fassung gebunden zu sein.
          <a href="#"><i class="fa fa-angle-right"></i> Nutzungsbedingungen</a>
        </p>
        <p>
          Falls meine Frage nicht freigeschaltet werden kann, werde ich darüber von einem Moderator informiert. Aus Gründen der Rechtssicherheit wird Ihre IP-Adresse gespeichert, aber nicht veröffentlicht oder an Dritte weitergegeben. Weitere Informationen erhalten Sie in unserer
          <a href="#"><i class="fa fa-angle-right"></i> Datenschutzerklärung</a>
        </p>
      </div>
    </div>
  </div>
</article>
