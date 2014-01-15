Pw Donation Form
================

ENABLE MODULE
drush en -y pw_donation_form --uri=abgeordnetenwatch.de

IMPORT WEBFORM
drush ne-import --file=sites/all/modules/custom/pw_newsletter/node-export-donation-form-webform.drupal --uri=abgeordnetenwatch.de

SET WEBFORM ID FOR COMPACT FORMS
/admin/config/user-interface/compact_forms
