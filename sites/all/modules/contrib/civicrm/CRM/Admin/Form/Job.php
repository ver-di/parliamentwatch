<?php
/*
 +--------------------------------------------------------------------+
 | CiviCRM version 4.2                                                |
 +--------------------------------------------------------------------+
 | Copyright CiviCRM LLC (c) 2004-2012                                |
 +--------------------------------------------------------------------+
 | This file is a part of CiviCRM.                                    |
 |                                                                    |
 | CiviCRM is free software; you can copy, modify, and distribute it  |
 | under the terms of the GNU Affero General Public License           |
 | Version 3, 19 November 2007 and the CiviCRM Licensing Exception.   |
 |                                                                    |
 | CiviCRM is distributed in the hope that it will be useful, but     |
 | WITHOUT ANY WARRANTY; without even the implied warranty of         |
 | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.               |
 | See the GNU Affero General Public License for more details.        |
 |                                                                    |
 | You should have received a copy of the GNU Affero General Public   |
 | License and the CiviCRM Licensing Exception along                  |
 | with this program; if not, contact CiviCRM LLC                     |
 | at info[AT]civicrm[DOT]org. If you have questions about the        |
 | GNU Affero General Public License or the licensing of CiviCRM,     |
 | see the CiviCRM license FAQ at http://civicrm.org/licensing        |
 +--------------------------------------------------------------------+
*/

/**
 *
 * @package CRM
 * @copyright CiviCRM LLC (c) 2004-2012
 * $Id: $
 *
 */

/**
 *
 */
class CRM_Admin_Form_Job extends CRM_Admin_Form {
  protected $_id = NULL; function preProcess() {

    parent::preProcess();

    CRM_Utils_System::setTitle(ts('Manage - Scheduled Jobs'));

    if ($this->_id) {
      $refreshURL = CRM_Utils_System::url('civicrm/admin/job',
        "reset=1&action=update&id={$this->_id}",
        FALSE, NULL, FALSE
      );
    }
    else {
      $refreshURL = CRM_Utils_System::url('civicrm/admin/job',
        "reset=1&action=add",
        FALSE, NULL, FALSE
      );
    }

    $this->assign('refreshURL', $refreshURL);
  }

  /**
   * Function to build the form
   *
   * @return None
   * @access public
   */
  public function buildQuickForm($check = FALSE) {
    parent::buildQuickForm();

    if ($this->_action & CRM_Core_Action::DELETE) {
      return;
    }

    $attributes = CRM_Core_DAO::getAttribute('CRM_Core_DAO_Job');

    $this->add('text', 'name', ts('Name'),
      $attributes['name'], TRUE
    );

    $this->addRule('name', ts('Name already exists in Database.'), 'objectExists', array('CRM_Core_DAO_Job', $this->_id));

    $this->add('text', 'description', ts('Description'),
      $attributes['description']
    );

    $this->add('text', 'api_prefix', ts('API Call Prefix'),
      $attributes['api_prefix'], TRUE
    );

    $this->add('text', 'api_entity', ts('API Call Entity'),
      $attributes['api_entity'], TRUE
    );

    $this->add('text', 'api_action', ts('API Call Action'),
      $attributes['api_action'], TRUE
    );

    $this->add('select', 'run_frequency', ts('Run frequency'),
      array('Daily' => ts('Daily'), 'Hourly' => ts('Hourly'), 'Always' => ts('Every time cron job is run'))
    );


    $this->add('textarea', 'parameters', ts('Command parameters'),
      "cols=50 rows=6"
    );

    // is this job active ?
    $this->add('checkbox', 'is_active', ts('Is this Scheduled Job active?'));

    $this->addFormRule(array('CRM_Admin_Form_Job', 'formRule'));
  }

  static function formRule($fields) {

    $errors = array();

    require_once 'api/api.php';

    $apiRequest = array();
    $apiRequest['entity'] = CRM_Utils_String::munge($fields['api_entity']);
    $apiRequest['action'] = CRM_Utils_String::munge($fields['api_action']);
    $apiRequest['version'] = substr($fields['api_prefix'], -1); // ie. civicrm_api3
    $apiRequest += _civicrm_api_resolve($apiRequest);    // look up function, file, is_generic

    if( !$apiRequest['function'] ) {
      $errors['api_action'] = ts('Given API command is not defined.');
    }

    // CRM-9868- don't allow Enabled (is_active) for jobs that should never be run automatically via execute action or runjobs url
    if (($fields['api_action'] == 'process_membership_reminder_date' || $fields['api_action'] == 'update_greeting') &&
      CRM_Utils_Array::value('is_active', $fields) == 1
    ) {
      // pass "wiki" as 6th param to docURL2 if you are linking to a page in wiki.civicrm.org
      $docLink = CRM_Utils_System::docURL2("Managing Scheduled Jobs", NULL, NULL, NULL, NULL, "wiki");
      $errors['is_active'] = ts('You can not save this Scheduled Job as Active with the specified api action (%2). That action should not be run regularly - it should only be run manually for special conditions. %1', array(1 => $docLink, 2 => $fields['api_action']));
    }

    if (!empty($errors)) {
      return $errors;
    }

    return empty($errors) ? TRUE : $errors;
  }

  function setDefaultValues() {
    $defaults = array();

    if (!$this->_id) {
      $defaults['is_active'] = $defaults['is_default'] = 1;
      return $defaults;
    }
    $domainID = CRM_Core_Config::domainID();

    $dao            = new CRM_Core_DAO_Job();
    $dao->id        = $this->_id;
    $dao->domain_id = $domainID;
    if (!$dao->find(TRUE)) {
      return $defaults;
    }

    CRM_Core_DAO::storeValues($dao, $defaults);

    // CRM-10708
    // job entity thats shipped with core is all lower case.
    // this makes sure camel casing is followed for proper working of default population.
    if (CRM_Utils_Array::value('api_entity', $defaults)) {
      $defaults['api_entity'] = ucfirst($defaults['api_entity']);
    }

    return $defaults;
  }

  /**
   * Function to process the form
   *
   * @access public
   *
   * @return None
   */
  public function postProcess() {

    CRM_Utils_System::flushCache('CRM_Core_DAO_Job');

    if ($this->_action & CRM_Core_Action::DELETE) {
      CRM_Core_BAO_Job::del($this->_id);
      CRM_Core_Session::setStatus(ts('Selected Scheduled Job has been deleted.'));
      return;
    }

    $values = $this->controller->exportValues($this->_name);
    $domainID = CRM_Core_Config::domainID();

    $dao = new CRM_Core_DAO_Job();

    $dao->id            = $this->_id;
    $dao->domain_id     = $domainID;
    $dao->run_frequency = $values['run_frequency'];
    $dao->parameters    = $values['parameters'];
    $dao->name          = $values['name'];
    $dao->api_prefix    = $values['api_prefix'];
    $dao->api_entity    = $values['api_entity'];
    $dao->api_action    = $values['api_action'];
    $dao->description   = $values['description'];
    $dao->is_active     = CRM_Utils_Array::value('is_active', $values, 0);

    $dao->save();
  }
  //end of function
}

