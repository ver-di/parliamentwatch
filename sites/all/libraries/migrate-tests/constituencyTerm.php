<?php


           /* --- ! @TODO Test ParliamentTerm links @TODO ! --- */
              /* ---  ! @TODO Test AreaCode links @TODO ! --- */
              /* --- ! @TODO XML Api verification @TODO ! --- */


  // Run this script from drush cli! ///////////////////////////////////////////
  // $ drush [-vd --uri=...] scr path/to/migrate-tests/constituencyTerm.php ////

  // Starting timers ///////////////////////////////////////////////////////////
  $time_start = microtime(true);
  $rustart = getrusage();

  // Add working domain here, without trailing slash ///////////////////////////
  $dom = 'x.dev';

  // database SELECT *1 from *2, *3 ////////////////////////////////////////////
  $dbSelect = 'constituency'; //*1
  $dbFromCon = 'legacy_constituency'; //*2
  $dbFromPro = 'legacy_projects'; //*3

  // UTF-8 needed to display non-standard characters ///////////////////////////
  header('Content-Type: text/html; charset=utf-8');

  // Starting script ///////////////////////////////////////////////////////////
  watchdog("PW_TEST", t("Checking constituency term data integrity."),
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
  $sql = 'SELECT ' . $dbSelect . ' FROM ' . $dbFromCon . ', ' . $dbFromPro
      . ' WHERE ' . $dbFromCon . '.cmd = ' . $dbFromPro . '.cmd AND '
      . $dbFromPro . '.project_cmd '
      . ' NOT IN (233, 486, 974, 1036, 1010, 1475) AND ' . $dbFromPro
      . '.project_cmd BETWEEN 0 AND 2000 GROUP BY ' . $dbFromCon . '.'
      . $dbSelect . ' ORDER BY ' . $dbFromCon . '.' . $dbSelect . ' ASC';
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
    . $dbFromCon . '".'), $variables = NULL, WATCHDOG_INFO, $link = NULL);
  $i = 0;
  while ($row = mysql_fetch_assoc($result)) $i++;
  watchdog("PW_TEST", t('Found ' . $i . ' constituency terms in DB.'),
    $variables = NULL, WATCHDOG_NOTICE, $link = NULL);

  // Counting results in Taxonomy //////////////////////////////////////////////
  watchdog("PW_TEST", t('Looking in taxonomy for "constituency".'),
    $variables = NULL, WATCHDOG_INFO, $link = NULL);
  $vid = taxonomy_vocabulary_machine_name_load("constituency")->vid;
  $terms = taxonomy_get_tree($vid);
  $numTerms = count($terms);
  watchdog("PW_TEST", t('Found ' . $numTerms . ' constituency terms in taxonomy.'),
    $variables = NULL, WATCHDOG_NOTICE, $link = NULL);

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
//  watchdog("PW_TEST", t('NOTE: This test can yield false positives due to '
//    . 'character encoding, check the results manually.'), $variables = NULL,
//    WATCHDOG_NOTICE, $link = NULL);

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
