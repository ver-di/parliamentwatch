
//// Report Link
jQuery(document).ready(function() {

   jQuery("a.report_message").click(function () {
		if(!confirm('Soll sich ein Moderator Frage und Antwort angeschauen?')){
			return false;
		}
		var message_id = jQuery(this).attr('id').substr(jQuery(this).attr('id').indexOf('_') + 1);
		var url = 'http://mod.parliamentwatch.org/piraten/api/message/' + message_id + '/report';
		jQuery.get(url);
		alert('Vielen Dank! Ein Moderator wird sich darum kümmern.');
    });


///// slider

    jQuery("#widget_pager_bottom_slider-block").click(function () {
    
        if(jQuery('#block-views-slider-block .views-slideshow-controls-top').css('display') != 'block') {
            jQuery('#region-content').animate({
                top: "0",
                marginBottom: "0"
            }, 500, function() {
                    jQuery('#block-views-slider-block .views-slideshow-controls-top').fadeIn('slow');
                    jQuery('#views_slideshow_cycle_main_slider-block').fadeIn('slow');
            });
            jQuery('#zone-preface-wrapper').animate({
                top: "0"
            }, 500 );            
        } return false;
    });

    jQuery("#views_slideshow_cycle_main_slider-block .close").click(function () {

        jQuery('#views_slideshow_cycle_main_slider-block').fadeOut('slow');  
        jQuery('#views_slideshow_cycle_main_slider-block').css('display','none');    
        jQuery('.views-slideshow-controls-top').fadeOut('slow', function() {
            jQuery('#region-content').animate({
                top: "-168px",
                marginBottom: "-168px"
            }, 500);  
            jQuery('#zone-preface-wrapper').animate({
                top: "-168px"
            }, 500);  
            
            jQuery('#widget_pager_bottom_slider-block .views-slideshow-pager-field-item').removeClass('active');
        });        
    });
    jQuery('#views_slideshow_pager_field_item_bottom_slider-block_0').removeClass('active');


////// Navigation highlighting

    jQuery("#nice-menu-1 li").mouseenter(function(){
        jQuery("#nice-menu-1 li.active-trail").removeClass('active-trail').addClass('active-invisible');
    }).mouseleave(function(){
        jQuery("#nice-menu-1 li.active-invisible").removeClass('active-invisible').addClass('active-trail');
    });
});

