<?php
  $image = theme('image_style', array(
    'style_name' => 'pw_portrait_xs', //Configure style here!
    'path' => $row->ss_vote_user_image_uri[0],
  ));
?>
<div class="pw-list-item clearfix">
  <h4 class="push-bottom-xs">
    <a href="/profile/<? echo $row->ss_vote_user_drupal_name[0];?>"><? echo $row->ss_vote_user_full_name[0]; ?> (<? echo $row->ss_vote_user_party[0]?>)</a> zu "<? echo $row->ss_vote_node_title[0]; ?>"
  </h4>
  <div class="push-bottom-s">
    <span class="pw-voting">
      Position von <? echo $row->ss_vote_user_full_name[0]; ?>:
      <?php if ($row->ss_vote_user_vote_text[0] == "yes"): ?>
        <span class="yes block vote">lehne ab</span>
      <?php endif; ?>
      <?php if ($row->ss_vote_user_vote_text[0] == "no"): ?>
        <span class="no block vote">lehne ab</span>
      <?php endif; ?>
      <?php if ($row->ss_vote_user_vote_text[0] == "abstain"): ?>
        <span class="abstain block vote">stimme zu</span>
      <?php endif; ?>
      <?php if ($row->ss_vote_user_vote_text[0] == "no-show"): ?>
        <span class="no-show block vote">nicht teilgenommen</span>
      <?php endif; ?>
    </span>
  </div>
  <div class="float-left pw-kc-profile-picture push-bottom-s">
    <div class="file-image">
      <? echo $image ?>
    </div>
  </div>
  <?php if (strlen($row->ss_vote_reason_full[0]) > 0): ?>
  <div class="pw-kc-argumentation pushfloat-1">
    <blockquote><? echo $row->ss_vote_reason_full[0]; ?></blockquote>
  </div>
  <?php endif; ?>
</div>