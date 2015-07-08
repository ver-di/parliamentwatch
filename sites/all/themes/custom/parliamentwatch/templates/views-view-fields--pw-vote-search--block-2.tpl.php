<?php
  $image = theme('image_style', array(
    'style_name' => 'pw_portrait_xs', //Configure style here!
    'path' => $row->ss_vote_user_image_uri[0],
  ));
?>
  <div class="media-image-left">
    <div class="file-image">
      <a href="/profile/<?php print $row->ss_vote_user_drupal_name[0];?>" title="Profil öffnen"><?php print $image ?></a>
    </div>
  </div>
  <h4 class="push-bottom-xs">
    <a href="/profile/<?php print $row->ss_vote_user_drupal_name[0];?>"><?php print $row->ss_vote_user_full_name[0]; ?> (<?php print $row->ss_vote_user_party[0]?>)</a>
  </h4>
  <div>
    <span class="pw-voting">
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
  <div class="text-right">
    <a href="/profile/<?php print $row->ss_vote_user_drupal_name[0];?>#question_form" class="icon-politician">jetzt zur Position befragen</a>
  </div>