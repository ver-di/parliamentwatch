<?php $node_url=url($path='node/10508', array('absolute' => TRUE)); ?>
<div class="node-testimonial eyecatcher relative">
  <div class="social-media">
    <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $node_url; ?>" class="facebook">facebook</a>
    <a href="https://twitter.com/intent/tweet?text=Jetzt Fördermitglied von abgeordnetenwatch.de werden&url=<?php print $node_url; ?>" class="twitter">twitter</a>
  </div>
  <div class="float-left img-rounded push-right-m"><?php print render($content['field_testimonial_portrait']); ?></div>
  <blockquote class="medium"><?php print render($content['field_testimonial_quote']); ?></blockquote>
  <p class="small light push-bottom-xs"><?php print render($content['field_testimonial_fullname']); ?> ist eines von <span id="mscount"><?php print $count_memberships; ?></span> Fördermitgliedern von abgeordnetenwatch.de</p>
  <div class="text-right"><a href="<?php print $node_url; ?>">Jetzt Fördermitglied werden <span class="icon-thanks aw-icon-2x"></span></a></div>

</div>
