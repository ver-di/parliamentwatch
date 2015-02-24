<?php
switch ($field_petition_partner['und'][0]['value']) {
  case "":
    $partner_html = "&nsbp;";
    $signing_url = $node_url;
    break;
  case "change.org":
    $partner_html = "<img src='' alt='Logo von Change.org'/>";
    $signing_url = $field_petition_external_url['und'][0]['url'];
    break;
  case "openpetition":
    $partner_html = "<img src='' alt='Logo von OpenPetition'/>";
    $signing_url = $field_petition_external_url['und'][0]['url'];
    break;
}
$themed_image = theme_image_style(array(
  'style_name' => 'pw_landscape_l__normal', //Configure style here!
  'path' => $field_teaser_image['und'][0]['uri']
));
?>
<hr>
<h2>Titel: <? echo "<a href=\"".$node_url."\">".$title."</a>"; ?></h2>
<div>
  <ul>
    <li>Bild:  <? echo $themed_image; ?></li>
    <li>Copyright: <? echo $field_teaser_image['und'][0]['field_image_copyright']['und'][0]['value'] ?></li>
    <li>Shares: <? echo (isset($field_share_sum['und'][0]['value']))?$field_share_sum['und'][0]['value']:"0"; ?></li>
    <li>Benötigte Unterschriften: <? echo $field_petition_required['und'][0]['value']; ?></li>
    <li>Erhaltene Unterschriften: <? echo $field_petition_signings['und'][0]['value']; ?></li>
    <li>Unterschriftenfortschritt: <? echo $field_petition_progress['und'][0]['value']; ?></li>
    <li>Partnerorganisation: <? echo $partner_html; ?></li>
    <li><a href="<? echo $signing_url; ?>">Hier unterschreiben</a></li>
  </ul>
</div>