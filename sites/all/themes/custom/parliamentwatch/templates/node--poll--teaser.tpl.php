<?php
   print render($title_suffix);
?>
<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<div class="petition-list-image-wrapper img-outline">
    <a href="<? echo $node_url; ?>" title="zur Petition" class="<? echo ($partner_html)?"colorbox-load":"";?>">
        <? echo $themed_image; ?>
    </a>
    <?php if ($field_image_copyright): ?>
    <div class="copyright">
        <? echo $field_teaser_image[0]['field_image_copyright']['und'][0]['value']; ?>
    </div>
    <?php endif; ?>
</div>
