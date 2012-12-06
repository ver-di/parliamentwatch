<?php
function dailwatch_qt_quicktabs_tabset($vars) {
  $variables = array(
    'attributes' => array(
      'class' => 'quicktabs-tabs quicktabs-style-' . $vars['tabset']['#options']['style'],
    ),
    'items' => array(),
  );
  foreach (element_children($vars['tabset']['tablinks']) as $key) {
    $item = array();
    if (is_array($vars['tabset']['tablinks'][$key])) {
      $tab = $vars['tabset']['tablinks'][$key];
      
      
      if ($key == $vars['tabset']['#options']['active']) {
        $item['class'] = array('active');
      }
      $tab['#title'] = "<span>".$tab['#title']."</span>";
      $tab['#options']['html'] = TRUE;
      $item['data'] = drupal_render($tab);
  
      $variables['items'][] = $item;
    }
  }
  return theme('item_list', $variables);
}