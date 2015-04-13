<?
//todo: field_get_items benutzen
//$comments = render(comment_node_page_additions($node)['comments']);
?>
<?php if ($sharethis): ?>
  <div class="sharethis-wrapper">
    <? echo $sharethis; ?>
  </div>
<?php endif; ?>
<div class="push-bottom-l">

  <p class="medium"><? echo $field_petition_recipient[0]['value'] ?></p>

  <?php if (!empty($field_blogpost_blogtags)): ?>
    <p class="icon-taxonomy push-bottom-m">
      <?
      $first_term = true;
      foreach ($field_blogpost_blogtags as $key => $value){
        if ($first_term) {
          $first_term = false;
        }
        else{
          echo ", ";
        }
        $term = taxonomy_term_load($value['tid']);
        echo l($term->name, 'taxonomy/term/' . $value['tid']);
      }
      ?>
    </p>
  <?php endif; ?>
  <div class="managed_content push-bottom-l">
    <? echo $field_petition_text_donation[0]['value'] ?>
  </div>
  <div class="pw-progress-wrapper pw-progress-wrapper-l grid-5 alpha">
    <div class="pw-progress" style="width: <? echo $field_donation_progress[0]['value'];?>%;"></div>
  </div>
  <div class="medium clear"><h4 class="label-inline">Kosten Meinungsumfrage:&nbsp;</h4><strong><? echo number_format($field_donation_required[0]['value'],0,',','.'); ?>&nbsp;&euro;</strong></div>
  <div class="light small push-bottom-m"><?echo number_format($field_donation_amount[0]['value'],0,',','.')?>&nbsp;&euro; wurden bereits gespendet</div>
</div>
<div class="push-bottom-l">
  <? print theme('status_messages'); ?>
  <h3>Für Meinungsumfrage spenden</h3>
  <? echo $signing_form; ?>
</div>
<div class="clearfix push-bottom-l managed-content">
  <? echo $body[0]['value']; ?>
</div>
<?php if ($comments): ?>
<div id="comments" class="comment-wrapper">
  <h3>Ich habe die Petition unterschrieben, weil...</h3>
  <? echo $comments; ?>
</div>
<?php endif; ?>