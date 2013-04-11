<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html lang="de" xml:lang="de" xmlns="http://www.w3.org/1999/xhtml">
    <head>
        <title>Ireland Voting Parser</title>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
        <script src="http://www.abgeordnetenwatch.de/scripts/jquery-1.3.2.min.js" type="text/javascript"></script>
        <script src="http://www.abgeordnetenwatch.de/scripts/jquery.livequery.js" type="text/javascript"></script>
        <script src="http://www.abgeordnetenwatch.de/scripts/jquery.getUrlParam.js" type="text/javascript"></script>
        <script src="http://www.abgeordnetenwatch.de/scripts/jquery.table2CSV.js" type="text/javascript"></script>
        <script src="scripts.js" type="text/javascript"></script>
    </head>
    <body>
        <form action="save2csv.php" method="post">
            <input type="hidden" name="csv_data" id="csv_data" />
        </form>
        <form method="post">
            Source URL: <input name="xml_url" size="75" value="<?=@$_POST['xml_url']?>"/>
            <br /><input type="submit" value="submit XML" />
        </form>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<a href="mappings.php" target="_blank">edit mappings</a>
        <?

        $assignments = file_get_contents("assignments.txt");
        $a_added = array();

        function WriteHtml($votes, $behaviour) {
            global $assignments;
            global $a_added;

            foreach ($votes as $vote) {

                // TD ermitteln
                if(preg_match('/"([^"]+)";"'.$vote->getAttribute('pid').'"/', $assignments, $td)) {
                    $td_val = $td[1];
                    $a_added[] = $td_val;
                }
                else {
                    $td_val = '<span style="background-color: #ff0000">NOT FOUND: '.$vote->getAttribute('pid').'</span>';
                }


                // Output
                echo '<tr>';
                echo '<td>'.$td_val.'</td>';
                echo '<td>'.$behaviour.'</td>';
                echo '</tr>';
            }
        }

        if(isset ($_POST['xml_url'])) {
            $xml_source = file_get_contents($_POST['xml_url']);
            $dom = DOMDocument::loadXML($xml_source);
            $votes = $dom->getElementsByTagName('Vote');
            $i = 0;
            echo 'Found <b>'.$votes->length.'</b> Votes!';
            foreach ($votes as $vote) {
                $i++;
                echo '<br /><br /><a href="javascript:DownloadAsCSV($(\'#data'.$i.'\'))">Download this vote as CSV</a>';
                echo '<table id="data'.$i.'">';
                $yes_votes = $vote->getElementsByTagName('YesVote');
                WriteHtml($yes_votes, 'yes');
                $no_votes = $vote->getElementsByTagName('NoVote');
                WriteHtml($no_votes, 'no');

                // Absents
                $assignments_temp = $assignments;
                foreach($a_added as $added) {
                    $assignments_temp = preg_replace('/^"'.$added.'";.*$/m', '', $assignments_temp);
                }
                $assignments_temp = preg_replace("/\n{2,}/", "\n", $assignments_temp);
                preg_match_all('/^"([^"]+)"/m', $assignments_temp, $m);
                foreach($m[1] as $match) {
                    // Output
                    echo '<tr>';
                    echo '<td>'.$match.'</td>';
                    echo '<td>absent</td>';
                    echo '</tr>';
                }

                echo '</table>';
            }
        }
        ?>
    </body>
</html>
