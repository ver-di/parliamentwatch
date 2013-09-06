<?php

  //////////////////////////////////////////////////////////////////////////////
  $time_start = microtime(true);
  $rustart = getrusage();

  // Add working domain here, without trailing slash ///////////////////////////
  $dom = 'x.dev';


/*
  // database SELECT *1 from *2 ////////////////////////////////////////////////
  $dbSelect = 'username'; //*1
  $dbFrom = 'legacy_user_sample'; //*2

  // UTF-8 needed to display non-standard characters ///////////////////////////
  header('Content-Type: text/html; charset=utf-8');
  
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
  // Select all existing profiles //////////////////////////////////////////////
  $sqall = 'SELECT `legacy_user_sample`.`username`, `legacy_projects`.`project`'
         . ' FROM `legacy_user_sample`, `legacy_projects` WHERE'
         . ' `legacy_user_sample`.`cmd` = `legacy_projects`.`cmd` AND'
         . ' `legacy_projects`.`project_cmd` NOT IN (233, 486, 974, 1036, 1010,'
         . ' 1475) AND `legacy_projects`.`project_cmd` BETWEEN 0 AND 2000';
  // Select latest profiles only ///////////////////////////////////////////////
  $sql = 'SELECT `legacy_user_sample`.`username`, `legacy_projects`.`project`'
       . ' FROM `legacy_user_sample`, `legacy_projects` WHERE'
       . ' `legacy_user_sample`.`cmd` = `legacy_projects`.`cmd` AND'
       . ' `legacy_projects`.`project_cmd` NOT IN (233, 486, 974, 1036, 1010,'
       . ' 1475) AND `legacy_projects`.`project_cmd` BETWEEN 0 AND 2000 AND'
       . ' `legacy_user_sample`.`oldest` = 1';
  $resallt = mysql_query($sqall, $link);
  if (!$resallt) {
    echo "DB Error, could not query the database<br />";
    echo 'MySQL Error: ' . mysql_error() . '<br /><br />';
    exit;
  }
  $result = mysql_query($sql, $link);
  if (!$result) {
    echo "DB Error, could not query the database<br />";
    echo 'MySQL Error: ' . mysql_error() . '<br /><br />';
    exit;
  }
  
  echo '<h3>Checking politicians profile data integrity.</h3>'
     . '<p><strong>Note</strong>: This test only works correctly after'
     . ' successful <a href="parliamentTerm.php">parliament term</a>'
     . ' validation.<br /><strong>Note</strong>: Did you <a'
     . ' href="/admin/content/migrate/migrate_memberships">migrate'
     . ' memberships</a> and <a'
     . ' href="/admin/content/migrate/migrate_user_revisions">user'
     . ' revisions</a> yet?</p>'
     
  // Counting profiles in revisions in DB //////////////////////////////////////
     . ' <p>Looking in DB for "' . $dbSelect . '" in "'
     . $dbFrom . '":<br />';
  $i = 0;
  $j = 0;
  $dbProfiles = array();
  while ($row = mysql_fetch_assoc($resallt)) $i++;
  while ($row = mysql_fetch_assoc($result)) {
    $j++;
    array_push($dbProfiles, $row['username']);
  }
  echo 'Found <strong>' . $j . '</strong> politicians in DB with <strong>'
     . $i . '</strong> revisions available.</p>'
     
  // Checking profiles in XML-API //////////////////////////////////////////////
     . '<p>Looking in XML for "//profiles/profile/name":<br />';
  $xmlPath = "http://" . $dom . "/api/parliaments.xml?r=" . rand(0, 9999);
  $xmlExpression = "//parliaments/parliament/name";
  $file = file_get_contents($xmlPath);
  $xml = simplexml_load_string($file);
  $xpath = $xml->xpath($xmlExpression);
  $k = 0;
  $invalid = 0;
  $empty = 0;
  $countProfiles = 0;
  $xmlProfiles = array();
  $tmpString = '0';
  $output = '<p>Checking for invalid (404) or empty parliaments in'
          . ' XML-API...<br />';
  while(list(, $parliament) = each($xpath)) {
    $k++;
    $profilePath = str_replace(' ', '%20', "http://" . $dom . "/api/parliament/"
                 . $parliament . "/profiles.xml?r=" . rand(0, 9999));
    if ($profileStream = file_get_contents($profilePath)) {
      $profileExpression = "//profiles/profile/name";
      $profileXml = simplexml_load_string($profileStream);
      $profileXpath = $profileXml->xpath($profileExpression);
      $j = 0;
      while(list(, $profile) = each($profileXpath)) {
        $j++;
        array_push($xmlProfiles, $profile);
        $countProfiles++;
      }
      if ($j == 0) {
        $output .= ' <a href="http://' . $dom . '/api/parliament/' . $parliament
                . '/profiles.xml">' . $parliament
                . '</a> seems to be valid but <strong>empty</strong>.<br />';
        $empty++;
      }
    } else {
      $output .= ' <a href="http://' . $dom . '/api/parliament/' . $parliament
              . '/profiles.xml">' . $parliament 
              . '</a> seems to be <strong>invalid</strong>.<br />';
      $invalid++;
    }
  }
  if ($k > 0) {
    if ($invalid > 0) {
      $tmpString = '<strong>' . $invalid . '</strong>';
    } else $tmpString = 'No';
    $output .= $tmpString . ' parliament terms are invalid in XML-API.<br />';
    if ($empty > 0) {
      $tmpString = '<strong>' . $empty . '</strong>';
    } else $tmpString = 'No';
    $output .= $tmpString . ' parliament terms are empty in XML-API.<br />';
    echo 'Found <strong>' . $countProfiles . '</strong> politicians in XML-API'
       . ' (number of revisions unavailable <strong>@TODO AW-???</strong>).</p>' 
       . $output . '</p>';
  } else {
    echo '<strong>No</strong> parliaments found in XML, please re-check <a'
       . ' href="parliamentTerm.php">parliament term</a> validation.';
  }
  
  // Checking for missing entries in XML ///////////////////////////////////////
  echo '<p>Checking missing entries in XML...<br />';
  $countMissingXML = 0;
  for ($x = 0; $x < count($dbProfiles); $x++) {
    $dProf = $dbProfiles[$x];
    $isMatch = false;
    for ($y = 0; $y < count($xmlProfiles); $y++) {
      $xProf = (string) $xmlProfiles[$y];
      if (strcmp($dProf, $xProf) == 0) {
        $isMatch = true;
      }
    }
    if (!$isMatch) {
      echo '<strong>No match</strong> for: <a href="http://' . $dom
         . '/api/profile/' . $dProf . '/profile.xml">' . $dProf . '</a> '
         . '<em>(Missing constituency or parliament term?)</em><br />';
      $countMissingXML++;
    }
  }
  if ($countMissingXML > 0) {
    $tmpString = '<strong>' . $countMissingXML . '</strong>';
  } else $tmpString = 'No';
  echo $tmpString . ' missing entries in XML-API.</p>';
  
  // Checking for missing entries in DB ////////////////////////////////////////
  echo '<p>Checking missing entries in DB...<br />';
  $countMissingDB = 0;
  for ($x = 0; $x < count($xmlProfiles); $x++) {
    $xProf = (string) $xmlProfiles[$x];
    $isMatch = false;
    for ($y = 0; $y < count($dbProfiles); $y++) {
      $dProf = $dbProfiles[$y];
      if (strcmp($xProf, $dProf) == 0) {
        $isMatch = true;
      }
    }
    if (!$isMatch) {
      echo '<strong>No match</strong> for: <a href="http://' . $dom 
         . '/api/profile/' . $xProf . '/profile.xml">' . $xProf . '</a><br />';
      $countMissingDB++;
    }
  }
  if ($countMissingDB > 0) {
    $tmpString = '<strong>' . $countMissingDB . '</strong>';
  } else $tmpString = 'No';
  echo $tmpString . ' missing entries in DB.</p>'
  
  // Script finished ///////////////////////////////////////////////////////////
     . '<p>After successful profile validation, you may proceed to the'
     . ' <a href="politicianComm.php">committee</a> validation.'
     . '</p>'; */
     
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
