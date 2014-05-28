<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="https://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
  <!-- affiliate css and js -->
  <?php print render($pw_affilliate_code); ?>
  <!-- /affiliate css and js -->
</head>
<body<?php print $attributes;?>>
  <?php print render($pw_tracking); ?>
  <div id="skip-link">
    <a href="#nav" class="element-invisible element-focusable"><?php print t('Skip to main navigation'); ?></a>
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>