<?php $content_link_url = $content['field_pg_content_link'][0]['#element']['url']; ?>
<div class="relative entity-paragraphs-item <?php print render($content['field_pg_donate_targetgroup']); ?>">
  <div class="social-media">
    <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $content_link_url; ?>" class="facebook" target="_blank">facebook</a>
    <a href="https://twitter.com/intent/tweet?text=Jetzt für abgeordnetenwatch.de spenden&url=<?php print $content_link_url; ?>" class="twitter" target="_blank">twitter</a>
  </div>
  <h3><a href="<?php print $content_link_url; ?>"><?php print render($content['field_pg_content_title']); ?></a></h3>
  <div class="push-bottom-s">
    <?php print render($content['field_pg_content_body']); ?>
  </div>
  <div class="text-center">
    <?php print render($content['field_pg_content_link']); ?>
  </div>
</div>
