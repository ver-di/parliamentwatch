(function ($) {
    Drupal.behaviors.pw_dialogues = {
        attach: function () {
            $('.user-profile .facetapi-facetapi-links a').each(function () {
               $(this).attr('href', $(this).attr('href') + '#block-pw-dialogues-qa');
            });
            $('.block-pw-dialogues-qa .pager li a').each(function () {
               $(this).attr('href', $(this).attr('href') + '#block-pw-dialogues-qa');
            });
        }
    };
})(jQuery);