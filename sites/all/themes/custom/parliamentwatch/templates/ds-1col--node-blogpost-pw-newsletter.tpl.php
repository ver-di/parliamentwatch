<?php $node_url=url($path=$node_url, array('absolute' => TRUE)); ?>
<div class="relative entity-paragraphs-item">
  <div class="social-media">
    <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $node_url; ?>" class="facebook" target="_blank">facebook</a>
    <a href="https://twitter.com/intent/tweet?text=<?php print $title; ?>&url=<?php print $node_url; ?>" class="twitter" target="_blank">twitter</a>
  </div>
  <h3><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
  <div class="clearfix">
    <?php if (!empty($field_teaser_image)): ?>
      <div class="float-left push-right-m">
        <a href="<?php print $node_url; ?>" title="zum Blogartikel">
          <img src="<?php $uri = $field_teaser_image[0]['uri']; $uri = image_style_path('pw_landscape_l',$uri); $url = file_create_url($uri); print $url; ?>" alt="" class="file-image">
        </a>
        <div class="copyright"><?php print($field_teaser_image[0]['field_image_copyright']['und'][0]['value']); ?></div>
      </div>
    <?php endif; ?>
    <?php print render($content['body']); ?>
    <a class="icon-more" href="<?php print $node_url; ?>" title="zum Blogartikel"> weiterlesen</a>
  </div>
</div>

