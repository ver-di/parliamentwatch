<?php
$image = theme('image_style', array(
  'style_name' => 'pw_portrait_m', //Configure style here!
  'path' => $row->ss_vote_user_image_uri[0],
));
?>
<h2><a href="/profile/<? echo $row->ss_vote_user_drupal_name[0];?>"><? echo $row->ss_vote_user_full_name[0]; ?> (<? echo $row->ss_vote_user_party[0]?>)</a> zu "<? echo $row->ss_vote_node_title[0]; ?>"</h2>
<small>Position von <? echo $row->ss_vote_user_full_name[0]; ?>:
<?php if ($row->ss_vote_user_vote_text[0] == "yes"): ?>
    stimme zu
<?php endif; ?>
<?php if ($row->ss_vote_user_vote_text[0] == "no"): ?>
    lehne ab
<?php endif; ?>
<?php if ($row->ss_vote_user_vote_text[0] == "abstain"): ?>
    enthalten
<?php endif; ?>
<?php if ($row->ss_vote_user_vote_text[0] == "no-show"): ?>
    nicht teilgenommen
<?php endif; ?>
</small>
<br/>
<? echo $image ?>
<div>
  <blockquote><? echo $row->ss_vote_reason_full[0]; ?></blockquote> <a href>Ganzen Text laden</a>
</div>
<!--<blockquote><? echo $row->ss_vote_reason_summary[0]; ?></blockquote>-->
<hr/>