<?php

/*
 * @file
 * pw_api.profile.inc
 */


/**
 * Page callback; returns single profile based on given filters.
 *
 * Sets a custom cache ttl.
 *
 * @param
 *
 * @return array
 *   The profile as an associative array
 */

function pw_api_profile($username, $parliament=false) {

    // translate uuid into user and username
    if(preg_match('/[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/i', $username, $uuid)){
        $user = entity_uuid_load('user', $uuid);
        $user = array_pop($user);
        $username = $user->name;
    }

    // filter by parliament
    if($parliament){

        // translate uuid into parliament name
        if(preg_match('/[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/i', $parliament, $uuid)){
            $parliament_term = entity_uuid_load('taxonomy_term', $uuid);
            $parliament = array_pop($parliament_term)->name;
        }

        // load user revision
        $result = db_query("SELECT uid, vid FROM user_archive_cache WHERE user_name = :username AND parliament_name = :parliament", array(':username' => $username, ':parliament' => $parliament))->fetchAssoc();
        $user = user_revision_load($result['uid'], $result['vid']);
    }

    // select user by name
    elseif(!isset($user)){
        $user = user_load_by_name($username);
    }

    if(!$user){
        return MENU_NOT_FOUND;
    }

    $profile = array('profile' => pw_api_user_to_array($user));

    return $profile;
}

function pw_api_profiles($parliament, $filename) {

    // translate uuid into parliament name
    if(preg_match('/[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/i', $parliament, $uuid)){
        $parliament_term = entity_uuid_load('taxonomy_term', $uuid);
        $parliament = array_pop($parliament_term)->name;
    }

    // query for users
    $query = db_select('user_archive_cache', 'ua')
    ->fields('ua', array('uid', 'vid'))
    ->condition("parliament_name", $parliament)
    ->having("MAX(vid)")
    ->groupBy('uid');
    switch($filename){
        case 'deputies.xml':
        $query->condition("user_role", 'deputy');
        break;
        case 'candidates.xml':
        $query->condition("user_role", 'candidate');
        break;
    }
    $result = $query->execute()->fetchAll();

    $profiles = array();
    foreach ($result as $row) {
        $user = user_revision_load($row->uid, $row->vid);
        if($user){
            $profiles['profile_'.$row->uid] = pw_api_user_to_array($user);
        }
    }

    if(empty($profiles)){
        return MENU_NOT_FOUND;
    }

    $profiles = array('profiles' => $profiles);

    return $profiles;
}

function pw_api_user_to_array($user) {

    $profile = array();

    try{

        // wrap user
        $w_user = entity_metadata_wrapper('user', $user);

        // fill user data into array
        $profile['meta'] = array();
        $profile['meta']['status'] = $w_user->status->value();
        $profile['meta']['edited'] = date('Y-m-d H:i', $user->revision_timestamp);
        $profile['meta']['uuid'] = $w_user->uuid->value();
        $profile['meta']['username'] = $w_user->name->value();
        $profile['meta']['url'] = url('profile/' . $w_user->name->value(), array('absolute' => TRUE));
        $profile['degree'] = $w_user->field_user_title->value();
        $profile['first_name'] = $w_user->field_user_fname->value();
        $profile['last_name'] = $w_user->field_user_lname->value();
        $profile['gender'] = $w_user->field_user_gender->value();
        $profile['birthyear'] = date('Y', $w_user->field_user_birthday->value());
        $profile['education'] = $w_user->field_user_education->value();
        $profile['profession'] = $w_user->field_user_job_skills->value();
        $profile['email'] = $w_user->field_user_public_mail->value();
        $profile['twitter'] = $w_user->field_user_twitter_account->value();
        $profile['party'] = $w_user->field_user_party->label();

        // add location
        $profile['location'] = array();
        $profile['location']['country'] = $w_user->field_user_address->country->value();
        $profile['location']['county'] = $w_user->field_user_address->administrative_area->value();
        $profile['location']['city'] = $w_user->field_user_address->locality->value();
        $profile['location']['postal_code'] = $w_user->field_user_address->postal_code->value();

        // add picture
        $profile['picture'] = array();
        $picture = $w_user->field_user_picture->value();
        if(!empty($picture)){
            $profile['picture']['url'] = file_create_url($w_user->field_user_picture->file->value()->uri);
            $profile['picture']['copyright'] = $w_user->field_user_picture->file->field_image_copyright->value->value();
        }
        else{
            $portrait_info = field_info_field('field_user_picture');
            $file = file_load($portrait_info['settings']['default_image']);
            $profile['picture']['url'] = file_create_url($file->uri);
            $profile['picture']['copyright'] = '';
        }

        // add parliament
        $profile['parliament'] = array();
        $profile['parliament']['name'] = $w_user->field_user_parliament->label();
        $profile['parliament']['uuid'] = $w_user->field_user_parliament->uuid->value();

        // add constituency
        $profile['constituency'] = array();
        if(sizeof($w_user->field_user_constituency) > 0){
            $profile['constituency']['name'] = $w_user->field_user_constituency[0]->label();
            $profile['constituency']['uuid'] = $w_user->field_user_constituency[0]->uuid->value();
            $profile['constituency']['number'] = $w_user->field_user_constituency[0]->field_constituency_nr->value();
            $profile['constituency']['result'] = $w_user->field_user_election_result->value();
            $profile['constituency']['won'] = $w_user->field_user_constituency_won->value();
        }

        // add list
        $profile['list'] = array();
        if($w_user->field_user_list->getIdentifier()){
            $profile['list']['name'] = $w_user->field_user_list->label();
            $profile['list']['uuid'] = $w_user->field_user_list->uuid->value();
            $profile['list']['position'] = $w_user->field_user_list_position->label();
            $profile['list']['won'] = $w_user->field_user_list_won->value();
        }

        // add committees
        $profile['committees'] = array();

        // add votes
        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'vote')
        ->fieldCondition('field_parliament', 'tid', $w_user->field_user_parliament->tid->value())
        ->fieldCondition('field_vote_user', 'target_id', $w_user->uid->value())
        ->propertyCondition('status', NODE_PUBLISHED)
        ->propertyOrderBy('created', 'DESC');
        $result = $query->execute();

        $profile['votes'] = array();
        if($result['node']){
            $votes = node_load_multiple(array_keys($result['node']));
            foreach ($votes as $nid => $vote) {

                // wrap vote
                $w_vote = entity_metadata_wrapper('node', $vote);

                $type = str_replace('pw_', '', $w_vote->field_vote_node->type->value());

                $profile['votes'][$type.'_'.$nid] = array();
                $profile['votes'][$type.'_'.$nid]['title'] = $w_vote->field_vote_node->title->value();
                $profile['votes'][$type.'_'.$nid]['uuid'] = $w_vote->field_vote_node->uuid->value();
                $profile['votes'][$type.'_'.$nid]['date'] = date("Y-m-d", $w_vote->created->value());
                if(isset($w_vote->field_blogpost_categories)){
                    foreach($w_vote->field_blogpost_categories as $key => $category){
                        $profile['votes'][$type.'_'.$nid]['category_'.$key] = $category;
                    }
                }
                $profile['votes'][$type.'_'.$nid]['vote'] = $w_vote->field_vote->label();
                $profile['votes'][$type.'_'.$nid]['url'] = url('node/'.$w_vote->field_vote_node->nid->value(), array('absolute' => TRUE));
            }
        }

        // add data from user_archive_cache meta table
        $result = db_query("SELECT number_of_questions, number_of_answers FROM user_archive_cache WHERE vid = :vid", array(':vid' => $w_user->vid->value()))->fetchAssoc();
        $profile['questions'] = array();
        $profile['questions']['got'] = $result['number_of_questions'];
        $profile['questions']['answered'] = $result['number_of_answers'];

        // add dialogues
        $query = new EntityFieldQuery();
        $query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'dialogue')
        ->fieldCondition('field_parliament', 'tid', $w_user->field_user_parliament->tid->value())
        ->fieldCondition('field_dialogue_recipient', 'target_id', $w_user->uid->value())
        ->propertyCondition('status', NODE_PUBLISHED)
        ->propertyOrderBy('created', 'DESC');
        $result = $query->execute();

        if($result['node']){
            $dialogues = node_load_multiple(array_keys($result['node']));
            foreach ($dialogues as $nid => $dialogue) {

                // wrap dialogue
                $w_dialogue = entity_metadata_wrapper('node', $dialogue);

                $profile['questions']['question_'.$nid] = array();
                $profile['questions']['question_'.$nid]['id'] = $w_dialogue->field_dialogue_id->value();
                $profile['questions']['question_'.$nid]['date'] = date("Y-m-d", $w_dialogue->created->value());
                $profile['questions']['question_'.$nid]['category'] = $w_dialogue->field_dialogue_topic->label();
                $profile['questions']['question_'.$nid]['url'] = url('node/'.$nid, array('absolute' => TRUE));

                // add answers
                $profile['questions']['question_'.$nid]['answers'] = array();
                foreach ($w_dialogue->comments as $key => $answer) {
                    $profile['questions']['question_'.$nid]['answers']['answer_'.$key] = array();
                    $profile['questions']['question_'.$nid]['answers']['answer_'.$key]['date'] = date("Y-m-d", $answer->created->value());
                    $profile['questions']['question_'.$nid]['answers']['answer_'.$key]['summary'] = $answer->field_dialogue_comment_body->summary->value();
                }
            }
        }
    }
    catch (EntityMetadataWrapperException $exc) {
        watchdog('pw_api',  'See '  . __FUNCTION__ . '() <pre>' .  $exc->getTraceAsString() . '</pre>', NULL, WATCHDOG_ERROR);
        $profile['error'] = 'See '  . __FUNCTION__ . '() ' .  $exc->getTraceAsString();
    }

    return $profile;
}