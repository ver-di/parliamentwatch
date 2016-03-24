<?php $node_url=url('node/10508', array('absolute' => TRUE)); ?>
<div class="node-testimonial eyecatcher relative <?php print render($content['field_pg_donate_targetgroup']); ?>">
  <div class="social-media">
    <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $node_url; ?>" class="facebook" target="_blank">facebook</a>
    <a href="https://twitter.com/intent/tweet?text=Jetzt Fördermitglied von abgeordnetenwatch.de werden&url=<?php print $node_url; ?>" class="twitter" target="_blank">twitter</a>
  </div>
  <?php print render($content['field_pg_testimonial_er']); ?>
  <div class="text-right"><a href="<?php print $node_url; ?>">Jetzt Fördermitglied werden <span class="icon-thanks aw-icon-2x"></span></a></div>
</div>
