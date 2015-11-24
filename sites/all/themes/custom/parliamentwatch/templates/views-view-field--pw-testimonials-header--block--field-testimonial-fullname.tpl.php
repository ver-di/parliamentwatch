<div class="small light views-field-field-testimonial-fullname">
  <?php print $output; ?> <span class="desktop-only inline"> ist eines von <?php // print file_get_contents( "/var/www/live_abgeordnetenwatch.de/httpdocs/sites/abgeordnetenwatch.de/files/membership-count.txt" ); ?> Fördermitgliedern von abgeordnetenwatch.de.</span>
<!--
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
-->
</div>