<?php if ($sharethis): ?>
  <div class="sharethis-wrapper">
    <? print $sharethis; ?>
  </div>
<?php endif; ?>

<?php
  // render webform block for politicians if parameter "u" is in url
  $getparams = drupal_get_query_parameters();
  if (isset($getparams['u'])): ?>
  <?php
    $block = module_invoke('webform', 'block_view', 'client-block-57030');
    print render($block['content']);
  ?>
  <hr>
  <?php endif; ?>

<p class="medium">
  Adressat: <? print $field_petition_recipient[0]['value'] ?>
</p>

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

<h3 class="clear">Aktuelle Positionen</h3>

<p class="medium">Hier werden die aktuellsten fünf Positionen angezeigt. Sobald eine ausreichende Anzahl Abgeordneter Stellung bezogen haben, werden wir hier eine ausführliche Auswertung anzeigen.</p>
<?php
// render block of latest positions
  $block = module_invoke('views', 'block_view', 'pw_vote_positions-block');
  print render($block['content']);
?>
<h3>Inhalt der Petition</h3>
<div class="managed_content push-bottom-l">
  <? print check_markup($field_petition_content[0]['value']); ?>
</div>

<?php 
// render comments if there are any
if ($comments): 
?>
  <div id="comments" class="comment-wrapper">
    <h3>Ich habe die Petition unterschrieben, weil...</h3>
    <? echo $comments; ?>
  </div>
<?php endif; ?>