<?php if (!empty($content['field_pg_content_link'])): ?>
  <?php $node_url=url($field_pg_content_link[0]['url'], array('absolute' => TRUE)); ?>
<?php endif; ?>
<div class="relative clearfix entity-paragraphs-item <?php print $classes; ?> <?php print render($content['field_pg_donate_targetgroup']); ?>">
  <?php if (!empty($content['field_pg_content_link'])): ?>
  <div class="social-media">
    <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $node_url; ?>" class="facebook" target="_blank">facebook</a>
    <a href="https://twitter.com/intent/tweet?text=<?php print $field_pg_content_title[0]['safe_value']; ?>&url=<?php print $node_url; ?>" class="twitter" target="_blank">twitter</a>
  </div>
  <?php endif; ?>
  <?php hide($content['field_pg_class']); ?>
  <?php print render($content); ?>
</div>
