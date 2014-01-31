jQuery(document).ready(function($){
    $(document).on("click",".shorten",function(){
        $(this).parent().find('.pw-question-link .text-field').toggleClass('js-hide');
        $(this).find('span').toggleClass('processed');
        return false;
    });
    $(document).on("click",".permalink-wrapper .text-field",function(){
        $(this).selectText(); //working with https://github.com/emilkje/jquery.selectText
    });
});