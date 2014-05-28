<?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?>>
<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="https://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
  <!-- affiliate css and js -->
  <?php if (array_shift(explode(".",$_SERVER['HTTP_HOST'])) == 'affiliate'): ?>
      <link href="http://www.labanda.de/sites/labanda.de/files/css/css_AcDPoG9U4yy9WjsSBtFs1ttAraFSeZHzFQtND7apB2Y.css" rel="stylesheet" type="text/css" />
  <?php endif; ?>
  <!-- /affiliate css and js -->
</head>
<body<?php print $attributes;?>>
  <?php echo render($pw_tracking) ?>
  <div id="skip-link">
    <a href="#nav" class="element-invisible element-focusable"><?php print t('Skip to main navigation'); ?></a>
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>