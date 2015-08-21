<?php
/**
 * @file
 * Parliamentwatch theme implementation for user search results.
 *
 */
$profile_link = $row->_entity_properties['url'];
if (!empty($row->_entity_properties['entity object']->field_user_picture)){
  $image_url = theme('image_style', array(
    'style_name' => 'pw_portrait_m', //Configure style here!
    'path' => $row->_entity_properties['entity object']->field_user_picture['und'][0]['uri'],
  ));
}
else {
  $image_url = theme('image_style', array(
    'style_name' => 'pw_portrait_m', //Configure style here!
    'path' => "public://default_images/img_fotodummy_210x140.jpg",
  ));
}
$has_title = (bool) $row->_entity_properties['entity object']->field_user_title['und'][0]['value'];
$title = $row->_entity_properties['entity object']->field_user_title['und'][0]['safe_value'];
$fname = $row->_entity_properties['entity object']->field_user_fname['und'][0]['safe_value'];
$lname = $row->_entity_properties['entity object']->field_user_lname['und'][0]['safe_value'];
$party = taxonomy_term_load($row->_entity_properties['entity object']->field_user_party['und'][0]['tid'])->name;
$parliament = taxonomy_term_load($row->_entity_properties['entity object']->field_user_parliament['und'][0]['tid'])->name;
$constituency = taxonomy_term_load($row->_entity_properties['entity object']->field_user_constituency['und'][0]['tid'])->name;

$uid = $row->_entity_properties['uid'];
$roles = $elements['#account']->roles; //TODO: Aus Entity-Object laden
if (in_array("Candidate",$roles)){
  $role = "candidate";
}
else{
  $role = "deputy";
}
$result = db_query('SELECT `vid` FROM `user_archive_cache` WHERE `uid` = :uid AND `parliament_name` = :parliament AND `user_role` = :role',array(
  ':uid' => $uid,
  ':parliament' => $parliament,
  ':role' => $role
))->fetchCol();
$user_revision = user_revision_load($uid,$result[0]);

$questions_get = $user_revision->field_user_questions_get['und'][0]['value'];
$answers_give = $user_revision->field_user_answers_give['und'][0]['value'];
?>
<hr/>
<div class="ds-1col <?php print $classes; ?> clearfix">
  <div class="grid-2 alpha">
    <div class="arrow-item">
      <a href="<?php print $profile_link;?>">
        <?php print $image_url;?>
      </a>
    </div>
  </div>
  <div id="user_user_search_result_group_grid_6" class="field-group-format group_grid_6 field-group-div group-grid-6 grid-6 omega speed-fast effect-none">
    <?php if($has_title): ?><strong class="field-title"><?php print $title;?></strong><?php endif; ?><strong class="field-fname"><?php print $fname;?></strong><strong class="field-lname"><?php print $lname;?></strong><?php print $party;?>
    <div class="small"><?php print $parliament; print (!empty($constituency))?"&nbsp;&ndash;&nbsp;".$constituency:"";?></div>
 </div>
  <div class="text-right">
        <span class="link-profile"><a href="<?php print $profile_link;?>"><?php print ($has_title)?$title."&nbsp;":"";?><?php print $fname;?>&nbsp;<?php print $lname;?></a>
        </span>
  </div>
</div>
