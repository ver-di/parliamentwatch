<div class="view-mode-full">
  <?php
  print theme('status_messages');
  ?>
  <div class="sharethis-wrapper">
    <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
  </div>
  <p class="medium">
    Abstimmung
    <?php
      if(!empty($field_poll_date)){
        $date_object = new DateObject($field_poll_date[0]['value'], new DateTimeZone($field_poll_date[0]['timezone_db']));
        print ' am '.date_format_date($date_object, 'custom', 'd.m.Y');
      }
      print ' im '.$field_parliament[0]['taxonomy_term']->name;
    ?>
  </p>
  <div class="push-bottom-m">
    <?php if (!empty($field_blogpost_blogtags)): ?>
      <div class="icon-taxonomy">
        <?php print _pw_get_linked_terms($field_blogpost_blogtags); ?>
      </div>
    <?php endif; ?>
    <div class="comment-count push-bottom-m">
      <?php print format_plural($comment_count, '1 Kommentar', '@count Kommentare'); ?>
    </div>
  </div>
  <?php print check_markup($body[0]['summary']); ?>
  <?php if($field_voted): ?>
  <?php
      $block_voting_behavior = module_invoke('pw_vote', 'block_view', 'voting_behavior');
      print render($block_voting_behavior['content']);
  ?>
  <h3 id="pw_vote_positions">Wie haben Ihre Abgeordneten abgestimmt?</h3>
  <div class="compact-form push-bottom-l">
    <?php
      $block_search = module_invoke('views', 'block_view', 'pw_vote_search-block_1');
      print render($block_search['content']);
    ?>
  </div>
  <?php endif; ?>
  
  <h3>Hintergrund</h3>
  <div class="managed-content clearfix push-bottom-l">
    <?php print check_markup($body[0]['value']);?>
  </div>
  
  <?php
  // render comments if there are any
  $comments = render(comment_node_page_additions($node));
  ?>
  <div id="comments" class="comment-wrapper">
    <?php if ($comment_count > 0): ?>
    <h3><?php print format_plural($comment_count, '1 Kommentar', '@count Kommentare'); ?> zu "<?php print $title; ?>"</h3>
    <?php endif; ?>
    <?php print $comments; ?>
  </div>
</div>