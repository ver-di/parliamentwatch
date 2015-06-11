<h4 class="push-bottom-xs">
  <a href="/<?php print $path_profile; ?>"><?php print $fullname; ?> (<?php print $party; ?>)</a> zu "<?php print $node_title; ?>"
</h4>
<div class="push-bottom-s">
  <span class="pw-voting">
    Position von <?php print $fullname; ?>:
    <span class="<?php print $class_name; ?> block vote"><?php print $voting_behavior; ?></span>
  </span>
</div>
<div class="float-left pw-kc-profile-picture push-bottom-s">
  <div class="file-image">
    <?php print $portrait ?>
  </div>
</div>
<?php if (strlen($statement) > 0): ?>
<div class="pw-kc-argumentation pushfloat-1">
  <blockquote><div class="pw-expander"><div><?php print $statement; ?></div></div></blockquote>
</div>
<?php endif; ?>