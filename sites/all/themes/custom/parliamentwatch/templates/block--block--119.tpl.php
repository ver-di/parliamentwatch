<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?><?php print $attributes; ?>>
  <div class="block-inner clearfix">
    <div class="content-wrapper">
        <?php print render($title_prefix); ?>
        <?php if ($block->subject): ?>
          <h3<?php print $title_attributes; ?>><?php print $block->subject; ?></h3>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        
        <div<?php print $content_attributes; ?>>
          <div id="logo-footer">
            <img src="/sites/all/themes/custom/parliamentwatch/images/logo-transparent-370x44.png" alt="abgeordnetenwatch.de - Weil Transparenz Vertrauen schafft" width="370" height="44" />
          </div>
          <?php print $content ?>
        </div>
    </div>
  </div>
</<?php print $tag; ?>>