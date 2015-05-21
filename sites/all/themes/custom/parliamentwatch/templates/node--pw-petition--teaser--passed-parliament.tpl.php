<?php
print render($title_suffix);
?>
<?php if ($sharethis): ?>
  <div class="sharethis-wrapper">
    <? echo $sharethis; ?>
  </div>
<?php endif; ?>
<h3 class="push-bottom-m">
  <ul class="progress-icons">
    <li><i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Unterschriften werden gesammelt');?></span></i></li>
    <li><i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition in der Meinungsumfrage');?></span></i></li>
    <li><i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-brand"><span class="element-invisible"><?php print t('Petition im Parlament');?></span></i></li>
  </ul>
  <a href="<? echo $node_url; ?>"><? echo $title;?></a>
</h3>
<div class="petition-list-image-wrapper img-outline">
  <a href="<? echo $node_url; ?>" title="zur Petition">
    <? echo $themed_image; ?>
  </a>
  <?php if ($field_image_copyright): ?>
    <div class="copyright">
      <? echo $field_teaser_image[0]['field_image_copyright']['und'][0]['value'] ?>
    </div>
  <?php endif; ?>
</div>
<div class="pw-petition-list-contents">
  <i class="icon-ok aw-icon-2x aw-success float-left push-right-s"></i>
  <div class="medium"><strong>Petition wurde im Bundestag abgefragt</strong></div>
  <?php if ($count_votes > 1): ?>  
    <div class="small light"><?php print $count_votes; ?> MdBs haben Stellung genommen</div>
  <?php endif; ?>
  <?php if ($partner_html): ?>
    <div class="petition-list-partner-wrapper small light">
      <p class="push-bottom-xs">Diese Petition läuft auf:</p>
      <? echo $partner_html; ?>
    </div>
  <?php endif; ?>
  <div class="petition-list-sign-wrapper"><a href="<? echo $node_url; ?>" class="button">Positionen der MdBs</a></div>
</div>