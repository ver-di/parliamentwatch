jQuery(document).ready(function(){
    jQuery('.shorten').click(function(){
        jQuery(this).parent().find('.pw-question-link .text-field').toggleClass('js-hide');
        jQuery(this).find('span').toggleClass('processed');
        return false;
    });
    jQuery('.permalink-wrapper .text-field').click(function(){
        jQuery(this).selectText(); //working with https://github.com/emilkje/jquery.selectText
    });
});