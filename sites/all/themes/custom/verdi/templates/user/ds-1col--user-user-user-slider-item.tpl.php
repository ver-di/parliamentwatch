<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<div class="swiper-slide col-xs-12 col-sm-6 col-md-4">
	<div class="candidate-teaser-item">
	  <?php if (isset($title_suffix['contextual_links'])): ?>
	  <?php print render($title_suffix['contextual_links']); ?>
	  <?php endif; ?>

	  <?php print $ds_content; ?>
	</div>
</div>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
