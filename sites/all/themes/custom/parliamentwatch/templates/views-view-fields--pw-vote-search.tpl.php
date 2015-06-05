<?php
  $image = theme('image_style', array(
    'style_name' => 'pw_portrait_xs', //Configure style here!
    'path' => $row->ss_vote_user_image_uri[0],
  ));
?>
  <h4 class="push-bottom-xs">
    <a href="/profile/<? echo $row->ss_vote_user_drupal_name[0];?>"><? echo $row->ss_vote_user_full_name[0]; ?> (<? echo $row->ss_vote_user_party[0]?>)</a> zu "<? echo $row->ss_vote_node_title[0]; ?>"
  </h4>
  <div class="push-bottom-s">
    <span class="pw-voting">
      Position von <? echo $row->ss_vote_user_full_name[0]; ?>:
      <?php if ($row->ss_vote_user_vote_text[0] == "yes"): ?>
        <span class="yes block vote">dafür gestimmt</span>
      <?php endif; ?>
      <?php if ($row->ss_vote_user_vote_text[0] == "no"): ?>
        <span class="no block vote">dagegen gestimmt</span>
      <?php endif; ?>
      <?php if ($row->ss_vote_user_vote_text[0] == "abstain"): ?>
        <span class="abstain block vote">enthalten</span>
      <?php endif; ?>
      <?php if ($row->ss_vote_user_vote_text[0] == "no-show"): ?>
        <span class="no-show block vote">nicht beteiligt</span>
      <?php endif; ?>
    </span>
  </div>
  <div class="float-left pw-kc-profile-picture push-bottom-s">
    <div class="file-image">
      <a href="/profile/<? echo $row->ss_vote_user_drupal_name[0];?>" title="Profil öffnen"><? echo $image ?></a>
    </div>
  </div>
  <div class="statement">
    <div class="scrollbars-inner">
      <? echo check_markup($row->ss_vote_reason_full[0]); ?>
    </div>
  </div>
  <div class="text-right">
    <a href="/profile/<? echo $row->ss_vote_user_drupal_name[0];?>" class="icon-politician">Profil öffnen</a>
  </div>
