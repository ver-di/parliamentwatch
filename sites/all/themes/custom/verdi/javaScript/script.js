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
var $quicksearch = $('.quicksearch').keyup( debounce( function() {
    qsRegex = new RegExp( $quicksearch.val(), 'gi' );
    $grid.isotope();
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
    $('.kassen-filter-item label').matchHeight();

    // Candidate Swiper
    var candidateSwiper = new Swiper('.candidate-teaser .swiper-container', {
        prevButton: '.candidate-teaser .swiper-button-prev',
        nextButton: '.candidate-teaser .swiper-button-next',
        slidesPerView: 'auto'
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



});

