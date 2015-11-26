<?php
/**
 * @file
 * pw_subsite.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_subsite_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Navi Meta DE';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'menu_meta_de';
  $fe_block_boxes->body = '		<a class="header_login" href="<?php
global $user;
 if($user->uid ==0 ){
   print(\'/user\');
 }
 else {
  print(\'/user/logout\');
 }
?>"><?php
global $user;
 if($user->uid ==0 ){
   print(\'Login-Bereich\');
 }
 else {
  print(\'Abmelden\');
 }
?></a>';

  $export['menu_meta_de'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Newsletter-Layer (auto)';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'newsletter_auto';
  $fe_block_boxes->body = '<script type="text/javascript">
	    var pw_nl_shown = localStorage.getItem("pw_nl_shown");
	    if (pw_nl_shown === null && Math.random() < 0.5){ // Show about every 2nd time
	    		// Show Newsletter-Layer
	    		jQuery(document).ready(function() {
        			jQuery.fn.colorbox({href:\'https://secured.abgeordnetenwatch.de/tools/newsletter.php\', open:true, iframe:true, width:800, height:420});
    			});
	    		localStorage.setItem("pw_nl_shown", "true");
	    }
</script>';

  $export['newsletter_auto'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'PW Footer Kurzbeschreibung';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'pw_footer_abstract';
  $fe_block_boxes->body = '<p>
	abgeordnetenwatch.de ist eine unabhängige und überparteiliche Internetplattform, auf der Bürgerinnen und Bürger die Abgeordneten im Bundestag, dem Europäischen Parlament sowie in zahlreichen Landesparlamenten öffentlich befragen können. Neben den Fragen und Antworten dokumentieren wir u.a. auch das Abstimmungsverhalten bei wichtigen Parlamentsentscheidungen. Außerdem widmen wir uns in einem Rechercheblog Themen wie Nebentätigkeiten der Abgeordneten, Parteispenden und Lobbyismus.
</p>
';

  $export['pw_footer_abstract'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'PW Transparenzkampagne Header';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'pw_transparancy_header';
  $fe_block_boxes->body = '<p>
	Der Bundestag hat Berufung gegen unsere erfolgreiche Transparenzklage eingelegt.<br />
 <a href="https://www.abgeordnetenwatch.de/ueber-uns/spendenformular?recurring=1&pk_campaign=Foerderer&pk_kwd=Header">Mit Ihnen zusammen stehen wir den langwierigen Prozess durch!</a>
</p>
';

  $export['pw_transparancy_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Media Footer';
  $fe_block_boxes->format = 'managed_content';
  $fe_block_boxes->machine_name = 'social_media_footer';
  $fe_block_boxes->body = '<div class="socialmedia facebook">
	<a href="https://www.facebook.com/abgeordnetenwatch.de" title="Facebook" target="_blank">Facebook</a>
</div>
<div class="socialmedia twitter">
	<a href="https://twitter.com/a_watch" title="Twitter" target="_blank">Twitter</a>
</div>
<div class="socialmedia google">
	<a href="https://plus.google.com/101206126881536002255/" title="Google+" target="_blank">Google+</a>
</div>
<div class="socialmedia rss">
	<a href="https://www.abgeordnetenwatch.de/rss/blog.xml" title="RSS" target="_blank">RSS</a>
</div>
';

  $export['social_media_footer'] = $fe_block_boxes;

  return $export;
}
