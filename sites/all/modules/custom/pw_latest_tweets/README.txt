
CONTENTS OF THIS FILE
---------------------

 * Create twitter app
 * Required Modules
 * Twitter Settings
 * Twitter Block

Create twitter app
------------------
Create an app on your twitter account (api.twitter.com).
Note the following values of your twitter app.
	a - OAuth Consumer key
	b - OAuth Consumer secret
While creating an app it will ask you for Callback URL, please provide: http://dailwatch.ie/en-gb/twitter/oauth


Required Modules
----------------
1 - Download and place the (Twitter) module in your sites modules directory
2 - Download and place the (oauth) module in your sites modules directory
3 - Place the module (pw_latest_tweets) in modules directory of your site.
4 - Enable the above 3 modules


Twitter Settings
----------------
1 - Go to (Configartion) -> (Web Services) -> (Twitter) -> (Settings)
	Fill the bellow 2 fields:
	a - OAuth Consumer key		: (your twitter consumer key here)
	b - OAuth Consumer secret	: (your twitter consumer secret here)
2 - Go to (Configartion) -> (Web Services) -> (Twitter)
3 - Click on (Go to Twitter add an authenticated account)
    Note: This will redirect you to (api.twitter.com) to Authorize the app.
    click on: (Authorize app) button. This will redirect back to your site configaration page.
4 - Select/check the (Tweets) option and click (Save changes) button.

Twitter Block
-------------
1 - Go to (Structure) -> (Blocks)
2 - Show the block (View: Latest Tweets: Latest Tweets) in region (Sidebar Second)
3 - Click save button in bottom of the page.


