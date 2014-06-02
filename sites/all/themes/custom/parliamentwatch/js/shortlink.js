jQuery(document).ready(function($){
    $(document).on("click",".shorten",function(){
        $(this).parent().find('.pw-question-link .text-field').toggleClass('js-hide');
        $(this).find('span').toggleClass('processed');
        return false;
    });
    $(document).on("click",".permalink input",function(){
        $(this).select();
    });
});