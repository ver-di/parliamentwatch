jQuery(document).ready(function() {

    function goToByScroll(id){
        jQuery('html,body').animate({scrollTop: jQuery("#"+id).offset().top},'1000');
    }

// slick kandidatencheck KC

    // init slick on KC
    $('.view-id-pw_kandidatencheck .view-content').slick({
        autoplay: true,
        autoplaySpeed: 12000,
        nextArrow: '<button type="button" class="slick-next"><span class="desktop-only">'+Drupal.t('Zur nächsten These')+'</span><span class="slick-pager"></span></button>',
        prevArrow: '<button type="button" class="slick-prev"><span class="slick-pager"></span><span class="desktop-only">'+Drupal.t('Zur vorherigen These')+'</span></button>'
    });
    // unslick KC    
    $('.view-id-pw_kandidatencheck .unslick').on('click', function() {
        $('.view-id-pw_kandidatencheck .view-content').slick(
            'unslick',          
            goToByScroll("pw-block-user-kc"),
            $('.view-id-pw_kandidatencheck .unslick').hide()        
        );
    });
    
    $('.slick-slider').on('afterChange', function(e) {
        // trigger scroll to make lazyloader do the job
        $(window).scroll();
    });

/*
    $(window).load(function () { //https://drupal.org/node/1478648
        $('.responsive-layout-mobile #pw-block-user-kc').addClass('pw-expandable-mobile');
    });
*/

});