<?php if ($sharethis): ?>
    <div class="sharethis-wrapper">
        <? print $sharethis; ?>
    </div>
<?php endif; ?>
<strong><? print check_markup($body[0]['summary']); ?></strong>
<p class="medium">Adressat: <? print $field_petition_recipient[0]['value'] ?></p>

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
// render webform block for politicians if parameter "u" is in url
$getparams = drupal_get_query_parameters();
if (isset($getparams['u'])) {
  $block = module_invoke('webform', 'block_view', 'client-block-57030');
  print render($block['content']);
}
else {

}
?>

<h3>Aktuelle Positionen</h3>
<p class="medium">Hier werden die aktuellsten fuenf Positionen angezeigt. Sobald X Abgeordnete Stellung bezogen haben, werden wir hier eine ausfuherliche Auswertung anzeigen.</p>
<?php
// render block of latest positions
$block = module_invoke('views', 'block_view', 'pw_vote_search-block_1');
print render($block['content']);
?>

<h3>Hintergrund</h3>
<div class="managed_content push-bottom-l">
  <? print check_markup($field_petition_text_parliament[0]['value']); ?>
</div>
<div class="pw-progress-wrapper pw-progress-wrapper-l grid-5 alpha">
  <div class="pw-progress" style="width: <? echo $field_petition_progress[0]['value'];?>%;"></div>
</div>
<div class="medium clear"><h4 class="label-inline">Benötigte Unterschriften:&nbsp;</h4><strong><? echo number_format($field_petition_required[0]['value'],0,',','.'); ?></strong></div>
<div class="light small push-bottom-l"><?echo number_format($field_petition_signings[0]['value'],0,',','.')?> unterstützen die Petition</div>

<?php 
// render comments if there are any
if ($comments): 
?>
  <div id="comments" class="comment-wrapper">
    <h3>Ich habe die Petition unterschrieben, weil...</h3>
    <? echo $comments; ?>
  </div>
<?php endif; ?>