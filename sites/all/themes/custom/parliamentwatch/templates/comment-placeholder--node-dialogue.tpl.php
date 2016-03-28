<?php

/**
 * @file
 * Default theme implementation for comments.
 *
 * Available variables:
 * - $title: Title.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - comment: The current template type, i.e., "theming hook".
 * - $permalink: Comment permalink.
 * - $picture: Authors picture.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * This variable is provided for context:
 * - $node: Node object the comments are attached to.
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div class="<?php print $classes; ?> clearfix">
  <div class="content-inner">
    <div class="float-left push-bottom-s push-right-m">
      <?php print $picture; ?>
    </div>
    <?php print render($title_prefix); ?>
    <p><strong><?php print $title ?></strong></p>
    <?php print render($title_suffix); ?>
  </div>
  <fieldset class="more-info content-inner clear collapsible collapsed">
    <legend>
      <span class="fieldset-legend">
        <?php print t('More information about this answer'); ?>
      </span>
    </legend>
    <div class="fieldset-wrapper">
      <div class="icon-link permalink-wrapper">
        <?php print t('Permalink for the above question and answer'); ?>
        <div class="permalink">
          <input type="text" value="<?php print $permalink; ?>" readonly>
        </div>
      </div>
    </div>
  </fieldset>
</div>
