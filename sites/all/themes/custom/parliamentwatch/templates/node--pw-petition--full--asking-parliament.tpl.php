<article<?php print $attributes; ?>>

<?php
  // render webform block for politicians if parameter "u" is in url
if (pw_vote_check_user_allowed()):
  ?>
<style>
  #page-title{
    display: none;
  }
</style>
<div class="clearfix push-bottom-l">
  <?php
  $block = module_invoke('webform', 'block_view', 'client-block-57286');
  print theme('status_messages');
  print render($block['content']);
  ?>
</div>
<?php endif; ?>

<?php if (!empty($field_blogpost_categories)): ?>
  <p class="icon-taxonomy push-bottom-m">
    <?php
    print _pw_get_linked_terms($field_blogpost_categories);
    ?>
  </p>
<?php endif; ?>
<h3>Hintergrund</h3>
<div class="managed-content clearfix push-bottom-l">
  <div class="floatbox floatbox-right">
    <i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-disabled float-left push-right-s push-bottom-xs"><span class="element-invisible">Unterschriften werden gesammelt</span></i>
    <p class="pushfloat-0">Die Petition hat <?php print number_format($field_petition_signings[0]['value'],0,',','.')?> von <?php print number_format($field_petition_required[0]['value'],0,',','.'); ?> benötigten Unterschriften erreicht.</p>
    <i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-disabled float-left push-right-s push-bottom-xs"><span class="element-invisible">Petition in der Meinungsumfrage</span></i>
    <p class="pushfloat-0">Laut repräsentativer Meinungsumfrage genießt das Anliegen eine Mehrheit in der Bevölkerung.</p>
    <i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-brand float-left push-right-s push-bottom-xs"><span class="element-invisible">Petition im Parlament</span></i>
    <p class="pushfloat-0">Die Petition wird aktuell im Parlament abgefragt.</p>
  </div>
  <?php print check_markup($field_petition_text_parliament[0]['value']); ?>
</div>
<?php if (!pw_vote_check_user_allowed()): ?>
  <div class="block block-webform compact-form">
    <?php print theme('status_messages'); ?>
    <?php print $main_node_form; ?>
  </div>
<?php endif; ?>
<?php
    // render block of latest positions
$block = module_invoke('views', 'block_view', 'pw_vote_positions-block');
if(!empty($block['content'])):
  ?>
<a name="positions"></a>
<h3 class="clear">Aktuelle Positionen (<?php print $field_petition_recipient[0]['value']; ?>)</h3>

<p class="medium">Die aktuellsten Positionen der Abgeordneten in der Übersicht.</p>
<?php
print render($block['content']);
endif;
?>
<h3>Inhalt der Bürger-Petition (gestartet von <?php print $field_petition_starter[0]['value']; ?>)</h3>
<p class="managed-content">
  Lesen Sie die Original-Petition auf <?php print l($field_petition_external_url[0]['url'], $field_petition_external_url[0]['url']); ?>
</p>

<?php
  // render comments if there are any
if ($comments):
  ?>
<div id="comments" class="comment-wrapper">
  <h3>Ich habe die Petition unterschrieben, weil...</h3>
  <?php print $comments; ?>
</div>
<?php endif; ?>
</article>
