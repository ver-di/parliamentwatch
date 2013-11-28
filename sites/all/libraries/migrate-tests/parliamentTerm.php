<?php

  // Run this script from drush cli! ///////////////////////////////////////////
  // $ drush [-vd --uri=...] scr path/to/migrate-tests/parliamentTerm.php //////

  // Starting timers ///////////////////////////////////////////////////////////
  $time_start = microtime(true);
  $rustart = getrusage();

  // Add working domain here, without trailing slash ///////////////////////////
  $dom = 'x.dev';

  // Path to XML-API and XPATH search pattern; /////////////////////////////////
  // rand() is needed to avoid php caching...
  $xmlPath = "http://" . $dom . "/api/parliaments.xml?r=" . rand(0, 9999);
  $xmlExpression = "//parliaments/parliament/name";

  // database SELECT *1 from *2 ////////////////////////////////////////////////
  $dbSelect = 'parliament'; //*1
  $dbFrom = 'legacy_projects'; //*2

  // UTF-8 needed to display non-standard characters ///////////////////////////
  header('Content-Type: text/html; charset=utf-8');

  // Starting script ///////////////////////////////////////////////////////////
  watchdog("PW_TEST", t("Checking parliament term data integrity."),
    $variables = NULL, WATCHDOG_DEBUG, $link = NULL);

  // Establishing database connection //////////////////////////////////////////
  // DO NOT enter database details of production sites, rather use quickstart,..
  if (!$dblink = mysql_connect('localhost', 'root', 'quickstart')) {
    watchdog("PW_TEST", t("Could not connect to mySQL database!"),
      $variables = NULL, WATCHDOG_ERROR, $link = NULL);
    exit;
  }
  // Migration database name ///////////////////////////////////////////////////
  if (!mysql_select_db('parlamentwatch', $dblink)) {
    watchdog("PW_TEST", t('Could not select "parlamentwatch" database!'),
      $variables = NULL, WATCHDOG_ERROR, $link = NULL);
    exit;
  }
  // DB query for Germany (AW) /////////////////////////////////////////////////
  $sql = 'SELECT ' . $dbSelect . ' FROM ' . $dbFrom . ' WHERE project_cmd '
       . ' NOT IN (233, 486, 974, 1036, 1010, 1475) AND project_cmd '
       . ' BETWEEN 0 AND 2000 GROUP BY ' . $dbSelect . ' ORDER BY '
       . $dbSelect . ' ASC';
  $result = mysql_query($sql, $dblink);
  if (!$result) {
    watchdog("PW_TEST", t('Could not query the database!'), $variables = NULL,
      WATCHDOG_ERROR, $link = NULL);
    watchdog("PW_TEST", t('MySQL Error: ' . mysql_error()), $variables = NULL,
      WATCHDOG_ERROR, $link = NULL);
    exit;
  }

  // Counting results in mirgration database ///////////////////////////////////
  watchdog("PW_TEST", t('Looking in DB for "' . $dbSelect . '" in "'
    . $dbFrom . '".'), $variables = NULL, WATCHDOG_INFO, $link = NULL);
  $i = 0;
  while ($row = mysql_fetch_assoc($result)) $i++;
  watchdog("PW_TEST", t('Found ' . $i . ' parliament terms in DB.'),
    $variables = NULL, WATCHDOG_NOTICE, $link = NULL);

  // Counting results in XML-API ///////////////////////////////////////////////
  watchdog("PW_TEST", t('Looking in XML for "' . $xmlExpression . '" in "'
    . $xmlPath . '".'), $variables = NULL, WATCHDOG_INFO, $link = NULL);
  $file = file_get_contents($xmlPath);
  $xml = simplexml_load_string($file);
  $xpath = $xml->xpath($xmlExpression);
  $j = 0;
  while(list(, $node) = each($xpath)) $j++;
  watchdog("PW_TEST", t('Found ' . $j . ' parliament terms in XML-API.'),
    $variables = NULL, WATCHDOG_NOTICE, $link = NULL);

  // Counting results in Taxonomy ///////////////////////////////////////////////
  watchdog("PW_TEST", t('Looking in taxonomy for "parliaments".'),
    $variables = NULL, WATCHDOG_INFO, $link = NULL);
  $vid = taxonomy_vocabulary_machine_name_load("parliaments")->vid;
  $terms = taxonomy_get_tree($vid);
  $numTerms = count($terms);
  watchdog("PW_TEST", t('Found ' . $numTerms . ' parliament terms in taxonomy.')
    , $variables = NULL, WATCHDOG_NOTICE, $link = NULL);

  // Checking for missing entries in Taxonomy //////////////////////////////////
  watchdog("PW_TEST", t('Checking missing entries in taxonomy...'),
    $variables = NULL, WATCHDOG_INFO, $link = NULL);
  $result = mysql_query($sql, $dblink);
  $countMissingTax = 0;
  while ($row = mysql_fetch_assoc($result)) {
    $isMatch = false;
    foreach ($terms as $term) {
      $name = $term->name;
      if (strcmp(utf8_encode($row[$dbSelect]), $name) == 0) {
        $isMatch = true;
      }
    }
    if (!$isMatch) {
      watchdog("PW_TEST", t('No match for: ' . utf8_encode($row[$dbSelect])),
        $variables = NULL, WATCHDOG_WARNING, $link = NULL);
      $countMissingTax++;
    }
  }
  $tmpString = '0';
  $status = WATCHDOG_INFO;
  if ($countMissingTax > 0) {
    $status = WATCHDOG_WARNING;
    $tmpString = $countMissingTax;
  } else {
    $status = WATCHDOG_NOTICE;
    $tmpString = 'No';
  }
  watchdog("PW_TEST", t($tmpString . ' missing entries in taxonomy.'),
    $variables = NULL, $status, $link = NULL);

  // Checking for missing entries in XML ///////////////////////////////////////
  watchdog("PW_TEST", t('Checking missing entries in XML...'),
    $variables = NULL, WATCHDOG_INFO, $link = NULL);
  $result = mysql_query($sql, $dblink);
  $countMissingXML = 0;
  while ($row = mysql_fetch_assoc($result)) {
    $isMatch = false;
    $xpath = $xml->xpath($xmlExpression);
    while(list(, $node) = each($xpath)) {
      if (strcmp(utf8_encode($row[$dbSelect]), $node) == 0) {
        $isMatch = true;
      }
    }
    if (!$isMatch) {
      watchdog("PW_TEST", t('No match for: ' . utf8_encode($row[$dbSelect])),
        $variables = NULL, WATCHDOG_WARNING, $link = NULL);
      $countMissingXML++;
    }
  }
  $tmpString = '0';
  $status = WATCHDOG_INFO;
  if ($countMissingXML > 0) {
    $status = WATCHDOG_WARNING;
    $tmpString = $countMissingXML;
  } else {
    $status = WATCHDOG_NOTICE;
    $tmpString = 'No';
  }
  watchdog("PW_TEST", t($tmpString . ' missing entries in XML.'),
    $variables = NULL, $status, $link = NULL);

  // Checking for duplicates in XML ////////////////////////////////////////////
  watchdog("PW_TEST", t('Checking for duplicates in XML...'),
    $variables = NULL, WATCHDOG_INFO, $link = NULL);
  $outterXpath = $xml->xpath($xmlExpression);
  $s = 0;
  $countDuplicateXML = 0;
  while (list(, $outterNode) = each($outterXpath)) {
    $s++;
    $innerXpath = $xml->xpath($xmlExpression);
    $t = 0;
    while (list(, $innerNode) = each($innerXpath)) {
      $t++;
      if (strcmp($outterNode, $innerNode) == 0 && $s != $t) {
        watchdog("PW_TEST", t('Possible duplicate entry for: ' . $innerNode
          . ' and ' . $outterNode), $variables = NULL, WATCHDOG_WARNING,
          $link = NULL);
        $countDuplicateXML++;
      }
    }
  }
  $countDuplicateXML /= 2;
  $tmpString = '0';
  $status = WATCHDOG_INFO;
  if ($countDuplicateXML > 0) {
    $status = WATCHDOG_WARNING;
    $tmpString = $countDuplicateXML;
  } else {
    $status = WATCHDOG_NOTICE;
    $tmpString = 'No';
  }
  watchdog("PW_TEST", t($tmpString . ' duplicate entries in XML.'),
    $variables = NULL, $status, $link = NULL);

  // Checking for missing entries in DB ////////////////////////////////////////
  watchdog("PW_TEST", t('Checking missing entries in DB...'),
    $variables = NULL, WATCHDOG_INFO, $link = NULL);
  $xpath = $xml->xpath($xmlExpression);
  $countMissingDB = 0;
  while(list(, $node) = each($xpath)) {
    $isMatch = false;
    $result = mysql_query($sql, $dblink);
    while ($row = mysql_fetch_assoc($result)) {
      if (strcmp($node, utf8_encode($row[$dbSelect])) == 0) {
        $isMatch = true;
      }
    }
    if (!$isMatch) {
      watchdog("PW_TEST", t('No match for: ' . $node), $variables = NULL,
        WATCHDOG_WARNING, $link = NULL);
      $countMissingDB++;
    }
  }
  $tmpString = '0';
  $status = WATCHDOG_INFO;
  if ($countMissingDB > 0) {
    $status = WATCHDOG_WARNING;
    $tmpString = $countMissingDB;
  } else {
    $status = WATCHDOG_NOTICE;
    $tmpString = 'No';
  }
  watchdog("PW_TEST", t($tmpString . ' missing entries in DB.'),
    $variables = NULL, $status, $link = NULL);

  // Script finished ///////////////////////////////////////////////////////////

  // Getting time //////////////////////////////////////////////////////////////
  function rutime($ru, $rus, $index) {
    return ($ru["ru_$index.tv_sec"] * 1000
            + intval($ru["ru_$index.tv_usec"] / 1000))
            - ($rus["ru_$index.tv_sec"] * 1000
            + intval($rus["ru_$index.tv_usec"] / 1000));
  }
  $ru = getrusage();
  $time_end = microtime(true);
  $execution_time = (int) (($time_end - $time_start) * 1000);
    watchdog("PW_TEST", t("This script used " . rutime($ru, $rustart, "utime")
     . "ms for its computations and spent " . rutime($ru, $rustart, "stime")
     . "ms in system calls. Total execution time " . $execution_time
     . "ms."), $variables = NULL, WATCHDOG_DEBUG, $link = NULL);

  //////////////////////////////////////////////////////////////////////////////

?>
