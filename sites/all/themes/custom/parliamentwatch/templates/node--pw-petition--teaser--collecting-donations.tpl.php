<?php
print render($title_suffix);
?>
<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<h3 class="push-bottom-m">
  <ul class="progress-icons">
    <li><i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Unterschriften werden gesammelt');?></span></i></li>
    <li><i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-brand"><span class="element-invisible"><?php print t('Petition in der Meinungsumfrage');?></span></i></li>
    <li><i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition im Parlament');?></span></i></li>
  </ul>
  <a href="<? echo $node_url; ?>" class="<? echo ($partner_html)?"":"";?>"><? echo $title;?></a>
</h3>
<div class="petition-list-image-wrapper img-outline">
  <a href="<? echo $node_url; ?>" title="zur Petition" class="<? echo ($partner_html)?"":"";?>">
    <? echo $themed_image; ?>
  </a>
  <?php if ($field_image_copyright): ?>
    <div class="copyright">
      <? echo $field_teaser_image[0]['field_image_copyright']['und'][0]['value'] ?>
    </div>
  <?php endif; ?>
</div>
<div class="pw-petition-list-contents">
    <div>
        <div class="pw-progress-wrapper pw-progress-wrapper-m pw-petition-progress-signings push-bottom-s" title="Unterschriften">
            <span style="width: 100%;" class="pw-progress">Fortschritt: <? echo $field_petition_progress[0]['value']; ?>%</span>
        </div>
        <div class="pw-progress-wrapper pw-progress-wrapper-m pw-petition-progress-donations push-bottom-s" title="Spenden">
            <span style="width: <? echo $field_donation_progress[0]['value']; ?>%;" class="pw-progress">Fortschritt: <? echo $field_donation_progress[0]['value']; ?>%</span>
        </div>
    </div>
  <div class="medium"><strong>Kosten Meinungsumfrage: <? echo number_format($field_donation_required[0]['value'],0,',','.'); ?>&nbsp;&euro;</strong></div>
  <div class="small light"><? echo number_format($field_donation_amount[0]['value'],0,',','.'); ?>&nbsp;&euro; wurden bereits gespendet.</div>
  <?php if ($partner_html): ?>
    <div class="petition-list-partner-wrapper small light">
      <p class="push-bottom-xs">Diese Petition läuft auf:</p>
      <? echo $partner_html; ?>
    </div>
  <?php endif; ?>
  <div class="petition-list-sign-wrapper"><a href="<? echo $node_url; ?>" class="button">Für Umfrage spenden</a></div>
</div>
