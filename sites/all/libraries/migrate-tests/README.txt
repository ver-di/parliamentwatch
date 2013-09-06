File Version: 2013-08-30

The migration test scripts compare (mirgration-)database data with the XML-API
which displays data imported into Drupal. This is no Drupal module. Call the
script's path directly. 

Note: Remove after successful validation to avoid security and stability issues
on live sites.

### 1 parliamentTerm.php ###
- counts parliament terms in DB and XML
- checks for duplicates both in DB and in XML
- checks for entries missing in either DB or XML

### 2 politicianProfiles.php ###
- counts politicians (unique) and their profiles (multiple) in DB
- counts politicians (unique) in XML depending on their parliament
- checks whether parliaments are invalid (404 in API) or empty (no connected
  profiles)
- checks for entries missing in either DB or XML

### 3 politicianComm.php ###
- @TODO work in progress

### 4 politicianConst.php ###
- counts constituencies in DB
- counts constituencies in XML depending on their parliament
- checks whether parliaments are invalid (404 in API) or empty (no connected
  constituencies)
- @TODO work in progress

Migration tests written by:
    --author="Alexander Schoedon <schoedon@abgeordnetenwatch.de>"

Contact me for any questions or to raise issues.
