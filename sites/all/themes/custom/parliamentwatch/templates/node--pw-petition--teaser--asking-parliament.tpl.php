<?php
print render($title_suffix);
?>
<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<h3 class="push-bottom-m">
  <ul class="progress-icons">
    <li><i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Unterschriften werden gesammelt');?></span></i></li>
    <li><i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition in der Meinungsumfrage');?></span></i></li>
    <li><i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-brand"><span class="element-invisible"><?php print t('Petition im Parlament');?></span></i></li>
  </ul>
  <a href="<?php print $node_url; ?>"><?php print $title;?></a>
</h3>
<div class="responsive-list-image-wrapper img-outline">
  <a href="<?php print $node_url; ?>" title="zur Petition">
    <?php print $themed_image; ?>
  </a>
  <?php if ($field_image_copyright): ?>
    <div class="copyright">
      <?php print $field_teaser_image[0]['field_image_copyright']['und'][0]['value'] ?>
    </div>
  <?php endif; ?>
</div>
<div class="pw-responsive-list-contents">
  <i class="icon-clock aw-icon-2x aw-success float-left push-right-s"></i>
  <div class="medium"><strong>Petition wird aktuell im Bundestag abgefragt</strong></div>
  <?php if ($count_votes > 1): ?>
    <div class="small light"><?php print $count_votes; ?> MdBs haben bisher Stellung genommen</div>
  <?php endif; ?>
  <?php if ($partner_html): ?>
    <div class="responsive-list-partner-wrapper small light">
      <p class="push-bottom-xs">Diese Petition läuft auf:</p>
      <a href="<?php print $signing_url; ?>" class="<?php print ($partner_html)?"colorbox-load ":"";?>" title="zur Petition auf <?php print $field_petition_partner[0]['value']; ?>"><?php print $partner_html; ?></a>
    </div>
  <?php endif; ?>
  <div class="responsive-list-sign-wrapper"><a href="<?php print $node_url; ?>" class="button">Zum Zwischenstand</a></div>
</div>
