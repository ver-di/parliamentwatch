<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html lang="de" xml:lang="de" xmlns="http://www.w3.org/1999/xhtml">
    <head>
        <title>Ireland Voting Parser - Mappings</title>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
		<?
			if(isset($_POST['mappings'])){
				copy("assignments.txt", "backups/assignments_".date("Y-m-d_His").".txt");
    			file_put_contents("assignments.txt", $_POST['mappings']);
			}
			$f_mappings = file_get_contents("assignments.txt");
		?>
    </head>
    <body>
		<form action="mappings.php" method="post">
	
		<textarea cols="90" rows="50" name="mappings"><?=$f_mappings?></textarea><br />
			<input type="submit" value="Save Mappings" />
		</form>
    </body>
</html>
