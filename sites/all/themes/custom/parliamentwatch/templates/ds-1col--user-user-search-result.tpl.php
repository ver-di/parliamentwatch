<?php
/**
 * @file
 * Parliamentwatch theme implementation for user search results.
 *
 */
  $profile_link = "/profile/".$elements['#account']->name;
  $image_url = theme('image_style', array(
    'style_name' => 'pw_portrait_m', //Configure style here!
    'path' => $elements['#account']->field_user_picture['und'][0]['uri'],
  ));
  $has_title = (bool) $elements['#account']->field_user_title['und'][0]['value'];
  $title = $elements['#account']->field_user_title['und'][0]['safe_value'];
  $fname = $elements['#account']->field_user_fname['und'][0]['safe_value'];
  $lname = $elements['#account']->field_user_lname['und'][0]['safe_value'];
  $party = taxonomy_term_load($elements['#account']->field_user_party['und'][0]['tid'])->name;
  $parliament = taxonomy_term_load($elements['#account']->field_user_parliament['und'][0]['tid'])->name;
  $constituencies = array();
  foreach ($elements['#account']->field_user_constituency['und'] as $key => $value) {
    $consituency_term = taxonomy_term_load($value['tid']);
    $constituencies[] = $consituency_term->name;
  }
  $constituency = implode(', ', $constituencies);

  $uid = $elements['#account']->uid;
  $roles = $elements['#account']->roles;
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
<div <?php print $attributes; ?> class="ds-1col <?php print $classes; ?> clearfix">
  <div class="grid-2 alpha">
    <div class="arrow-item">
      <a href="<?php print $profile_link;?>">
         <?php print $image_url;?>
      </a>
    </div>
  </div>
  <div id="user_user_search_result_group_grid_6" class="field-group-format group_grid_6 field-group-div group-grid-6 grid-6 omega speed-fast effect-none">
    <?php if($has_title): ?><strong class="field-title"><?php print $title."&nbsp;";?></strong><?php endif; ?><strong class="field-fname"><?php print $fname."&nbsp;";?></strong><strong class="field-lname"><?php print $lname.",&nbsp;";?></strong><?php print $party;?>
    <div class="small"><?php print $parliament; print (!empty($constituency))?"&nbsp;&ndash;&nbsp;".$constituency:"";?></div>
    <span class="field-questionsget"><?php print $questions_get;?> <?php print ($questions_get==1)?'Frage':'Fragen';?></span><?php print $answers_give;?> <?php print ($answers_give==1)?'Antwort':'Antworten';?></div>
  <div class="text-right">
        <span class="link-profile"><a href="<?php print $profile_link;?>">Profil&nbsp;öffnen</a>
        </span>
  </div>
</div>
