<?php

header('Content-Type: text/html; charset=utf-8');

echo '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
          "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
  <html xmlns="http://www.w3.org/1999/xhtml">
    <head>
      <title>PW Migrate Tests</title>
      <style type="text/css">
          body {
              background-color:ffffff;
          }
          h1{
              font-family:Cursive;
              color:000000;
          }
          p {
              font-family:Cursive;
              font-size:14px;
              font-style:normal;
              font-weight:normal;
              color:000000;
          }
      </style>
    </head>
    <body>
      <h1>PW Migrate Tests</h1>
      <p>
        <ol>
          <li>Validate <a href="parliamentTerm.php">parliament term</a> (10-20 sec script time).</li>
          <li>Validate <a href="politicianProfiles.php">profiles per parliament</a> (3-6 min script time).</li>
          <li>Validate <a href="politicianComm.php">committees</a> (@TODO)</li>
          <li>Validate <a href="politicianConst.php">constituencies per parliament</a> (5-10 min script time, get some coffee).</li>
        </ol>
      </p>
    </body>
  </html>';


?>
