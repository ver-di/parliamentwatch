<?php
  print theme('status_messages');
?>
<?php if ($sharethis): ?>
  <div class="sharethis-wrapper">
      <? print $sharethis; ?>
  </div>
<?php endif; ?>
<p class="medium">Adressat: <? print $field_petition_recipient[0]['value'] ?></p>

<? print check_markup($field_petition_text_passed[0]['summary']); ?>

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

<?php
  $block = module_invoke('pw_vote', 'block_view', 'voting_behavior');
  print render($block['content']);
?>

<div class="push-bottom-l">SUCHFORMULARE</div>

<div class="push-bottom-l">SUCHERGEBNISSE</div>

<h3>Hintergrund</h3>
<div class="managed-content clearfix push-bottom-l">
  <div class="floatbox floatbox-right">
    <i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-brand float-left push-right-s push-bottom-xs"><span class="element-invisible">Unterschriften werden gesammelt</span></i>
    <p class="pushfloat-0">Die Petition hat <? print number_format($field_petition_signings[0]['value'],0,',','.')?> von <? print number_format($field_petition_required[0]['value'],0,',','.'); ?> benötigten Unterschriften erreicht.</p>
    <i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-brand float-left push-right-s push-bottom-xs"><span class="element-invisible">Petition in der Meinungsumfrage</span></i>
    <p class="pushfloat-0">Laut repräsentativer Meinungsumfrage genießt das Anliegen eine Mehrheit in der Bevölkerung.</p>
    <i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-disabled float-left push-right-s push-bottom-xs"><span class="element-invisible">Petition im Parlament</span></i>
    <p class="pushfloat-0">Die Petition wird aktuell im Parlament abgefragt.</p>
  </div>
  <? print check_markup($field_petition_text_passed[0]['value']); ?>
</div>

<h3>Inhalt der Bürger-Petition (gestartet von <? print $field_petition_starter[0]['value']; ?>)</h3>
<p class="managed-content">
  Lesen Sie die Original-Petition auf <? print l($field_petition_external_url[0]['url'], $field_petition_external_url[0]['url']); ?>
</p>

<?php 
// render comments if there are any
if ($comments): 
?>
  <div id="comments" class="comment-wrapper">
    <h3>Ich habe die Petition unterschrieben, weil...</h3>
    <? print $comments; ?>
  </div>
<?php endif; ?>