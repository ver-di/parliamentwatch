<?php if ($sharethis): ?>
  <div class="sharethis-wrapper">
    <? print $sharethis; ?>
  </div>
<?php endif; ?>

<?php
  // render webform block for politicians if parameter "u" is in url
  if (pw_vote_check_user_allowed()): ?>
  <?php
    $block = module_invoke('webform', 'block_view', 'client-block-57286');
    print theme('status_messages');
    print render($block['content']);
  ?>
  <?php endif; ?>

<?php if (!empty($field_blogpost_blogtags)): ?>
  <p class="icon-taxonomy push-bottom-m">
    <?
    $first_term = true;
    foreach ($field_blogpost_blogtags as $key => $value){
      if ($first_term) {
        $first_term = false;
      }
      else{
        print ", ";
      }
      $term = taxonomy_term_load($value['tid']);
      print l($term->name, 'taxonomy/term/' . $value['tid']);
    }
    ?>
  </p>
<?php endif; ?>
<h3>Hintergrund</h3>
<div class="managed_content clearfix push-bottom-l">
  <div class="floatbox floatbox-right">
    <i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-brand float-left push-right-s push-bottom-xs"><span class="element-invisible">Unterschriften werden gesammelt</span></i>
    <p class="pushfloat-0">Die Petition hat <?echo number_format($field_petition_signings[0]['value'],0,',','.')?> von <? echo number_format($field_petition_required[0]['value'],0,',','.'); ?> benötigten Unterschriften erreicht.</p>
    <i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-brand float-left push-right-s push-bottom-xs"><span class="element-invisible">Petition in der Meinungsumfrage</span></i>
    <p class="pushfloat-0">Laut repräsentativer Meinungsumfrage genießt das Anliegen eine Mehrheit in der Bevölkerung.</p>
    <i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-disabled float-left push-right-s push-bottom-xs"><span class="element-invisible">Petition im Parlament</span></i>
    <p class="pushfloat-0">Die Petition wird aktuell im Parlament abgefragt.</p>
  </div>
  <? print check_markup($field_petition_text_parliament[0]['value']); ?>
</div>

<?php
  // render block of latest positions
  $block = module_invoke('views', 'block_view', 'pw_vote_positions-block');
  if(!empty($block['content'])):
?>
    <a name="positions"></a>
    <h3 class="clear">Aktuelle Positionen (<? print $field_petition_recipient[0]['value']; ?>)</h3>

    <p class="medium">Die neuesten Positionen der Abgeordneten in der Übersicht.</p>
<?php
    print render($block['content']);
  endif;
?>
<h3>Inhalt der Bürger-Petition (gestartet von <? print $field_petition_starter[0]['value']; ?>)</h3>
<p class="managed_content">
  Lesen Sie die Original-Petition auf: <? print l($field_petition_external_url[0]['url'], $field_petition_external_url[0]['url']); ?>
</p>

<?php 
// render comments if there are any
if ($comments): 
?>
  <div id="comments" class="comment-wrapper">
    <h3>Ich habe die Petition unterschrieben, weil...</h3>
    <? echo $comments; ?>
  </div>
<?php endif; ?>