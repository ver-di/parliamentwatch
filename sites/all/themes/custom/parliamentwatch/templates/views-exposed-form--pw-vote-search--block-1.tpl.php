<?php

/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $sort_order: The select box with the ASC, DESC options to define order. May be optional.
 * - $items_per_page: The select box with the available items per page. May be optional.
 * - $offset: A textfield to define the offset of the view. May be optional.
 * - $reset_button: A button to reset the exposed filter applied. May be optional.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 *
 *
 *    <?php if (!empty($sort_by)): ?>
 *     <div class="views-exposed-widget views-widget-sort-by">
 *       <?php print $sort_by; ?>
 *     </div>
 *     <div class="views-exposed-widget views-widget-sort-order">
 *       <?php print $sort_order; ?>
 *     </div>
 *   <?php endif; ?>
 *
 *   class="views-exposed-widgets"
 */
?>
<style>
  #views-exposed-form-pw-vote-search-block-1 {
    background: #f4f4f4 none repeat scroll 0 0;
    border: 1px solid #dedede;
    border-radius: 3px;
    box-shadow: 0 0 4px 1px #ebebeb;
    color: #666;
    margin-bottom: 7em;
    padding: 12px 10px 10px;
    position: relative;
    margin-bottom: 2em !important;
  }
  #edit-keyword-wrapper {
    float: left;
    width: 43%;
    box-sizing: border-box;
    padding-right: 10px;
  }
  #edit-keyword-wrapper input {
    height: 40px;
    margin-bottom: 0;
    width: 100%;
  }
  #edit-ss-vote-user-party-wrapper,
  #edit-ss-vote-user-vote-text-wrapper {
    float: left;
    width: 25%;
    box-sizing: border-box;
    padding-right: 10px;
  }
  #edit-ss-vote-user-party-wrapper select,
  #edit-ss-vote-user-vote-text-wrapper select {
    width: 100%;
    height: 40px;
    margin-bottom: 0;
  }
  #views-exposed-form-pw-vote-search-block-1 .views-submit-button {
    float: right;
    margin-top: 1.8em;
  }
  #views-exposed-form-pw-vote-search-block-1 .form-submit {
    width: 40px;
    height: 40px;
    text-indent: -5000em;
    background: url('/sites/abgeordnetenwatch.de/files/custom_search/ic_search_fff.png') no-repeat;
  }
  
@media (max-width: 639px) {
  #edit-keyword-wrapper {
    float: none;
    width: 100%;
    padding-right: 0;
  }
  #edit-ss-vote-user-party-wrapper,
  #edit-ss-vote-user-vote-text-wrapper {
    float: left;
    width: 50%;
  }
  #edit-ss-vote-user-party-wrapper {
    padding-right: 5px;
  }
  #edit-ss-vote-user-vote-text-wrapper {
    padding-left: 5px;
    padding-right: 0;
  }
  #views-exposed-form-pw-vote-search-block-1 .views-submit-button {
    clear: left;
  }
  #views-exposed-form-pw-vote-search-block-1 .views-exposed-widget {
    padding-bottom: 0 !important;
    margin-bottom: 0 !important;
  }
}
</style>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>
<p>Die Positionen Ihrer Wahlkreisabgeordneten erfahren Sie durch Eingabe Ihrer Postleitzahl.</p>
<div class="views-exposed-form">
    <?php foreach ($widgets as $id => $widget): ?>
      <div id="<?php print $widget->id; ?>-wrapper" class="views-exposed-widget views-widget-<?php print $id; ?>">
        <?php if (!empty($widget->label)): ?>
          <label for="<?php print $widget->id; ?>">
            <?php print ($widget->label == "Suche")?"Suche nach Begriff oder PLZ":$widget->label; ?>
          </label>
        <?php endif; ?>
        <?php if (!empty($widget->operator)): ?>
          <span class="views-operator">
            <?php print $widget->operator; ?>
          </span>
        <?php endif; ?>
        <span class="views-widget <?php print ($widget->label == "Suche")?"pw-vote-search-line":""; ?>">
          <?php print $widget->widget; ?>
        </span>
        <?php if (!empty($widget->description)): ?>
          <span class="description">
            <?php print $widget->description; ?>
          </span>
        <?php endif; ?>
      </div>
    <?php endforeach; ?>
    <?php if (!empty($button)): ?>
    <div class="views-exposed-widget views-submit-button">
      <?php print $button; ?>
    </div>
    <?php endif; ?>
</div>