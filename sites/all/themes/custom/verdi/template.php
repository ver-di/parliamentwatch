<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
/*
 * hide title
 */
function verdi_preprocess_page(&$variables) {
  if(isset($variables['node']) && $variables['node']->type == 'dialogue' || isset($variables['user'])){
    drupal_set_title('');
  }
}
