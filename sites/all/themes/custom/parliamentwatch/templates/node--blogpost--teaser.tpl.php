<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<h3><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
<p class="medium">
  Veröffentlicht am <?php print format_date($node->created, 'custom', 'd.m.Y'); ?>
  um <?php print format_date($node->created, 'custom', 'H:i'); ?>
  von <a href="/feedback?url=<?php print $nid; ?>&amp;width=600&amp;height=400" class="colorbox-node"><?php print $node->name; ?></a> in
  <?php print _pw_get_linked_terms($field_blogpost_categories); ?>
</p>
<div class="clearfix push-bottom-s">
  <?php if (!empty($field_teaser_image)): ?>
  <div class="float-left push-right-m pw-landscape-l file file-image">
    <a href="<?php print $node_url; ?>" title="zum Blogartikel">
      <?php print render($content['field_teaser_image']); ?>
    </a>
    <?php if (!empty($field_teaser_image[0]['field_image_copyright']['und'][0]['value'])): ?>
      <div class="copyright">
        <?php print $field_teaser_image[0]['field_image_copyright']['und'][0]['value']; ?>
      </div>
    <?php endif; ?>
  </div>
  <?php endif; ?>
  <div class="field-body">
    <?php print check_markup($body[0]['summary']); ?>
    <a class="icon-more" href="<?php print $node_url; ?>" title="zum Blogartikel"> weiterlesen</a>
  </div>
</div>
<?php if (!empty($field_blogpost_blogtags)): ?>
  <div class="icon-taxonomy">
    <?php print _pw_get_linked_terms($field_blogpost_blogtags); ?>
  </div>
<?php endif; ?>
<div class="clear clearfix">
  <div class="comment-count">
    <?php print format_plural($comment_count, '1 Kommentar', '@count Kommentare'); ?>
  </div>
</div>
