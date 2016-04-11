<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<h3><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
<p class="medium">
  <?php print render($content['field_parliament']); ?> / Abstimmung
  <?php
  if(!empty($content['field_poll_date'])){
    print ' am '.render($content['field_poll_date']);
  }
  ?>
</p>
<?php if($content['field_voted']['#items'][0]['value'] == 1): ?>
  <?php
  $block_result = module_invoke('pw_vote', 'block_view', 'final_result_short', array('nid' => $nid));
  if(!empty($block_result['content'])):
    ?>
  <div class="clearfix">
    <ul class="pw-voting clearfix push-bottom-s">
      <?php
      print render($block_result['content']);
      ?>
    </ul>
  </div>
<?php endif; ?>
<?php endif; ?>
<div class="clearfix relative push-bottom-m">
  <div class="responsive-list-image-wrapper img-outline">
    <?php print render($content['field_teaser_image']); ?>
  </div>
  <?php if (!empty($content['body'])): ?>
    <div class="pw-responsive-list-contents push-bottom-xl">
      <?php print render($content['body']); ?>
    </div>
  <?php endif; ?>
  <div class="text-right absolute bottom right">
    <a class="icon-poll" href="<?php print $node_url; ?>" title="zur Abstimmung"> Details zur Abstimmung</a>
  </div>
</div>
<div class="clear clearfix">
  <?php if (!empty($content['field_blogpost_categories'])): ?>
    <div class="icon-taxonomy">
      <?php print render($content['field_blogpost_categories']); ?>
    </div>
  <?php endif; ?>
  <a href="#comments" class="medium">
    <i class="icon-icon-comment"></i>
    <?php print format_plural($comment_count, '1 Kommentar', '@count Kommentare'); ?>
  </a>
</div>
