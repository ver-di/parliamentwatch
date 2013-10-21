<?php

  //////////////////////////////////////////////////////////////////////////////
  $time_start = microtime(true);
  $rustart = getrusage();

  // UTF-8 needed to display non-standard characters ///////////////////////////
  header('Content-Type: text/html; charset=utf-8');
  
  // Script finished ///////////////////////////////////////////////////////////
  echo '<h3>Checking committee term data integrity.</h3>'
     . '<p>This test is currently <strong>unavailable @TODO</strong>, please'
     . ' proceed to the <a href="politicianConst.php">constituency</a>'
     . ' validation.</p>';
     
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
