<?php
// $Id: views-exposed-form.tpl.php,v 1.4 2008/05/07 23:00:25 merlinofchaos Exp $
/**
 * @file views-exposed-form.tpl.php
 *
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<style>
  #views-exposed-form-politician-search-view-page {
    background: #f4f4f4 none repeat scroll 0 0;
    border: 1px solid #dedede;
    border-radius: 3px;
    box-shadow: 0 0 4px 1px #ebebeb;
    color: #666;
    margin-bottom: 7em;
    padding: 12px 10px 10px;
    position: relative;
    margin-bottom: 2em;
  }
  .form-item-k {
    float: left;
    width: 43%;
    box-sizing: border-box;
    padding-right: 10px;
  }
  .form-item-k input {
    height: 40px;
    margin-bottom: 0;
    width: 100%;
  }
  #views-exposed-form-politician-search-view-page .form-submit {
    float: left;
    margin-left: 10px;
    width: 40px;
    height: 40px;
    text-indent: -5000em;
    background: url('/sites/abgeordnetenwatch.de/files/custom_search/ic_search_fff.png') no-repeat;
  }

  @media (max-width: 639px) {
    .form-item-k {
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
    #views-exposed-form-politician-search-view-page .views-submit-button {
      clear: left;
    }
    #views-exposed-form-politician-search-view-page .views-exposed-widget {
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
<div class="views-exposed-form">
  <span class="views-exposed-widgets clear-block">
    <?php foreach($widgets as $id => $widget): ?>
      <span class="views-exposed-widget">
          <?php print $widget->widget; ?>
      </span>
    <?php endforeach; ?>
    <script language="JavaScript">
      jQuery("#edit-k").attr("placeholder", "Postleitzahl oder Name");
    </script>
    <span class="views-exposed-widget">
      <?php print $button ?>
    </span>
  </span>
</div>