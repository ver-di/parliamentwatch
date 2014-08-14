<?php
function abgeordnetenwatch_theme(&$existing, $type, $theme, $path) {
  $hooks['user_login'] = array(
    'template' => 'templates/user-login',
    'render element' => 'form',
    // other theme registration code...
  );
  return $hooks;
}
function mytheme_preprocess_user_login(&$variables) {
  $variables['intro_text'] = '';
  $variables['rendered'] = drupal_render_children($variables['form']);
}