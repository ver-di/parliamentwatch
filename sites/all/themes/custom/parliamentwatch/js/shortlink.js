jQuery(document).ready(function(){
    jQuery('.shorten input').attr('checked', false); 
    jQuery('.shorten').click(function(){
        jQuery(this).parent().find('.pw-question-link .text-field').toggle();
        jQuery(this).parent().find('.pw-question-link .text-field').toggleClass('permalink');
        jQuery(this).parent().find('input').attr('checked', !jQuery(this).parent().find('input').attr('checked'));
        return false;
    });
    jQuery('.permalink-wrapper .text-field').click(function(){
        jQuery(this).selectText(); //working with https://github.com/emilkje/jquery.selectText
    });
});