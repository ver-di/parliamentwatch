<hr>
Full view for collecting donations.
<h2>Titel: <? echo "<a href=\"".$node_url."\">".$title."</a>"; ?></h2>
<div>
  <ul>
    <li>Bild:  <? echo file_create_url($field_teaser_image[0]['uri']); ?></li>
    <li>Copyright: <? echo $field_teaser_image[0]['field_image_copyright']['und'][0]['value'] ?></li>
    <li>Shares: <? echo (isset($field_share_sum['und'][0]['value']))?$field_share_sum['und'][0]['value']:"0"; ?></li>
    <li>Benötigte Spendensumme: <? echo $field_donation_required['und'][0]['value']; ?></li>
    <li>Erhaltene Spendensumme: <? echo $field_donation_amount['und'][0]['value']; ?></li>
    <li>Spendenfortschritt: <? echo $field_donation_progress['und'][0]['value']; ?></li>
    <li>Partnerorganisation: <? echo $field_petition_partner['und'][0]['value']; ?></li>
  </ul>
</div>
<?
$block = block_load('webform','client-block-10508');
$a = _block_render_blocks(array($block));
$a['webform_client-block-10508']->subject = "";
print  drupal_render(_block_get_renderable_array($a));

// Render content only
//$block = module_invoke('webform', 'block_view', 'client-block-10508');
//print render($block['content']);
?>
