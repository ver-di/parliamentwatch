<?
    header("Content-type: application/octet-stream");
    header("Content-Disposition: attachment; filename=\"vote.csv\"");
    echo str_replace('"', "", stripcslashes($_REQUEST['csv_data']));
?>