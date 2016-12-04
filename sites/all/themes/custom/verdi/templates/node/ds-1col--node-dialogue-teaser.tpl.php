<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="col-xs-12 col-sm-6 col-md-4 masonry-item ds-1col <?php print $classes;?> clearfix">

    <?php if (isset($title_suffix['contextual_links'])): ?>
        <?php print render($title_suffix['contextual_links']); ?>
    <?php endif; ?>

    <div class="question-item">
        <?php print $ds_content; ?>
        <div class="question-item-answer">
            <?php print render($content['comments']); ?>
        </div>
        <?php print render($content['button_dialogue']); ?>
    </div>

</<?php print $ds_content_wrapper ?>>
