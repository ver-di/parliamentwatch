<fieldset <?php print $attributes; ?>>
  <legend style="width: 300px;"><span class="fieldset-legend"><?php print $fields['fieldset']->content; ?></span></legend>
  <div class="fieldset-wrapper">
    <?php if (pw_user_revision_switch_is_shown_metric("questions", $row->user_archive_cache_parliament_name)): ?>
      <div class="medium"><?php print $fields['number_of_answers']->content; ?></div>
    <?php endif ?>
    <?php if ($row->user_archive_cache_user_role == "deputy"): ?>
      <?php if (pw_user_revision_switch_is_shown_metric("sidejobs", $row->user_archive_cache_parliament_name)): ?>
        <div class="medium"><?php print $fields['number_of_sideline_jobs']->content; ?></div>
      <?php endif ?>
      <?php if (pw_user_revision_switch_is_shown_metric("speeches", $row->user_archive_cache_parliament_name)): ?>
        <div class="medium"><?php print $fields['number_of_speeches']->content; ?></div>
      <?php endif ?>
      <?php if (pw_user_revision_switch_is_shown_metric("voting_behavior", $row->user_archive_cache_parliament_name)): ?>
        <div class="medium"><?php print $fields['number_of_missed_votings']->content; ?></div>
      <?php endif ?>
    <?php endif ?>
    <p class="text-right"><?php print $fields['php_1']->content; ?></p>
  </div>
</fieldset>
