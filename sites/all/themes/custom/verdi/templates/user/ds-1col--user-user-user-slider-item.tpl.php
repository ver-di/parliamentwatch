<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>

<div class="swiper-slide col-xs-12 col-sm-6 col-md-4">
	<div class="candidate-teaser-item">
   <?php if (isset($title_suffix['contextual_links'])): ?>
     <?php print render($title_suffix['contextual_links']); ?>
   <?php endif; ?>

   <?php print render($elements['field_user_picture']); ?>
   <?php print render($elements['candidate_full_name']); ?>
   <p>
     <?php print render($elements['field_user_list']); ?>
   </p>
   <?php print render($elements['candidate_sl_stats_questions_get']); ?>
   <?php
   $link_text = $field_user_gender[0]['value'] == 'female'?'zur Kandidatin':'zum Kandidaten';
   print l(
    $link_text,
    'user/'.$elements['#account']->uid,
    array(
      'attributes' => array(
        'class' => 'btn btn-primary',
        ),
      )
    );
    ?>
    <!--?php dpm(get_defined_vars()); ?-->
  </div>
</div>



