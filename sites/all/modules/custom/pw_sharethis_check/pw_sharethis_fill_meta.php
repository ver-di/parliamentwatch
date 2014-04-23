<?php

/*
 * @file
 * Fills meta tables of the sharethis_check module.
 */

$apikey = variable_get('pw_sharethis_check_apikey', false);

if (!$apikey) {
    form_set_error('fill_meta', t('The API key is empty!'));
    $form_state['rebuild'] = true;
    return;
}

//if (!db_table_exists('sharethis_meta')) {
//    
//    $schema = drupal_get_schema_unprocessed('pw_sharethis_check', 'sharethis_meta');
//    
//    db_create_table('sharethis_meta', $schema);
//    
//    if (!db_table_exists('sharethis_meta')) {
//        form_set_error('fill_meta', t('Creation of the meta table failed!'));
//        $form_state['rebuild'] = true;
//        return;
//    }
//}

pw_sharethis_check_iterateNodes();
pw_sharethis_check_iterateUsers();

//if (pw_sharethis_check_iterateNodes())
//    if (pw_sharethis_check_iterateUsers())
//        variable_del('pw_sharethis_check_delaytype');
    
$form_state['rebuild'] = true;
return;