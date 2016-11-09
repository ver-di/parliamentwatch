<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<div id="candidate" class="candidate-detail">
	<div class="row">
    <div class="col-xs-12">
      <img src="/sites/all/themes/custom/verdi/images/kassen_logo/drv.png" alt="Deutsche Rentenversicherung" class="img-responsive pull-right candidate-detail-logo">
      <a href="#" class="back-button"><i class="fa fa-angle-left"></i></a>
    </div>
  </div>
	<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col <?php print $classes;?> clearfix">

	  <?php if (isset($title_suffix['contextual_links'])): ?>
	  <?php print render($title_suffix['contextual_links']); ?>
	  <?php endif; ?>

	  <?php print $ds_content; ?>
	</<?php print $ds_content_wrapper ?>>
</div>
