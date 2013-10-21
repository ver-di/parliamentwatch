File Version: 2013-10-10

The migration test scripts compare (mirgration-)database data with the XML-API
which displays data imported into Drupal and taxonomy terms. This is no Drupal
module. Call the script's path directly from commandline (drush).

$ drush [-vd --uri=...] scr path/to/migrate-tests/parliamentTerm.php

IMPORTANT: Remove the scripts after successful validation to avoid security and
stability issues on live sites.

IMPORTANT: Don't enter live site database details, only run it local.

NOTE: Test results may yield false positives due to character encoding.

### 1 parliamentTerm.php ###
- counts parliament terms in DB, XML and Taxonomy
- checks for duplicates both in XML and Taxonomy
- checks for entries missing in either DB, XML or Taxonomy

### 2 committeeTerm.php ###
- counts committee terms in DB and Taxonomy
- checks for entries missing in Taxonomy

### 3 constituencyTerm.php ###
- @TODO work in progress
- counts constituency terms in DB and Taxonomy
- checks for entries missing in Taxonomy

### x politicianProfiles.php ###
- @TODO work in progress
- counts politicians (unique) and their profiles (multiple) in DB
- counts politicians (unique) in XML depending on their parliament
- checks whether parliaments are invalid (404 in API) or empty (no connected
  profiles)
- checks for entries missing in either DB or XML

### 3 politicianComm.php ###
- @TODO work in progress

### 4 politicianConst.php ###
- @TODO work in progress
- counts constituencies in DB
- counts constituencies in XML depending on their parliament
- checks whether parliaments are invalid (404 in API) or empty (no connected
  constituencies)
- @TODO work in progress

Migration tests written by:
    --author="Alexander Schoedon <schoedon@abgeordnetenwatch.de>"

Contact me for any questions or to raise issues.
