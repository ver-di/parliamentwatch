<?php
/**
 * @file
 * pw_user_revision_switch.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function pw_user_revision_switch_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'User archive cache';
  $data_table->name = 'user_archive_cache';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'uid' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'user_name' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '100',
        'not null' => TRUE,
        'description' => '',
      ),
      'vid' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'parliament_name' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '100',
        'not null' => TRUE,
        'description' => '',
      ),
      'number_of_questions' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'number_of_answers' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'number_of_sideline_jobs' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'number_of_speeches' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'number_of_missed_votings' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'timestamp' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'user_role' => array(
        'type' => 'varchar',
        'length' => 255,
      ),
    ),
    'name' => 'user_archive_cache',
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'id' => array(
        'label' => '',
      ),
      'uid' => array(
        'label' => '',
      ),
      'user_name' => array(
        'label' => '',
      ),
      'vid' => array(
        'label' => '',
      ),
      'parliament_name' => array(
        'label' => '',
      ),
      'number_of_questions' => array(
        'label' => '',
      ),
      'number_of_answers' => array(
        'label' => '',
      ),
      'number_of_sideline_jobs' => array(
        'label' => '',
      ),
      'number_of_speeches' => array(
        'label' => '',
      ),
      'number_of_missed_votings' => array(
        'label' => '',
      ),
      'timestamp' => array(
        'label' => '',
      ),
      'user_role' => array(
        'label' => '',
      ),
    ),
  );
  $export['user_archive_cache'] = $data_table;

  return $export;
}
