$.fn.gauge = function(opts) {
    this.each(function() {
        var $this = $(this),
            data = $this.data();
        gaugeValue = $this.parent('.gauge-widget').find('.gauge-value').attr('data-gauge-value');

        if (data.gauge) {
            data.gauge.stop();
            delete data.gauge;
        }
        if (opts !== false) {
            data.gauge = new Donut(this).setOptions(opts);
            data.gauge.maxValue = 100;
            data.gauge.animationSpeed = 32;
            data.gauge.set(gaugeValue);
        }
    });
    return this;
};

//
// Isotope
//

// quick search regex
var qsRegex;

var $grid = $('.masonry-grid').isotope({
    itemSelector: '.masonry-item',
    filter: function() {
        return qsRegex ? $(this).text().match( qsRegex ) : true;
    }
});

// filter: Checkbox for answered questions
$('.masonry-filter .checkbox label').on( 'click', function() {
    var filterValue = $(this).attr('data-filter');
    if ($(this).find('input').is(':checked')) {
        $grid.isotope({ filter: filterValue });
    } else {
        $grid.isotope({ filter: '*' });
    }
});

// filter: Text-Search


// use value of search field to filter
var $quicksearch = $('#question_search_input').keyup( debounce( function() {
    qsRegex = new RegExp( $quicksearch.val(), 'gi' );
    $grid.isotope();

    // Highlight matching Keywords
    $(".masonry-grid").unmark();
    $(".masonry-grid").mark($quicksearch.val());
}, 200 ) );

// debounce so filtering doesn't happen every millisecond
function debounce( fn, threshold ) {
    var timeout;
    return function debounced() {
        if ( timeout ) {
            clearTimeout( timeout );
        }
        function delayed() {
            fn();
            timeout = null;
        }
        timeout = setTimeout( delayed, threshold || 100 );
    }
}



// Colorbox responsive
// https://www.drupal.org/node/2154099

(function ($, Drupal, window, document, undefined) {
//Configure colorbox call back to resize with custom dimensions 
  $.colorbox.settings.onLoad = function() {
    colorboxResize();
  }

  //Customize colorbox dimensions
  var colorboxResize = function(resize) {
    var width = "90%";
    var height = "90%";
    
    if($(window).width() > 960) { width = "900" }
    if($(window).height() > 700) { height = "830" } 
   
    $.colorbox.settings.height = height;
    $.colorbox.settings.width = width;
    
    //if window is resized while lightbox open
    if(resize) {
      $.colorbox.resize({
        'height': height,
        'width': width
      });
    } 
  }
  
  //In case of window being resized
  $(window).resize(function() {
    colorboxResize(true);
  });

})(jQuery, Drupal, this, this.document);


$(document).ready(function() {

    // frontpage header

    var frontpageHeader = new Swiper('#frontpage-slider .swiper-container', {
        pagination: '#frontpage-slider .swiper-pagination',
        paginationClickable: true,
        speed: 400,
        spaceBetween: 20
    });
    $('#frontpage-slider .swiper-slide-content-wrapper').matchHeight();

    // question modal

    $('.js-select2').select2();

    // insurance-filter (Kassen-Filter)
    $('.kassen-filter-item').matchHeight();

    // Candidate Swiper
    var candidateSwiper = new Swiper('.candidate-teaser .swiper-container', {
        prevButton: '.candidate-teaser .swiper-button-prev',
        nextButton: '.candidate-teaser .swiper-button-next',
        slidesPerView: 'auto'
    });
    // Candidate Swiper - Filter
    $('[data-kassen-filter]').click(function(event) {
        var filterValue = $(this).attr('data-kassen-filter');

        // Show Swiper
        $('.candidate-teaser .swiper-container').show();

        // Filter-button active style
        $('[data-kassen-filter]').removeClass('active');
        $(this).addClass('active');

        // Hide all Items
        $('.candidate-teaser .swiper-slide').hide();

        // Check for filterd Items and show them
        $('.candidate-teaser .swiper-slide').each(function( key, value ) {
            var filterdItem = $(this).children('.candidate-teaser-item').children('p').children('a').text().substring(6).replace(/ /g,"_").replace(/-/g,"_").toLowerCase();
            if (filterdItem == 'dak_gesundheit' && filterValue == 'dak_gesundheit') {
                $(this).show();
            }
            if (filterdItem == 'kkh' && filterValue == 'kkh') {
                $(this).show();
            }
            if (filterdItem == 'tk' && filterValue == 'tk') {
                $(this).show();
            }
            if (filterdItem == 'barmer' && filterValue == 'barmer') {
                $(this).show();
            }
            if (filterdItem == 'drv_bund' && filterValue == 'drv_bund') {
                $(this).show();
            }
            candidateSwiper.update();
        });
        return false;
    });

    // Candidate Swiper filter
    $('.kassen-filter-item-action .btn').on( 'click', function() {
        $(this).toggleClass('active');
        $('.kassen-filter-search').toggleClass('open');

        return false;
    });

    $('#candidate_search_input').keyup( debounce( function() {
    }, 200 ) );

    // Gauges
    var opts = {
        lines: 12,
        angle: 0.5,
        lineWidth: 0.1,
        pointer: {
            length: 0.9,
            strokeWidth: 0.035,
            color: '#000000'
        },
        limitMax: 'true',
        colorStart: '#db204b',
        colorStop: '#b4173b',
        strokeColor: '#EEEEEE',
        generateGradient: true
    };

    $('.gauge-widget .gauge').gauge(opts);


    // Candidate-Detail

    // Back-Button

    $('.candidate-header .back-button').on( 'click', function() {

        window.history.back();

        return false;
    });

});

