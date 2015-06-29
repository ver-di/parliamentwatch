<?
//todo: field_get_items benutzen
//$comments = render(comment_node_page_additions($node)['comments']);
?>
<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<div class="push-bottom-l">

  <p class="medium">Adressat: <? echo $field_petition_recipient[0]['value'] ?></p>

  <?php if (!empty($field_blogpost_blogtags)): ?>
  <p class="icon-taxonomy push-bottom-m">
    <?php
    print _pw_get_linked_terms($field_blogpost_blogtags);
    ?>
  </p>
  <?php endif; ?>

<div class="managed_content clearfix push-bottom-l">
  <div class="floatbox floatbox-right">
    <i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-disabled float-left push-right-s push-bottom-xs"><span class="element-invisible">Unterschriften werden gesammelt</span></i>
    <p class="pushfloat-0">Die Petition hat <?echo number_format($field_petition_signings[0]['value'],0,',','.')?> von <? echo number_format($field_petition_required[0]['value'],0,',','.'); ?> benötigten Unterschriften erreicht.</p>
    <i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-brand float-left push-right-s push-bottom-xs"><span class="element-invisible">Petition in der Meinungsumfrage</span></i>
    <p class="pushfloat-0">Für die Finanzierung der Umfrage bitten wir Sie um eine Spende.</p>
    <i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-disabled float-left push-right-s push-bottom-xs"><span class="element-invisible">Petition im Parlament</span></i>
    <p class="pushfloat-0">Abfrage der Petition im Parlament.</p>
  </div>
  <? print check_markup($field_petition_text_donation[0]['value']); ?>
  <div class="pw-progress-wrapper pw-progress-wrapper-l grid-5 alpha">
    <div class="pw-progress" style="width: <? echo $field_donation_progress[0]['value'];?>%;"></div>
  </div>
  <div class="medium clear"><h4 class="label-inline">Kosten Meinungsumfrage:&nbsp;</h4><strong><? echo number_format($field_donation_required[0]['value'],0,',','.'); ?>&nbsp;&euro;</strong></div>
  <div class="light small push-bottom-m"><?echo number_format($field_donation_amount[0]['value'],0,',','.')?>&nbsp;&euro; wurden bereits gespendet</div>
</div>

</div>
<div class="push-bottom-l">
  <? print theme('status_messages'); ?>
  <h3>Für Meinungsumfrage spenden</h3>
  <? echo $signing_form; ?>
</div>
<h3>Hintergrund</h3>
<div class="clearfix push-bottom-l managed-content">
  <? echo $body[0]['value']; ?>
</div>
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
