jQuery(document).ready(function() {

    function goToByScroll(id){
        jQuery('html,body').animate({scrollTop: jQuery("#"+id).offset().top},'1000');
    }

// slick kandidatencheck KC

    // init slick on KC
    $('.view-id-pw_kandidatencheck .view-content').slick({
        autoplay: true,
        autoplaySpeed: 12000,
        nextArrow: '<button type="button" class="slick-next">'+Drupal.t('Zur nächsten These')+'<span></span></button>',
        prevArrow: '<button type="button" class="slick-prev"><span></span>'+Drupal.t('Zur vorherigen These')+'</button>'
    });
    // unslick KC    
    $('.view-id-pw_kandidatencheck .unslick').on('click', function() { // execute on slider change by sliding or cklicking
        $('.view-id-pw_kandidatencheck .view-content').unslick(          
            goToByScroll("pw-block-user-kc"),
            $('.view-id-pw_kandidatencheck .unslick').hide()        
        );
    });

/*
    $(window).load(function () { //https://drupal.org/node/1478648
        $('.responsive-layout-mobile #pw-block-user-kc').addClass('pw-expandable-mobile');
    });
*/

});