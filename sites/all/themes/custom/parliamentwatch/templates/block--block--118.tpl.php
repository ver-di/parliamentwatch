<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?><?php print $attributes; ?>>
  <div class="table block-inner clearfix">
    <div class="content-wrapper">        
        <div<?php print $content_attributes; ?>>
          <div class="table-cell grid-17 alpha">
            <div id="logo-transparenz"></div>
            <div class="content-inner">
              <?php print $content ?>
              <strong class="counter medium"><?php print file_get_contents( "/var/www/live_abgeordnetenwatch.de/httpdocs/sites/abgeordnetenwatch.de/files/membership-count.txt" ); ?></strong> Förderer unterstützen bereits unsere Arbeit. Seien auch Sie dabei!
            </div>
          </div>
          <div class="table-cell grid-4 center table-cell-middle desktop-only">
            <a href="/node/10508" class="button push-bottom-0"><span class="icon-thanks aw-icon-2x"></span>Jetzt fördern</a>
          </div>
          <div class="table-cell table-cell-bottom grid-6 omega light small text-right desktop-only">
            <img src="/sites/all/themes/custom/parliamentwatch/images/portrait-frederik-roese.png" alt="Frederik Röse" width="69" height="75" class="float-right" />
            <div class="float-right">
              Frederik Röse<br>
              Förderbetreuung
            </div>
          </div>
        </div>
    </div>
  </div>
</<?php print $tag; ?>>