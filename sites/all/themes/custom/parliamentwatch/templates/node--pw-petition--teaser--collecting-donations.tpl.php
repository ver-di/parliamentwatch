<?php
print render($title_suffix);
?>
<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<h3 class="push-bottom-m">
  <ul class="progress-icons">
    <li><i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Unterschriften werden gesammelt');?></span></i></li>
    <li><i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-brand"><span class="element-invisible"><?php print t('Petition in der Meinungsumfrage');?></span></i></li>
    <li><i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition im Parlament');?></span></i></li>
  </ul>
  <a href="<?php print $node_url; ?>" class="<?php print ($partner_html)?"":"";?>"><?php print $title;?></a>
</h3>
<div class="responsive-list-image-wrapper img-outline">
  <?php
  print render($content['field_teaser_image']);
  ?>
</div>
<div class="pw-responsive-list-contents">
  <div>
    <div class="pw-progress-wrapper pw-progress-wrapper-m pw-petition-progress-signings push-bottom-s" title="Unterschriften">
      <span style="width: 100%;" class="pw-progress">Fortschritt: <?php print $field_petition_progress[0]['value']; ?>%</span>
    </div>
    <div class="pw-progress-wrapper pw-progress-wrapper-m pw-petition-progress-donations push-bottom-s" title="Spenden">
      <span style="width: <?php print $field_donation_progress[0]['value']; ?>%;" class="pw-progress">Fortschritt: <?php print $field_donation_progress[0]['value']; ?>%</span>
    </div>
  </div>
  <div class="medium"><strong>Kosten Meinungsumfrage: <?php print number_format($field_donation_required[0]['value'],0,',','.'); ?>&nbsp;&euro;</strong></div>
  <div class="small light"><?php print number_format($field_donation_amount[0]['value'],0,',','.'); ?>&nbsp;&euro; wurden bereits gespendet.</div>
  <?php if ($partner_html): ?>
    <div class="responsive-list-partner-wrapper small light">
      <p class="push-bottom-xs">Diese Petition läuft auf:</p>
      <a href="<?php print $signing_url; ?>" class="<?php print ($partner_html)?"colorbox-load ":"";?>" title="zur Petition auf <?php print $field_petition_partner[0]['value']; ?>"><?php print $partner_html; ?></a>
    </div>
  <?php endif; ?>
  <div class="responsive-list-sign-wrapper"><a href="<?php print $node_url; ?>" class="button">Für Umfrage spenden</a></div>
</div>
