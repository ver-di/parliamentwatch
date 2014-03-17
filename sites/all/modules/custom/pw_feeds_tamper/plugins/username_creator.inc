<?php

/**
 * @file
 * Do super awesome thing, more awesome than boris' plugin.
 */
$plugin = array(

  'form' => 'username_creator_form',
  // Optional validation callback.
  'validate' => 'username_creator_validate',
  'callback' => 'username_creator',
  'name' => 'Username Creator & Validator',
  'multi' => 'loop',
  'category' => 'Custom',
);

function username_creator_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things like creating usernames.');
  return $form;
}

function username_creator_validate(&$settings) {
  // no form to validate
}

function username_creator($source, $item_key, $element_key, &$field, $settings) {

  if(empty($field)) {

    // uname is empty, create one by following rule set
    $uuid = $source->current_item['xpathparser:3'];
    $title = $source->current_item['xpathparser:7'];
    $fname = $source->current_item['xpathparser:11'];
    $lname = $source->current_item['xpathparser:12'];
    $uname = strtolower($fname) . '-' . strtolower($lname);

    if (!empty($title)) {

      // add title to umame if exists
      $uname = strtolower($title) . '-' . strtolower($uname);

    }

    $uname = preg_replace('/[^a-z -]+/', '', $uname);
    $uname = str_replace(' ', '-', $uname);
    $uname = trim($uname, '-');
    dpm('* $uname *');
    dpm($uname);

    $users = entity_load('user');
    $count = 2;

    foreach($users as $user) {
      if ($user->uuid === $uuid) {

        // if user exists by uuid it just updates the existing user name
        $field = $user->name;
        return;

      }
      if ($user->name === $uname) {

        // if user does not exist by uuid, but the name exists, add a number to name
        $uname .= '-' . $count;
        $count++;

      }
    }

    // create a new user with constructed uname
    $field = $uname;
    return;

  } else {

    // skip the user and dont do anything
    return;

  }

  // unreachable code, dont do anything
  return;

}
