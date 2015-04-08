<?
//todo: field_get_items benutzen



$comments = render(comment_node_page_additions($node)['comments']);

?>
<?php if ($sharethis): ?>
  <div class="sharethis-wrapper">
    <? echo $sharethis; ?>
  </div>
<?php endif; ?>
<div class="push-bottom-l">

  <div class="medium"><? echo $field_petition_recipient[0]['value'] ?></div>

  <?php if (!empty($field_blogpost_blogtags)): ?>
    <div class="icon-taxonomy push-bottom-m">
      <?
      $first_term = true;
      foreach ($field_blogpost_blogtags as $key => $value){
        if ($first_term) {
          $first_term = false;
        }
        else{
          echo ", ";
        }
        echo l($value['taxonomy_term']->name, 'taxonomy/term/' . $value['tid']);
      }
      ?>
    </div>
  <?php endif; ?>
  <div class="pw-petition-progress-wrapper float-left"><div class="pw-petition-progress" style="width: <? echo $field_donation_progress[0]['value'];?>%;"></div></div>
  <div class="medium clear"><h4 class="label-inline">Kosten Meinungsumfrage:&nbsp;</h4><strong><? echo number_format($field_donation_required[0]['value'],0,',','.'); ?>&nbsp;&euro;</strong></div>
  <div class="light small push-bottom-m"><?echo number_format($field_donation_amount[0]['value'],0,',','.')?>&nbsp;&euro; wurden bereits gespendet</div>
  <? echo $field_petition_text_donation[0]['value'] ?>
</div>
<div class="push-bottom-l">
  <h3>Für Meinungsumfrage spenden</h3>
  <? echo $signing_form; ?>
</div>
<div class="managed-content push-bottom-l">
  <h3><? echo $title; ?></h3>
  <div class="file-image float-left push-bottom-s">
    <div class="content">
      <? echo $themed_image; ?>
      <?php if ($field_image_copyright): ?>
        <div class="copyright">
          <? echo $field_teaser_image[0]['field_image_copyright']['und'][0]['value'] ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
  <? echo $body[0]['value']; ?>
</div>
<?php if ($comments): ?>
<div id="comments" class="comment-wrapper">
  <h3>Ich habe die Petition unterschrieben, weil...</h3>
  <? echo $comments; ?>
</div>
<?php endif; ?>