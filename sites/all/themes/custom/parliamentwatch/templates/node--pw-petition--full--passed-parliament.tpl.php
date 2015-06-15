<?php
  print theme('status_messages');
?>
<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<div class="element-invisible">
  <img src="/sites/abgeordnetenwatch.de/files/styles/pw_portrait_s/public/default_images/img_fotodummy_210x140.jpg" alt="">
</div>
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
<h3 id="pw_vote_positions">Wie positionieren sich Ihre Abgeordneten?</h3>
<div class="compact-form push-bottom-l">
<?php
  $my_block = module_invoke('views', 'block_view', 'pw_vote_search-block_1');
  print render($my_block['content']);
?>
</div>

<h3>Hintergrund</h3>
<div class="managed-content clearfix push-bottom-l">
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
