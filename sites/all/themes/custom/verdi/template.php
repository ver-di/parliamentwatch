<?php
/**
 * @file
 * The primary PHP file for this theme.
 */
/*
 * hide title
 */
function verdi_preprocess_page(&$variables) {
  if(isset($variables['node']) && $variables['node']->type == 'dialogue' || arg(0) == 'user' || arg(0) == 'profil'){
    drupal_set_title('');
  }
}
