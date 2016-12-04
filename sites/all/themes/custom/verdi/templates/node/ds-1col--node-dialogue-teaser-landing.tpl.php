<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="col-xs-12 col-sm-6 <?php print $classes;?> clearfix">

    <?php if (isset($title_suffix['contextual_links'])): ?>
        <?php print render($title_suffix['contextual_links']); ?>
    <?php endif; ?>
    <div class="question-teaser-item">
        <?php print $ds_content; ?>
    </div>
</<?php print $ds_content_wrapper ?>>
