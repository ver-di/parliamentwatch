<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <style type="text/css">
      <!--
body {
    background: #fff;
    font: 12px/1.5 Lucida Grande, Helvetica, Arial, sans-serif;
    color: #333;
    margin: 0;
    padding: 0;
}
.center {  
  max-width: 640px;
  padding: 0 20px;
  margin: auto;
}
.text-center {
  text-align: center;
}
.text-right {
  text-align: right;
}
#metalinks {
  text-align: right;
}
#metalinks a {
  display: inline-block;
  line-height: 3em;
  margin-left: 20px;
}
#metalinks a,
#follow a {
  color: #666;
  font-weight: normal;
}
#follow {
  padding: 3em 0 0 0;
}
a.facebook,
a.twitter,
a.google,
a.rss {
  background-image: url("https://www.abgeordnetenwatch.de/sites/all/themes/custom/parliamentwatch/images/sprite.png");
  background-repeat: no-repeat;
  display: block;
  margin: 6px 0;
  padding: 0.3em 0 0.3em 24px;
}
a.facebook {
  background-position: -930px -1290px;
}
a.twitter {
  background-position: -890px -1329px;
}
a.google {
  background-position: -850px -1370px;
}
a.rss {
  background-position: -810px -1410px;
}
#footer {
  background: #f7f7f7; /* Old browsers */
  /* IE9 SVG, needs conditional override of 'filter' to 'none' */
  background-image: url(data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiA/Pgo8c3ZnIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgd2lkdGg9IjEwMCUiIGhlaWdodD0iMTAwJSIgdmlld0JveD0iMCAwIDEgMSIgcHJlc2VydmVBc3BlY3RSYXRpbz0ibm9uZSI+CiAgPGxpbmVhckdyYWRpZW50IGlkPSJncmFkLXVjZ2ctZ2VuZXJhdGVkIiBncmFkaWVudFVuaXRzPSJ1c2VyU3BhY2VPblVzZSIgeDE9IjAlIiB5MT0iMCUiIHgyPSIwJSIgeTI9IjEwMCUiPgogICAgPHN0b3Agb2Zmc2V0PSIwJSIgc3RvcC1jb2xvcj0iI2Y3ZjdmNyIgc3RvcC1vcGFjaXR5PSIxIi8+CiAgICA8c3RvcCBvZmZzZXQ9IjEwMCUiIHN0b3AtY29sb3I9IiNmZmZmZmYiIHN0b3Atb3BhY2l0eT0iMSIvPgogIDwvbGluZWFyR3JhZGllbnQ+CiAgPHJlY3QgeD0iMCIgeT0iMCIgd2lkdGg9IjEiIGhlaWdodD0iMSIgZmlsbD0idXJsKCNncmFkLXVjZ2ctZ2VuZXJhdGVkKSIgLz4KPC9zdmc+);
  background-image: -moz-linear-gradient(top,  #f7f7f7 0%, #ffffff 100%); /* FF3.6+ */
  background-image: -webkit-gradient(linear, left top, left bottom, color-stop(0%,#f7f7f7), color-stop(100%,#ffffff)); /* Chrome,Safari4+ */
  background-image: -webkit-linear-gradient(top,  #f7f7f7 0%,#ffffff 100%); /* Chrome10+,Safari5.1+ */
  background-image: -o-linear-gradient(top,  #f7f7f7 0%,#ffffff 100%); /* Opera 11.10+ */
  background-image: -ms-linear-gradient(top,  #f7f7f7 0%,#ffffff 100%); /* IE10+ */
  background-image: linear-gradient(top,  #f7f7f7 0%,#ffffff 100%); /* W3C */
  filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#f7f7f7', endColorstr='#ffffff',GradientType=0 ); /* IE6-8 */
  border-top: 1px solid #d3d3d3;
  padding: 15px 0 30px;
  margin-top: 40px;
}
a {
  color: #f63;
  text-decoration: none;
  font-weight: bold;
}
a:hover,
a:focus,
a:active {
  color: #999;
}
a.read-more:link,
a.read-more:visited {
  background-image: url("https://www.abgeordnetenwatch.de/sites/all/themes/custom/parliamentwatch/images/sprite.png");
  background-repeat: no-repeat;
  padding-left: 18px;
  background-position: -723px -1942px;
  
}
.read-more a:hover,
.read-more a:focus,
.read-more a:active {
    background-position: -683px -1982px;
}
h1 a, h2 a, h3 a {
    font-weight: normal;
}
h1,
h2,
h3 {
    font-weight: normal;
    line-height: 1.2em;
    font-family: 'Times New Roman', Georgia, serif;
}
h1,
h2 {
    color: #f63;
    font-size: 24px;
    letter-spacing: 0.04ex;
    margin-bottom: 9px;
}
h3 {
    font-size: 20px;
    line-height: 22px;
    margin-bottom: 8px;
}
h4 {
    font-size: 12px;
    margin-bottom: 0;
}
p {
  margin-bottom: 1em;
}
hr {
  clear: both;
  margin: 1em 0;
  border: 0;
  height: 1px;
  border-bottom: 1px dotted #f63;
}
img {
  max-width: 100%;
  height: auto;
}
td {
    vertical-align: top;
}
blockquote {
    padding: 12px 0 20px 24px;
    quotes:"\201C" "\201D";
    position: relative;
    font: italic normal 18px/20px Times New Roman, Times, serif;
}
blockquote:before {
    background-position: -890px -2616px;
    content: "";
    height: 15px;
    left: 0;
    position: absolute;
    top: 8px;
    width: 19px;
}
blockquote:after {
    content: url("../images/ic_quote-close.png");
    margin-left: 3px;
    position: relative;
    bottom: -11px;
}
blockquote p:last-child {
    display:inline;
}
*+html blockquote p {
    display:inline;
}
.button:link,
.button:visited {
    background: #ff6733; /* Old browsers */
    background-image: #ff8157; /* Old browsers */
    background-image: -moz-linear-gradient(top,  #ff8157 0%, #ff6c3f 64%, #ff622d 65%, #ff602b 100%); /* FF3.6+ */
    background-image: -webkit-gradient(linear, left top, left bottom, color-stop(0%,#ff8157), color-stop(64%,#ff6c3f), color-stop(65%,#ff622d), color-stop(100%,#ff602b)); /* Chrome,Safari4+ */
    background-image: -webkit-linear-gradient(top,  #ff8157 0%,#ff6c3f 64%,#ff622d 65%,#ff602b 100%); /* Chrome10+,Safari5.1+ */
    background-image: -o-linear-gradient(top,  #ff8157 0%,#ff6c3f 64%,#ff622d 65%,#ff602b 100%); /* Opera 11.10+ */
    background-image: -ms-linear-gradient(top,  #ff8157 0%,#ff6c3f 64%,#ff622d 65%,#ff602b 100%); /* IE10+ */
    background-image: linear-gradient(top,  #ff8157 0%,#ff6c3f 64%,#ff622d 65%,#ff602b 100%); /* W3C */
    filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#ff8157', endColorstr='#ff602b',GradientType=0 ); /* IE6-9 */
    border-color: 0;
    border: none;
    border-radius: 0;
    color: #fff;
    cursor: pointer;
    display: inline-block;
    font-weight: normal;
    padding: 7px 10px;
    text-shadow: 0 0 0;
    vertical-align: top;
    margin-top: 1px;
    
    -webkit-box-shadow: 0 0 2px 2px #DEDEDE;
    -moz-box-shadow: 0 0 2px 2px #DEDEDE;
    box-shadow: 0 0 2px 2px #DEDEDE;
    text-decoration: none;
    letter-spacing: 1px;
}
.button:hover,
.button:focus,
.button:active {
    background: #ababab; /* Old browsers */
    background-image: -moz-linear-gradient(top,  #ababab 0%, #9d9d9d 70%, #999999 70%, #999999 100%); /* FF3.6+ */
    background-image: -webkit-gradient(linear, left top, left bottom, color-stop(0%,#ababab), color-stop(70%,#9d9d9d), color-stop(70%,#999999), color-stop(100%,#999999)); /* Chrome,Safari4+ */
    background-image: -webkit-linear-gradient(top,  #ababab 0%,#9d9d9d 70%,#999999 70%,#999999 100%); /* Chrome10+,Safari5.1+ */
    background-image: -o-linear-gradient(top,  #ababab 0%,#9d9d9d 70%,#999999 70%,#999999 100%); /* Opera 11.10+ */
    background-image: -ms-linear-gradient(top,  #ababab 0%,#9d9d9d 70%,#999999 70%,#999999 100%); /* IE10+ */
    background-image: linear-gradient(top,  #ababab 0%,#9d9d9d 70%,#999999 70%,#999999 100%); /* W3C */
    filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#ababab', endColorstr='#999999',GradientType=0 ); /* IE6-9 */
    color: #fff;
}
.arrow-item-list {
    margin-left: 0;
    margin-bottom: 1em;
}
.arrow-item-list li {
    padding-left: 15px;
    background-position: -770px -1896px;
    background-image: url("https://www.abgeordnetenwatch.de/sites/all/themes/custom/parliamentwatch/images/sprite.png");
    background-repeat: no-repeat;
    list-style: none;
    margin-bottom: 0.5em;
}
      -->
    </style>
  </head>
  <body id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div class="center">
      <div id="metalinks">
        <a href="https://www.abgeordnetenwatch.de/ueber-uns">Über uns</a>
        <a href="https://www.abgeordnetenwatch.de/ueber-uns/mehr/finanzierung">Finanzierung</a>
        <a href="https://www.abgeordnetenwatch.de/kontakt">Kontakt</a>
      </div>
      
      <div style="padding: 3px 0 28px;">
        <img src="https://www.abgeordnetenwatch.de/sites/all/themes/custom/parliamentwatch/logo-email.png" alt="abgeordnetenwatch.de - Weil Transparenz Vertrauen schafft" />
      </div>
    </div>
    
    <hr style="margin-bottom: 35px;">
        
    <div id="main" class="center">
      <?php print $body ?>
      
      <div id="follow">
        <a href="https://www.abgeordnetenwatch.de/rss/blog.xml" class="rss">Verfolgen Sie unseren Blog und bleiben Sie bei aktuellen politischen Geschehnissen auf dem Laufenden!</a>
        <a href="https://www.facebook.com/abgeordnetenwatch.de" class="facebook">Schauen Sie auf unserer Facebook-Seite vorbei und diskutieren Sie mit!</a>
        <a href="https://plus.google.com/+abgeordnetenwatch/posts" class="google">Schauen Sie auf unserer Google+ - Seite vorbei und diskutieren Sie mit!</a>
        <a href="https://twitter.com/a_watch" class="twitter">Auf twitter veröffentlichen wir mehrmals täglich spannende Kurznachrichten. Jetzt unseren twitter-Channel abonnieren!</a>
      </div>
    </div>
      
      <div id="footer">
        <div class="center">
          <h3>www.abgeordnetenwatch.de</h3>
        
          <p>
            Parlamentwatch e.V., Mittelweg 11-12, 20148 Hamburg<br />
            Tel: 040 / 317 69 10 - 26<br />
            Fax: 040 / 317 69 10 - 28<br />
            E-Mail: <a href="mailto:info@abgeordnetenwatch.de">info@abgeordnetenwatch.de<br />
            <a href="https://www.abgeordnetenwatch.de">www.abgeordnetenwatch.de</a>
          </p>
          
          <p>
            Parlamentwatch e.V. hat seinen Sitz in Hamburg, eingetragen beim Amtsgericht Hamburg VR 19479, vertretungsberechtigte Vorstandsmitglieder sind Boris Hekele und Gregor Hackmack.
          </p>
          
          <p>
            Spendenkonto<br>
            Parlamentwatch e.V., Kto.: 2011 120 000, BLZ: 430 609 67 bei der GLS Bank, IBAN DE03430609672011120000, BIC GENODEM1GLS<br>
            Als gemeinnütziger Verein stellen wir Ihnen gerne eine Spendenbescheinigung aus.
          </p>
        </div>
      </div>
      
    </div>
  </body>
</html>
