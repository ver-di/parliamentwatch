<?php
switch ($field_petition_partner['und'][0]['value']) {
  case "":
    $partner_html = "";
    $signing_url = $node_url;
    $sharethis = "<span st_url=\"https://www.abgeordnetenwatch.de$node_url\" st_title=\"$title\" st_summary=\"Petition $title auf abgeordnetenwatch.de\" class=\"st_sharethis_hcount\" displayText=\"sharethis\"></span>";
    break;
  case "change.org":
    $partner_html = '<img src="/sites/all/themes/custom/parliamentwatch/images/logo-change.png" width="119" height="23" alt="Change.org">';
    $signing_url = "https://secured.abgeordnetenwatch.de/tools/newsletter.php?width=800&height=350&iframe=true&continue=".urlencode($field_petition_external_url['und'][0]['url']);
    $node_url = $signing_url;
    break;
  case "openpetition":
    $partner_html = '<img src="/sites/all/themes/custom/parliamentwatch/images/logo-openpetition.png" width="119" height="36" alt="OpenPetition">';
    $signing_url = $field_petition_external_url['und'][0]['url'];
    $node_url = $signing_url;
    break;
}
$themed_image = theme_image_style(array(
  'style_name' => 'pw_landscape_l', //Configure style here!
  'path' => $field_teaser_image['und'][0]['uri']
));
if (!empty($field_teaser_image['und'][0]['field_image_copyright']) || !empty($field_teaser_image['und'][0]['field_image_copyright']['und'][0]['value'] )){
  $field_image_copyright = true;
}
?>
<style>#cboxPrevious, #cboxNext, #cboxCurrent{visibility: hidden;}</style>
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
		<li><i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-brand"><span class="element-invisible"><?php print t('Unterschriften werden gesammelt');?></span></i></li>
		<li><i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition in der Meinungsumfrage');?></span></i></li>
		<li><i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition im Parlament');?></span></i></li>
	</ul>
    <a href="<?=$node_url?>" class="<?=($partner_html)?"colorbox-load":""?>"><?=$title?></a>
</h3>
<div class="petition-list-image-wrapper img-outline">
    <a href="<? echo $node_url; ?>" title="zur Petition" class="<?=($partner_html)?"colorbox-load":""?>">
    	<? echo $themed_image; ?>
    </a>
    <?php if ($field_image_copyright): ?>
    <div class="copyright">
		<? echo $field_teaser_image['und'][0]['field_image_copyright']['und'][0]['value'] ?>
	</div>
	<?php endif; ?>
</div>
<div class="pw-petition-list-contents">
    <div class="pw-petition-progress-wrapper-m push-bottom-s">
		<div class="pw-petition-progress-signings" title="Unterschriften">
	    	<span style="width: <? echo $field_petition_progress['und'][0]['value']; ?>%;" class="pw-petition-progress-m">Fortschritt: <? echo $field_petition_progress['und'][0]['value']; ?>%</span>
	    </div>
	    <div class="pw-petition-progress-donations" title="Spenden">
	    	<span style="width: 0;" class="pw-petition-progress-m"></span>
	    </div>
    </div>
    <div class="medium">Benötigte Unterschriften: <? echo number_format($field_petition_required['und'][0]['value'],0,',','.'); ?></div>
    <div class="small light">Erhaltene Unterschriften: <? echo number_format($field_petition_signings['und'][0]['value'],0,',','.'); ?></div>
    <?php if ($partner_html): ?>
    	<div class="petition-list-partner-wrapper small light">
    		<p class="push-bottom-xs">Diese Petition läuft auf:</p>
    		<? echo $partner_html; ?>
    	</div>
    <?php endif; ?>
    <div class="petition-list-sign-wrapper"><a href="<? echo $signing_url; ?>" class="<?=($partner_html)?"colorbox-load ":""?>button">Unterschreiben</a></div>
</div>
