<?php
   print render($title_suffix);
?>
<?php if (empty($variables['field_petition_partner'][0]['value'])): ?>
<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<?php endif; ?>
<h3 class="push-bottom-m">
    <ul class="progress-icons">
        <li><i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-brand"><span class="element-invisible"><?php print t('Unterschriften werden gesammelt');?></span></i></li>
        <li><i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition in der Meinungsumfrage');?></span></i></li>
        <li><i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition im Parlament');?></span></i></li>
    </ul>
    <a href="<?php print $node_url; ?>" class="<?php print ($partner_html)?"colorbox-load":"";?>"><?php print $title;?></a>
</h3>
<div class="responsive-list-image-wrapper img-outline">
    <a href="<?php print $node_url; ?>" title="zur Petition" class="<?php print ($partner_html)?"colorbox-load":"";?>">
        <?php print $themed_image; ?>
    </a>
    <?php if ($field_image_copyright): ?>
    <div class="copyright">
        <?php print $field_teaser_image[0]['field_image_copyright']['und'][0]['value']; ?>
    </div>
    <?php endif; ?>
</div>
<div class="pw-responsive-list-contents">
    <div>
        <div class="pw-progress-wrapper pw-progress-wrapper-m pw-petition-progress-signings push-bottom-s" title="Unterschriften">
            <span style="width: <?php print $field_petition_progress[0]['value']; ?>%;" class="pw-progress">Fortschritt: <?php print $field_petition_progress[0]['value']; ?>%</span>
        </div>
        <div class="pw-progress-wrapper pw-progress-wrapper-m pw-petition-progress-donations push-bottom-s" title="Spenden">
            <span style="width: 0;" class="pw-petition-progress-m"></span>
        </div>
    </div>
    <div class="medium"><strong>Benötigte Unterschriften: <?php print number_format($field_petition_required[0]['value'],0,',','.'); ?></strong></div>
    <div class="small light">Erhaltene Unterschriften: <?php print number_format($field_petition_signings[0]['value'],0,',','.'); ?></div>
    <?php if ($partner_html): ?>
        <div class="responsive-list-partner-wrapper small light">
            <p class="push-bottom-xs">Diese Petition läuft auf:</p>
            <a href="<?php print $signing_url; ?>" class="<?php print ($partner_html)?"colorbox-load ":"";?>"><?php print $partner_html; ?></a>
        </div>
    <?php endif; ?>
    <div class="responsive-list-sign-wrapper"><a href="<?php print $signing_url; ?>" class="<?php print ($partner_html)?"colorbox-load ":"";?>button">Unterschreiben</a></div>
</div>
