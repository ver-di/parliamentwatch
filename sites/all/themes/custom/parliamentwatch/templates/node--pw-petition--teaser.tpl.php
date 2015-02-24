<?php
switch ($field_petition_partner['und'][0]['value']) {
  case "":
    $partner_html = "";
    $signing_url = $node_url;
    break;
  case "change.org":
    $partner_html = "<img src='' alt='Logo von Change.org'/>";
    $signing_url = $field_petition_external_url['und'][0]['url'];
    $node_url = $signing_url;
    break;
  case "openpetition":
    $partner_html = "<img src='' alt='Logo von OpenPetition'/>";
    $signing_url = $field_petition_external_url['und'][0]['url'];
    $node_url = $signing_url;
    break;
}
$themed_image = theme_image_style(array(
  'style_name' => 'pw_landscape_l__normal', //Configure style here!
  'path' => $field_teaser_image['und'][0]['uri']
));
?>
<hr>
<ul>
	<li><i class="icon-signing"><?php print t('Unterschriften werden gesammelt');?></i></li>
	<li><?php print t('Petition in der Meinungsumfrage');?></li>
	<li><?php print t('Petition im Parlament');?></li>
</ul>
<h2><? echo "<a href=\"".$node_url."\">".$title."</a>"; ?></h2>
<div>	
	
	<div class="sharethis-wrapper"><span displaytext="sharethis" class="st_sharethis_hcount" st_title="Verschleierung von Nebeneinkünften stoppen!" st_url="https://www.abgeordnetenwatch.de/petitions/verschleierung-von-nebeneinkuenften-stoppen" st_processed="yes"><span style="text-decoration:none;color:#000000;display:inline-block;cursor:pointer;" class="stButton"><span><span class="stMainServices st-sharethis-counter" style="background-image: url(&quot;https://ws.sharethis.com/images/sharethis_counter.png&quot;);">&nbsp;</span><span class="stArrow"><span class="stButton_gradient stHBubble" style="display: inline-block;"><span class="stBubble_hcount"><? echo (isset($field_share_sum['und'][0]['value']))?$field_share_sum['und'][0]['value']:"0"; ?></span></span></span></span></span></span>
</div>

    <li>Bild:  <? echo $themed_image; ?></li>
    <div class="copyright"><? echo $field_teaser_image['und'][0]['field_image_copyright']['und'][0]['value'] ?></div>
    <div class="medium">Benötigte Unterschriften: <? echo $field_petition_required['und'][0]['value']; ?></div>
    <div class="small light">Erhaltene Unterschriften: <? echo $field_petition_signings['und'][0]['value']; ?></div>
    <span class="pw-progress-wrapper">
    	<span style="width: <? echo $field_petition_progress['und'][0]['value']; ?>%;" class="pw-progress">Fortschritt: <? echo $field_petition_progress['und'][0]['value']; ?>%</span>
    </span>
    <?php if ($partner_html): ?><li>Diese Petition läuft auf: <? echo $partner_html; ?></li><?php endif; ?>
    <div><a href="<? echo $signing_url; ?>" class="button">Hier unterschreiben</a></div>
</div>