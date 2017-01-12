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
    <div class="candidate-teaser-item-stats">
      <div class="row">
        <div class="col-xs-5 candidate-teaser-item-stats-count clearfix">
          <span class="value"><?php print $count_questions > 0?$count_questions:''; ?></span>
          <span class="label">
            <?php if($count_questions > 0) {
              print format_plural($count_questions, t('Question'), t('Questions'));
            }
            else{
              print t('Ask the first question.');
            }
            ?>
          </span>
        </div>
        <?php if($count_questions > 0): ?>
          <div class="col-xs-7 candidate-teaser-item-stats-countasked">
            <div class="gauge-widget">
              <canvas class="gauge" width="45" height="45"></canvas>
              <div class="gauge-value" data-gauge-value="<?php print $precent_answered; ?>"><?php print $precent_answered; ?>%</div>
            </div>
            <span class="label">beantwortet</span>
          </div>
        <?php endif; ?>
      </div>
    </div>
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
  </div>
</div>



