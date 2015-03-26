<?
//todo: field_get_items benutzen
$block = block_load('webform','client-block-10369');
$a = _block_render_blocks(array($block));
$a['webform_client-block-10369']->subject = "";
$signing_form = drupal_render(_block_get_renderable_array($a));

switch ($field_petition_partner[0]['value']) {
  case "":
    $partner_html = "";
    $signing_url = $node_url;
    $sharethis = "<span st_url=\"https://www.abgeordnetenwatch.de$node_url\" st_title=\"$title\" st_summary=\"Petition $title auf abgeordnetenwatch.de\" class=\"st_sharethis_hcount\" displayText=\"sharethis\"></span>";
    break;
  case "change.org":
    $partner_html = '<img src="/sites/all/themes/custom/parliamentwatch/images/logo-change.png" width="119" height="23" alt="Change.org">';
    //$signing_url = "https://secured.abgeordnetenwatch.de/tools/newsletter.php?width=800&height=450&iframe=true&continue=".urlencode($field_petition_external_url['und'][0]['url']);
    //$node_url = $signing_url;
    break;
  case "openpetition":
    $partner_html = '<img src="/sites/all/themes/custom/parliamentwatch/images/logo-openpetition.png" width="119" height="36" alt="OpenPetition">';
    //$signing_url = $field_petition_external_url['und'][0]['url'];
    //$node_url = $signing_url;
    break;
}

$themed_image = theme_image_style(array(
  'style_name' => 'pw_landscape_l', //Configure style here!
  'path' => $field_teaser_image[0]['uri']
));

if (!empty($field_teaser_image[0]['field_image_copyright']) || !empty($field_teaser_image[0]['field_image_copyright']['und'][0]['value'] )){
  $field_image_copyright = true;
}


//$comments = render(comment_node_page_additions($node)['comments']);
?>

<?php if ($sharethis): ?>
  <div class="sharethis-wrapper">
    <? echo $sharethis; ?>
  </div>
<?php endif; ?>
  <div class="push-bottom-m">
    <div class="medium"><? echo $field_petition_recipient[0]['value'] ?></div>
    <?php if (!empty($field_blogpost_blogtags)): ?>
      <div class="icon-taxonomy push-bottom-m">
        <?
        $first_term = true;
        foreach ($field_blogpost_blogtags as $key => $value){
          if ($first_term) {
            $first_term = false;
          }
          else{
            echo ", ";
          }
          echo l($value['taxonomy_term']->name, 'taxonomy/term/' . $value['tid']);
        }
        ?>
      </div>
    <?php endif; ?>
    <div class="pw-petition-progress-wrapper float-left"><div class="pw-petition-progress" style="width: <? echo $field_petition_progress[0]['value'];?>%;"></div></div>
    <div class="medium clear"><h4 class="label-inline">Benötigte Unterschriften:&nbsp;</h4><strong><? echo number_format($field_petition_required[0]['value'],0,',','.'); ?></strong></div>
    <div class="light small push-bottom-m"><?echo number_format($field_petition_signings[0]['value'],0,',','.')?> unterstützen die Petition</div>
    <div class="managed-content">
      <h3><? echo $title; ?></h3>
      <div class="file-image float-left push-bottom-s">
        <div class="content">
          <? echo $themed_image; ?>
          <?php if ($field_image_copyright): ?>
            <div class="copyright">
              <? echo $field_teaser_image[0]['field_image_copyright']['und'][0]['value'] ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
      <? echo $body[0]['value']; ?>
    </div>
  </div>
  <br clear="both"/>
  <div class="push-bottom-l">
    <h3>Petition unterschreiben</h3>
    <div class="comment" style="padding: 12px; font-weight: bold;"><? echo $field_petition_content[0]['value']; ?></div>
    <? echo $signing_form; //todo: Ordentliche CSS-Klasse anstelle der Wiederverwendung von "comment"?>
  </div>
<?php if ($comments): ?>
  <div id="comments" class="comment-wrapper">
    <h3>Ich habe die Petition unterschrieben, weil...</h3>
    <? echo $comments; ?>
  </div>
<?php endif; ?>