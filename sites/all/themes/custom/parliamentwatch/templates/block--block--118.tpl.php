<?php $tag = $block->subject ? 'section' : 'div'; ?>
<<?php print $tag; ?><?php print $attributes; ?>>
  <div class="table block-inner clearfix">
    <div class="content-wrapper">        
        <div<?php print $content_attributes; ?>>
          <div class="table-cell grid-17 alpha">
            <div id="logo-transparenz"></div>
            <div class="content-inner">
              <?php print $content ?>
              <strong class="counter medium" id="mscount"><?php print file_get_contents( "/var/www/live_abgeordnetenwatch.de/httpdocs/sites/abgeordnetenwatch.de/files/membership-count.txt" ); ?></strong> Förderer unterstützen bereits unsere Arbeit. Seien auch Sie dabei!
            </div>            
          </div>
          <div class="table-cell grid-4 center table-cell-middle desktop-only">
            <a href="/ueber-uns/spendenformular?recurring=1" class="button push-bottom-0"><span class="icon-thanks aw-icon-2x"></span>Jetzt fördern</a>
          </div>
          <div class="table-cell table-cell-bottom grid-6 omega light small text-right desktop-only">
            <img src="/sites/all/themes/custom/parliamentwatch/images/portrait-frederik-roese.png" alt="Frederik Röse" width="69" height="75" class="float-right" />
            <div class="float-right">
              Frederik Röse<br>
              Fördererbetreuung
            </div>
          </div>
        </div>
    </div>
  </div>
  <script>
  jQuery(document).ready(
    function() {
      jQuery.ajaxSetup({ cache: false });
      jQuery("#mscount").load("/sites/abgeordnetenwatch.de/files/membership-count.txt");
      jQuery.ajaxSetup({ cache: true });     
      setInterval(function() { 
      jQuery.get("/sites/abgeordnetenwatch.de/files/membership-count.txt",
        function(count){
            var old_count = document.getElementById('mscount').innerHTML;
            if (old_count < count){
              jQuery("#mscount").fadeOut('slow', function(){                                
                jQuery('#mscount').html(count);
                jQuery("#mscount").fadeIn('slow');
                              }
             );
            }
          }
          );
      }, 30000);
    });
</script>
</<?php print $tag; ?>>
