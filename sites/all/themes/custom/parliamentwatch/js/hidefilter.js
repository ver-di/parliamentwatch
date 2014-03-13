/**
 * Created by oliverpal on 06.11.13.
 *  Hide Questions and Answers Filter and Switcher Block if the number of questions displayed in the profile is 0.
 */
jQuery(document).ready(function(){
    var container_clone=jQuery('.bubble.tiny').clone();
    jQuery('a',container_clone).remove();
    var questionanswers=jQuery.trim(container_clone.text());
    var questionNumber =  questionanswers[0];
    if(questionNumber == '0'){
      jQuery('.ds-right-2').hide("fast");
      jQuery('#pw-block-questions-and-answers').hide("fast");
      jQuery('#form-view-mode-switcher').hide("fast");
    }
});


