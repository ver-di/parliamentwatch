<?php

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
  $dbSelect = 'project'; //*1
  $dbFrom = 'legacy_projects'; //*2
  
  // UTF-8 needed to display non-standard characters ///////////////////////////
  header('Content-Type: text/html; charset=utf-8');
  
  // Starting script ///////////////////////////////////////////////////////////
  echo '<h3>Checking parliament term data integrity.</h3>';
  
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
  // DB query for Germany (AW) /////////////////////////////////////////////////
  $sql = 'SELECT ' . $dbSelect . ' FROM ' . $dbFrom . ' WHERE project_cmd '
       . ' NOT IN (233, 486, 974, 1036, 1010, 1475) AND project_cmd '
       . ' BETWEEN 0 AND 2000 GROUP BY project_cmd ORDER BY project ASC';
  $result = mysql_query($sql, $link);
  if (!$result) {
    echo "DB Error, could not query the database<br />";
    echo 'MySQL Error: ' . mysql_error() . '<br /><br />';
    exit;
  }
  
  // Counting results in mirgration database ///////////////////////////////////
  echo '<p>Looking in DB for "' . $dbSelect . '" in "' . $dbFrom . '":<br />';
  $i = 0;
  while ($row = mysql_fetch_assoc($result)) $i++;
  echo 'Found <strong>' . $i . '</strong> parliament terms in DB.</p>';
  
  // Counting results in XML-API ///////////////////////////////////////////////
  echo '<p>Looking in XML for "' . $xmlExpression . '" in "<a href="' . $xmlPath
     . '">' . $xmlPath . '</a>":<br />';
  $file = file_get_contents($xmlPath);
  $xml = simplexml_load_string($file);
  $xpath = $xml->xpath($xmlExpression);
  $j = 0;
  while(list(, $node) = each($xpath)) $j++;
  echo 'Found <strong>' . $j . '</strong> parliament terms in XML-API.</p>'
  
  // Checking for missing entries in XML ///////////////////////////////////////
     . '<p>Checking missing entries in XML...<br />';
  $result = mysql_query($sql, $link);
  $countMissingXML = 0;
  while ($row = mysql_fetch_assoc($result)) {
    $isMatch = false;
    $xpath = $xml->xpath($xmlExpression);
    while(list(, $node) = each($xpath)) {
      if (strcmp(utf8_encode($row['project']), $node) == 0) {
        $isMatch = true;
      }
    }
    if (!$isMatch) {
      echo '<strong>No match</strong> for: ' . utf8_encode($row['project'])
         . '<br />';
      $countMissingXML++;
    }
  }
  $tmpString = '0';
  if ($countMissingXML > 0) {
    $tmpString = '<strong>' . $countMissingXML . '</strong>';
  } else $tmpString = 'No';
  echo $tmpString . ' missing entries in XML.</p>'
  
  // Checking for duplicates in XML ////////////////////////////////////////////
     . '<p>Checking for duplicates in XML...<br />';
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
        echo '<strong>Possible duplicate entry</strong> for: ' . $innerNode
           . ' and ' . $outterNode . '<br />';
        $countDuplicateXML++;
      }
    }
  }
  $countDuplicateXML /= 2;
  if ($countDuplicateXML > 0) {
    $tmpString = '<strong>' . $countDuplicateXML . '</strong>';
  } else $tmpString = 'No';
  echo $tmpString . ' duplicate entries in XML.</p>'
  
  // Checking for duplicates in DB /////////////////////////////////////////////
     . '<p>Checking for duplicates in DB...<br />';
  $outterResult = mysql_query($sql, $link);
  $s = 0;
  $countDuplicateDB = 0;
  while ($outterRow = mysql_fetch_assoc($outterResult)) {
    $s++;
    $innerResult = mysql_query($sql, $link);
    $t = 0;
    while ($innerRow = mysql_fetch_assoc($innerResult)) {
      $t++;
      if (strcmp(utf8_encode($outterRow['project']),
                 utf8_encode($innerRow['project'])) == 0 && $s != $t) {
        echo '<strong>Possible duplicate entry</strong> for: ' 
           . utf8_encode($outterRow['project']) . ' and ' 
           . utf8_encode($innerRow['project']) . '<br />';
        $countDuplicateDB++;
      }
    }
  }
  $countDuplicateDB /= 2;
  if ($countDuplicateDB > 0) {
    $tmpString = '<strong>' . $countDuplicateDB . '</strong>';
  } else $tmpString = 'No';
  echo $tmpString . ' duplicate entries in DB.</p>'
  
  // Checking for missing entries in DB ////////////////////////////////////////
     . '<p>Checking missing entries in DB...<br />';
  $xpath = $xml->xpath($xmlExpression);
  $countMissingDB = 0;
  while(list(, $node) = each($xpath)) {
    $isMatch = false;
    $result = mysql_query($sql, $link);
    while ($row = mysql_fetch_assoc($result)) {
      if (strcmp($node, utf8_encode($row['project'])) == 0) {
        $isMatch = true;
      }
    }
    if (!$isMatch) {
      echo '<strong>No match</strong> for: ' . $node . '<br />';
      $countMissingDB++;
    }
  }
  if ($countMissingDB > 0) {
    $tmpString = '<strong>' . $countMissingDB . '</strong>';
  } else $tmpString = 'No';
  echo $tmpString . ' missing entries in DB.</p>'
  
  // Script finished ///////////////////////////////////////////////////////////
     . '<p>After successful parliament term validation, you may proceed to the'
     . ' <a href="politicianProfiles.php">politician profiles</a> validation.'
     . '</p>';
     
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
  echo "<p><em>This script used " . rutime($ru, $rustart, "utime")
     . "ms for its computations and spent " . rutime($ru, $rustart, "stime")
     . "ms in system calls. Total execution time " . $execution_time
     . "ms.</em></p>";
     
  //////////////////////////////////////////////////////////////////////////////

?>
