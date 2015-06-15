<?
//todo: field_get_items benutzen

//$comments = render(comment_node_page_additions($node)['comments']);

// ====================== ACTUAL THEME ===========================
?>
<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<div class="push-bottom-m">
  <p class="medium">Adressat: <? echo $field_petition_recipient[0]['value'] ?></p>
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

  <div class="clearfix push-bottom-l managed-content">
    <? echo $body[0]['value']; ?>
  </div>
</div>
  <div class="pw-progress-wrapper pw-progress-wrapper-l grid-5 alpha">
    <div class="pw-progress" style="width: <? echo $field_petition_progress[0]['value'];?>%;"></div>
  </div>
  <div class="medium clear"><h4 class="label-inline">Benötigte Unterschriften:&nbsp;</h4><strong><? echo number_format($field_petition_required[0]['value'],0,',','.'); ?></strong></div>
  <div class="light small push-bottom-l"><?echo number_format($field_petition_signings[0]['value'],0,',','.')?> unterstützen die Petition</div>
<div class="push-bottom-l">
  <h3>Petition unterschreiben</h3>
  <blockquote><? echo $field_petition_content[0]['value']; ?></blockquote>
  <? print theme('status_messages'); ?>
  <? echo $signing_form; //todo: Ordentliche CSS-Klasse anstelle der Wiederverwendung von "comment"?>
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
