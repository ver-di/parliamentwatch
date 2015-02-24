<hr>
<h2>Titel: <? echo "<a href=\"".$node_url."\">".$title."</a>"; ?></h2>
<div>
  <ul>
    <li>Bild:  <? echo file_create_url($field_teaser_image['und'][0]['uri']); ?></li>
    <li>Copyright: <? echo $field_teaser_image['und'][0]['field_image_copyright']['und'][0]['value'] ?></li>
    <li>Shares: <? echo (isset($field_share_sum['und'][0]['value']))?$field_share_sum['und'][0]['value']:"0"; ?></li>
    <li>Benötigte Unterschriften: <? echo $field_petition_required['und'][0]['value']; ?></li>
    <li>Erhaltene Unterschriften: <? echo $field_petition_signings['und'][0]['value']; ?></li>
    <li>Unterschriftenfortschritt: <? echo $field_petition_progress['und'][0]['value']; ?></li>
    <li>Partnerorganisation: <? echo $field_petition_partner['und'][0]['value']; ?></li>
  </ul>
</div>