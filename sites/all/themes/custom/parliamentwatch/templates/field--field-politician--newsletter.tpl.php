
<?php
if(sizeof($element['#object']->field_politician['und']) > 0){
  print '<div>'.$label.'</div>: ';
  print implode(', ', array_map(function($user) {
    $title = $user['entity']->field_user_title['und'][0]['value'];
    $first_name = $user['entity']->field_user_fname['und'][0]['value'];
    $last_name = $user['entity']->field_user_lname['und'][0]['value'];
    $full_name = trim($title.' '.$first_name.' '.$last_name);
    return l($full_name, 'user/'.$user['entity']->uid);
  }, $element['#object']->field_politician['und']));
}
