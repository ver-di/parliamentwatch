<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<h3><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
<p class="medium">Veröffentlicht am 10.09.2015 um 12:01 von Redaktion in Lobbyismus</p>
<div class="clearfix push-bottom-s">
    
    <?php print check_markup($body[0]['summary']); ?>
    <a class="icon-more" href="<?php print $node_url; ?>" title="zum Blogartikel"> weiterlesen</a>
</div>
<div class="clear clearfix">
  <?php if (!empty($field_blogpost_categories)): ?>
    <div class="icon-taxonomy">
      <?php print _pw_get_linked_terms($field_blogpost_categories); ?>
    </div>
  <?php endif; ?>
  <div class="comment-count">
    <?php print format_plural($comment_count, '1 Kommentar', '@count Kommentare'); ?>
  </div>
</div>