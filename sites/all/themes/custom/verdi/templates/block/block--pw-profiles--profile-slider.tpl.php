<?php
/**
 * @file
 * Default theme implementation to display a block.
 *
 * Available variables:
 * - $block->subject: Block title.
 * - $content: Block content.
 * - $block->module: Module that generated the block.
 * - $block->delta: An ID for the block, unique within each module.
 * - $block->region: The block region embedding the current block.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - block: The current template type, i.e., "theming hook".
 *   - block-[module]: The module generating the block. For example, the user
 *     module is responsible for handling the default user navigation block. In
 *     that case the class would be 'block-user'.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $block_zebra: Outputs 'odd' and 'even' dependent on each block region.
 * - $zebra: Same output as $block_zebra but independent of any block region.
 * - $block_id: Counter dependent on each block region.
 * - $id: Same output as $block_id but independent of any block region.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $block_html_id: A valid HTML ID and guaranteed unique.
 *
 * @see bootstrap_preprocess_block()
 * @see template_preprocess()
 * @see template_preprocess_block()
 * @see bootstrap_process_block()
 * @see template_process()
 *
 * @ingroup templates
 */
?>
<section id="<?php print $block_html_id; ?>" class="clearfix candidate-teaser <?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="row">
    <div class="view-header">
      <div class="kassen-filter clearfix">
        <div class="kassen-filter-item-group clearfix">
          <h3>Krankenversicherung:</h3>
          <div class="kassen-filter-item" data-kassen-filter="dak_gesundheit">
            <img src="/sites/all/themes/custom/verdi/images/kassen_logo/dak.png" alt="DAK" class="img-responsive">
          </div>
          <div class="kassen-filter-item" data-kassen-filter="kkh">
            <img src="/sites/all/themes/custom/verdi/images/kassen_logo/kkh.png" alt="KKH" class="img-responsive">
          </div>
          <div class="kassen-filter-item" data-kassen-filter="tk">
            <img src="/sites/all/themes/custom/verdi/images/kassen_logo/tk.png" alt="TK" class="img-responsive">
          </div>
          <div class="kassen-filter-item active" data-kassen-filter="barmer">
            <img src="/sites/all/themes/custom/verdi/images/kassen_logo/barmer.png" alt="Barmer" class="img-responsive">
          </div>
        </div>
        <div class="kassen-filter-item-group clearfix" data-kassen-filter="drv_bund">
          <h3>Rentenversicherung:</h3>
          <div class="kassen-filter-item">
            <img src="/sites/all/themes/custom/verdi/images/kassen_logo/drv.png" alt="Deutsche Rentenversicherung" class="img-responsive">
          </div>
        </div>
        <div class="kassen-filter-item-action">
          <a class="btn btn-lg" href=""><i class="fa fa-search"></i></a>
        </div>
        <div class="col-xs-12">
          <div class="kassen-filter-search">
            <div class="input-group">
              <div class="input-group-addon"><i class="fa fa-search"></i></div>
              <input type="text" class="form-control input-lg" id="candidate_search_input" placeholder="Suchbegriff eingeben">
            </div>
          </div>
        </div>
      </div>
    </div>
    <div class="swiper-container swiper-container-horizontal ">
      <div class="swiper-wrapper">
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h2<?php print $title_attributes; ?>><?php print $title; ?></h2>
        <?php endif;?>
        <?php print render($title_suffix); ?>
        <?php print $content; ?>
      </div>
    </div>
    <div class="swiper-button-prev"><i class="fa fa-angle-left"></i></div>
    <div class="swiper-button-next"><i class="fa fa-angle-right"></i></div>
  </div>
</section>
