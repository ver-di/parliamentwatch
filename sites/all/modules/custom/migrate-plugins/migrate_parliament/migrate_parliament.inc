<?php

abstract class BasicMigrateParliament extends Migration {
  public function __construct() {
    parent::__construct();
  }
}

class ParliamentTermMigration extends BasicMigrateParliament {
  public function __construct() {
    parent::__construct();
    $query = Database::getConnection('default', 'parlamentwatch')
      ->select('legacy_projects', 'p');
    $query->fields('p', array('parl_id', 'parliament', 'valid_from', 'valid_to'));
    $query->condition('p.is_mapping_id', 1);
    switch(variable_get('site_name')){
      case 'abgeordnetenwatch.de':
        $query->condition('p.project_cmd', array(0, 2000), 'BETWEEN');
        $query->condition('p.project_cmd', 
                          array(233, 486, 974, 1036, 1010, 1475), 'NOT IN');
        break;
      case 'marsad.tn':
        $query->condition('p.project_cmd', 974);
        break;    
      case 'dailwatch.ie':
        $query->condition('p.project_cmd', array(233, 486, 30073, 30988));
        // @TODO ? 1036, 1010, 1475
        break;    
      case 'piratenpartei-bayern.de':
        $query->condition('p.project_cmd', array(1036, 1010, 1475));
        break;  
      case 'politikercheck.lu':
        $query->condition('p.project_cmd', array(20000, 30000), 'BETWEEN');
        break;  
      default:
        $query->condition('p.project_cmd', 0);
        break;    
    }

    $this->source = new MigrateSourceSQL($query);
    $this->map = new MigrateSQLMap($this->machineName, array('parl_id' => array(
                    'type' => 'int',
                    'not null' => TRUE)), MigrateDestinationTerm::getKeySchema()
    );

    $this->destination = new MigrateDestinationTerm('parliaments');
    $this->addFieldMapping('name', 'parliament');
    $this->addFieldMapping('field_parliament_valid', 'valid_from'); 
  }

  public function prepareRow($current_row) {
    // Checks for malformed date strings in DB and converts to datetime type
    if (($current_row->valid_from = strtotime($current_row->valid_from)) === false) {
      $current_row->valid_from = strtotime('1970-02-01');
    }
    if (($current_row->valid_to = strtotime($current_row->valid_to)) === false) {
      $current_row->valid_to = strtotime('2037-12-31');
    }
    // Converts the date to YYYY-mm-dd format
    $format = 'Y-m-d';
    $current_row->valid_from = date($format, $current_row->valid_from);
    $current_row->valid_to = date($format, $current_row->valid_to);

    // Creates a date field for the valid_from/to migration mapping
    $current_row->valid_from = array(
      'value' => (string) $current_row->valid_from, // @TODO Does not work, why?
      'value2' => (string) $current_row->valid_to, // @TODO Does not work, why?
      'timezone' => DateMigrateFieldHandler::arguments('Europe/Berlin'),
      'timezone_db' => DateMigrateFieldHandler::arguments('Europe/Berlin'),
      'date_type' => 'datetime',
    );
    $current_row->valid_from = drupal_json_encode($current_row->valid_from);
    watchdog("PW_TEST", $current_row->valid_from, $variables = NULL, WATCHDOG_DEBUG, $link = NULL);
  }
}
