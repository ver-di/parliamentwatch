<div class="pw-list-item clearfix">
  <h3><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
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

  <?php if(!empty($field_voted[0]['value'])): ?>
  <div class="clearfix">
    <ul class="pw-voting clearfix push-bottom-s">
      <?php
      $block_result = module_invoke('pw_vote', 'block_view', 'final_result_short', array('nid' => $nid));
      print render($block_result['content']);
      ?>
    </ul>
  </div>
  <?php endif; ?>
  <div class="clearfix push-bottom-m">
    <div class="media-image-left img-outline">
      <a href="<?php print $node_url; ?>" title="zur Abstimmung">
        <?php print $themed_image; ?>
      </a>
      <?php if (!empty($field_teaser_image[0]['field_image_copyright']['und'][0]['value'])): ?>
      <div class="copyright">
        <?php print $field_teaser_image[0]['field_image_copyright']['und'][0]['value']; ?>
      </div>
      <?php endif; ?>
    </div>
    <?php print check_markup($body[0]['summary']); ?>
    <p class="text-right">
      <a class="icon-poll" href="<?php print $node_url; ?>" title="zur Abstimmung"> Details zur Abstimmung</a>
    </p>
  </div>
  <div class="clear clearfix">
    <?php if (!empty($field_blogpost_blogtags)): ?>
      <div class="icon-taxonomy">
        <?php print _pw_get_linked_terms($field_blogpost_blogtags); ?>
      </div>
    <?php endif; ?>
    <div class="comment-count">
      <?php print format_plural($comment_count, '1 Kommentar', '@count Kommentare'); ?>
    </div>
  </div>
</div>
