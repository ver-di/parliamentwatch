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

if ($('.masonry-grid .masonry-item').length > 0) {
    var $grid = $('.masonry-grid').isotope({
        itemSelector: '.masonry-item',
        filter: function() {
            return qsRegex ? $(this).text().match( qsRegex ) : true;
        }
    });
}


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
var $quicksearchQuestion = $('#question_search_input').keyup( debounce( function() {
    qsRegex = new RegExp( $quicksearchQuestion.val(), 'gi' );
    $grid.isotope();

    // Highlight matching Keywords
    $(".masonry-grid").unmark();
    $(".masonry-grid").mark($quicksearchQuestion.val());
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

    /**
     * Frontpage
     */

    // frontpage header

    var frontpageHeader = new Swiper('#frontpage-slider .swiper-container', {
        pagination: '#frontpage-slider .swiper-pagination',
        paginationClickable: true,
        speed: 400,
        spaceBetween: 20
    });
    $('#frontpage-slider .swiper-slide-content-wrapper').matchHeight();

    console.log($('#frontpage-slider .swiper-slide').length);

    if ($('#frontpage-slider .swiper-slide').length <= 1) {
        $('#frontpage-slider').addClass('single-slide');
    }

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

        // Show Swiper if filter is pressed
        $('.candidate-teaser .swiper-container, .candidate-teaser .swiper-button-prev, .candidate-teaser .swiper-button-next').show();

        // Filter-button active style
        $('[data-kassen-filter]').removeClass('active');
        $(this).addClass('active');

        // Hide all Items
        $('.candidate-teaser .swiper-slide').hide();

        // Check for filterd Items and show them
        $('.candidate-teaser .swiper-slide').each(function( key, value ) {
            var filterdItem = $(this).children('.candidate-teaser-item').children('p').children('.text-magenta').text().substring(6).replace(/ /g,"_").replace(/-/g,"_").toLowerCase();
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

    // Candidate Swiper search
    var $quicksearch = $('#candidate_search_input').keyup( debounce( function() {
        qsRegex = new RegExp( $quicksearch.val(), 'gi' );

        console.log($quicksearch.val());

        $('.candidate-teaser .swiper-slide').hide();

        // Highlight matching Keywords
        $(".candidate-teaser-item h3").unmark();
        $(".candidate-teaser-item h3").mark($quicksearch.val(), {
            "className": "highlight candidate-teaser-highlight",
            "done": function(count){
                if (count == '0') {
                    $('.candidate-teaser-no-result').remove();
                    $('.candidate-teaser.view .row').append('<div class="col-xs-12"><div class="candidate-teaser-no-result gray-box padded"><p class="text-center">Leider konnte kein Kandidat gefunden werden.</p></div></div>')
                } else {
                    $('.candidate-teaser-no-result').remove();
                    $('.candidate-teaser-highlight').parents('.swiper-slide').show();
                    candidateSwiper.update();
                }
            }
        });

        // Deselect other Filter
        $('[data-kassen-filter]').removeClass('active');


        // Check if input is empty
        if (!$quicksearch.val() == '') {
            // Show Swiper if input is filled
            $('.candidate-teaser .swiper-container, .candidate-teaser .swiper-button-prev, .candidate-teaser .swiper-button-next').show();
            candidateSwiper.update();
        } else {
            // Hide Swiper if input is empty
            $('.candidate-teaser .swiper-container, .candidate-teaser .swiper-button-prev, .candidate-teaser .swiper-button-next, .candidate-teaser-no-result').hide();
        }

    }, 200 ) );



    // Frontpage: Recent Questions & Answers

    $(".question-teaser-item .question").dotdotdot({
        watch: true,
        callback: function( isTruncated, orgContent ) {
            $('.question-teaser-item').matchHeight();
        }
    });

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


    // question modal

    $('.js-select2').select2();
});

