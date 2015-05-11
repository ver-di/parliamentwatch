<?php if ($sharethis): ?>
  <div class="sharethis-wrapper">
      <? echo $sharethis; ?>
  </div>
<?php endif; ?>
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
  <? print check_markup($field_petition_text_parliament[0]['value']); ?>
</div>

<div class="pw-voting">
  <div id="pw-voting-total"><h3>Gesamtergebnis</h3>
    <ul class="clearfix push-bottom-l">
        <li class="total vote yes">582 zugestimmt</li>
        <li class="total vote no">3 dagegen gestimmt</li>
        <li class="total vote abstain">7 enthalten</li>
        <li class="total vote no-show">39 nicht beteiligt</li>
    </ul>
  </div>

  <div id="pw-voting-parties" class="desktop-only">
    <?php
    $block = module_invoke('pw_vote', 'block_view', 'voting_behavior');
    print render($block['content']);
    ?>
  </div>
</div>

<div class="push-bottom-l">SUCHFORMULAR</div>

<div class="push-bottom-l">SUCHERGEBNISSE</div>

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