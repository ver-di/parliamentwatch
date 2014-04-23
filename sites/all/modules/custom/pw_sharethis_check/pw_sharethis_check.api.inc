<?php

/**
 * @file
 * Includes the sharethis_check api
 */

/**
 * Iterates through all nodes defined in the config and adds/updates their 
 * entries in the sharethis_meta table. Additionally sets the share_basevalue if 
 * the node type is defined inside the base values variable.
 * @return bool whether the iteration could finish.
 */
function pw_sharethis_check_iterateNodes() {
    
    $apikey = variable_get('pw_sharethis_check_apikey', false);
    $sub = variable_get('pw_sharethis_check_sub', 'beta');
    $types = variable_get('pw_sharethis_check_types', array());
    $baseTypes = variable_get('pw_sharethis_check_basetypes', array());
    
    $domain = '.abgeordnetenwatch.de';
    
//    $delay = -1;

    variable_set('pw_sharethis_check_delaytype', 'node');
    
    // Which entries do we already have:
    $subquery = db_select('sharethis_meta', 'sm')
      ->fields('sm', array('entity_id'))
      ->condition('sm.entity_type', 'blogpost');
    
    // fetch nodes that do not have an entry yet:
    $query = db_select('node', 'n')
        ->fields('n')
        ->condition('n.nid', $subquery, 'NOT IN')
        ->condition('type', $types);   
    
    $results = $query->execute();
    
    $count = 0;
    
    while ($fetch = $results->fetchAssoc()) {
        
        $count++;
        $path = drupal_get_path_alias('node/' . $fetch['nid']);
        $subUrl = 'http://' . $sub . $domain . '/' . $path;
        $url = 'http://www' . $domain . '/' . $path;
        
        $record['entity_id'] = $fetch['nid'];
        $record['entity_type'] = $fetch['type'];
        $record['url'] = $url;

        if (in_array($record['entity_type'], $baseTypes)) {

            $content = drupal_http_request('http://rest.sharethis.com/v1/count/urlinfo?url='
                    . $subUrl . '&api_key=' . $apikey);

            if (isset($content->error) || $count > 30) {
//                $delay = $fetch['nid'] - 1;
                break;
            }

            $json = json_decode($content->data, true);
            $record['share_basevalue'] = $json['total']['inbound']; // outbound is 0
        } else {
            $record['share_basevalue'] = 0;
        }

        $content = drupal_http_request('http://rest.sharethis.com/v1/count/urlinfo?url='
                . $url . '&api_key=' . $apikey);

        if (isset($content->error) || $count > 30) {
//            $delay = $fetch['nid'] - 1;
            break;
        }
        
        $json = json_decode($content->data, true);
        $record['share_sum'] = $record['share_basevalue'] + $json['total']['inbound'];
        

        $exists = db_select('sharethis_meta', 'sm')
                ->fields('sm')
                ->condition('url', $record['url'])
                ->range(0, 1)
                ->execute()
                ->rowCount();
        
        if($exists) {
            
            db_update('sharethis_meta')
                ->condition('url', $record['url'])
                ->fields($record)
                ->execute();
            
        } else {
            
            db_insert('sharethis_meta')
                ->fields($record)
                ->execute();
            
        }
        
        
    }
    
//    if ($delay >= 0)
//        drupal_set_message('ShareThis check could not fill all data into the meta tables. Added rest to cron.');
//
//    variable_set('pw_sharethis_check_delay', $delay);
//    
//    return $delay < 0;
}

/**
 * Iterates through all users and adds/updates their entries in the sharethis_meta table.
 * @return bool whether the iteration could finish.
 */
function pw_sharethis_check_iterateUsers() {
    
    $apikey = variable_get('pw_sharethis_check_apikey', false);
    $types = variable_get('pw_sharethis_check_types', array());
    
    $domain = '.abgeordnetenwatch.de';
    
//    $delay = -1;

    variable_set('pw_sharethis_check_delaytype', 'user');
    
    // Which entries do we already have:
    $subquery = db_select('sharethis_meta', 'sm')
      ->fields('sm', array('entity_id'))
      ->condition('sm.entity_type', 'user');
    
    // fetch users who do not have an entry yet:
    $query = db_select('users', 'u')
        ->fields('u')
        ->condition('u.uid', $subquery, 'NOT IN');    
    
    $results = $query->execute();
    
    $count = 0;
    
    while ($fetch = $results->fetchAssoc()) {
        
        $count++;
        $path = drupal_get_path_alias('user/' . $fetch['uid']);
        $url = 'http://www' . $domain . '/' . $path;
        
        $record['entity_id'] = $fetch['uid'];
        $record['entity_type'] = 'user';
        $record['url'] = $url;
        $record['share_basevalue'] = 0;
        
        $content = drupal_http_request('http://rest.sharethis.com/v1/count/urlinfo?url='
                . $url . '&api_key=' . $apikey);

        if (isset($content->error) || $count > 30) {
//            $delay = $fetch['uid'] - 1;
            break;
        }
        
        $json = json_decode($content->data, true);
        $record['share_sum'] = $record['share_basevalue'] + $json['total']['inbound'];
       
        $exists = db_select('sharethis_meta', 'sm')
                ->fields('sm')
                ->condition('url', $record['url'])
                ->range(0, 1)
                ->execute()
                ->rowCount();
        
        if($exists) {
            
            db_update('sharethis_meta')
                ->condition('url', $record['url'])
                ->fields($record)
                ->execute();
            
        } else {
            
            db_insert('sharethis_meta')
                ->fields($record)
                ->execute();
            
        }
        
        
    }
    
//    if ($delay >= 0)
//        drupal_set_message('ShareThis check could not fill all data into the meta tables. Added rest to cron.');
//
//    variable_set('pw_sharethis_check_delay', $delay);
    
//    return $delay < 0;
}
