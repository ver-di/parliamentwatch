<?php

  //////////////////////////////////////////////////////////////////////////////
  $time_start = microtime(true);
  $rustart = getrusage();

  // Add working domain here, without trailing slash ///////////////////////////
  $dom = 'x.dev';
  
  // database SELECT *1 from *2 ////////////////////////////////////////////////
  $dbSelect = 'constituency'; //*1
  $dbFrom = 'legacy_constituency'; //*2

  // UTF-8 needed to display non-standard characters ///////////////////////////
  header('Content-Type: text/html; charset=utf-8');
  
  echo '<h3>Checking constituencies data integrity.</h3>'
     . '<p><strong>Note</strong>: This test only works correctly after'
     . ' successful <a href="parliamentTerm.php">parliament term</a>'
     . ' validation.<br /><strong>Note</strong>: Did you <a'
     . ' href="/admin/content/migrate/migrate_memberships">migrate'
     . ' memberships</a> and <a'
     . ' href="/admin/content/migrate/migrate_user_revisions">user'
     . ' revisions</a> yet?</p>'
     
  // Counting constituencies in DB /////////////////////////////////////////////
     . ' <p>Looking in DB for "' . $dbSelect . '" in "'
     . $dbFrom . '":<br />';

  // Establishing database connection //////////////////////////////////////////
  // DO NOT enter database details of production sites, rather use quickstart,..
  if (!$link = mysql_connect('localhost', 'root', 'quickstart')) {
    echo 'Could not connect to mySQL database!<br /><br />';
    exit;
  }
  // Migration database name ///////////////////////////////////////////////////
  if (!mysql_select_db('parlamentwatch', $link)) {
    echo 'Could not select "parlamentwatch" database.<br /><br />';
    exit;
  }
  // DB queries for Germany (AW) ///////////////////////////////////////////////
  $sql = 'SELECT `legacy_constituency`.`constituency`, `legacy_projects`.`project`'
       . ' FROM `legacy_constituency`, `legacy_projects` WHERE'
       . ' `legacy_constituency`.`cmd` = `legacy_projects`.`cmd` AND'
       . ' `legacy_projects`.`project_cmd` NOT IN (233, 486, 974, 1036, 1010,'
       . ' 1475) AND `legacy_projects`.`project_cmd` BETWEEN 0 AND 2000';
  $result = mysql_query($sql, $link);
  if (!$result) {
    echo "DB Error, could not query the database<br />";
    echo 'MySQL Error: ' . mysql_error() . '<br /><br />';
    exit;
  }
     
     // /api/parliament/%/constituencies.xml
 
  $i = 0;
  $dbConsts = array();
  while ($row = mysql_fetch_assoc($result)) {
    $i++;
    array_push($dbConsts, $row['constituency']);
  }
  echo 'Found <strong>' . $i . '</strong> constituencies in DB.</p>'
     
  // Checking profiles in XML-API //////////////////////////////////////////////
     . '<p>Looking in XML for "//constituencies/constituency/name":<br />';
  $xmlPath = "http://" . $dom . "/api/parliaments.xml?r=" . rand(0, 9999);
  $xmlExpression = "//parliaments/parliament/name";
  $file = file_get_contents($xmlPath);
  $xml = simplexml_load_string($file);
  $xpath = $xml->xpath($xmlExpression);
  $output = '<p>Checking for invalid (404) or empty parliaments in'
          . ' XML-API...<br />';
  $j = 0;
  $invalid = 0;
  $empty = 0;
  $countConsts = 0;
  $xmlConsts = array();
  $tmpString = '0';
  while(list(, $parliament) = each($xpath)) {
    $j++;
    $constPath = str_replace(' ', '%20', "http://" . $dom . "/api/parliament/"
                 . $parliament . "/constituencies.xml?r=" . rand(0, 9999));
    //$output .= '@DEBUG1: ' . $constPath . '<br />'; // @TODO
    if ($constStream = file_get_contents($constPath)) {
      $constExpression = "//constituencies/constituency/name";
      $constXml = simplexml_load_string($constStream);
      $constXpath = $constXml->xpath($constExpression);
      $k = 0;
      while(list(, $consti) = each($constXpath)) {
        $k++;
        array_push($xmlConsts, $consti);
        //$output .= '@DEBUG2: ' . $consti . '<br />'; // @TODO
        $countConsts++;
      }
      if ($k == 0) {
        $output .= ' <a href="http://' . $dom . '/api/parliament/' . $parliament
                . '/constituencies.xml">' . $parliament
                . '</a> seems to be valid but <strong>empty</strong>.<br />';
        $empty++;
      }
    } else {
      $output .= ' <a href="http://' . $dom . '/api/parliament/' . $parliament
              . '/constituencies.xml">' . $parliament 
              . '</a> seems to be <strong>invalid</strong>.<br />';
      $invalid++;
    }
  }
  if ($j > 0) {
    if ($invalid > 0) {
      $tmpString = '<strong>' . $invalid . '</strong>';
    } else $tmpString = 'No';
    $output .= $tmpString . ' parliament terms are invalid in XML-API.<br />';
    if ($empty > 0) {
      $tmpString = '<strong>' . $empty . '</strong>';
    } else $tmpString = 'No';
    $output .= $tmpString . ' parliament terms are empty in XML-API.<br />';
    echo 'Found <strong>' . $countConsts . '</strong> constituencies in XML-API.'
       . '</p>' . $output . '</p>'; 
  } else {
    echo '<strong>No</strong> parliaments found in XML, please re-check <a'
       . ' href="parliamentTerm.php">parliament term</a> validation.'; 
       // @TODO </p>
  }
  
  // Checking for missing entries //////////////////////////////////////////////
  // @TODO
     
  //////////////////////////////////////////////////////////////////////////////
  function rutime($ru, $rus, $index) {
    return ($ru["ru_$index.tv_sec"] * 1000
            + intval($ru["ru_$index.tv_usec"] / 1000))
            - ($rus["ru_$index.tv_sec"] * 1000
            + intval($rus["ru_$index.tv_usec"] / 1000));
  }
  $ru = getrusage();
  $time_end = microtime(true);
  $execution_time = (($time_end - $time_start) / 60);
  echo "<p><em>This script used " . rutime($ru, $rustart, "utime")
     . "ms for its computations and spent " . rutime($ru, $rustart, "stime")
     . "ms in system calls. Total execution time " . $execution_time
     . "min.</em></p>";
     
  //////////////////////////////////////////////////////////////////////////////


?>
