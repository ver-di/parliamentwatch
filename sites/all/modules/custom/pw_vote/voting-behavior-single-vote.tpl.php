<li class="item vote <?php print $vote; ?>">
  <div class="pw-arrow-box-trigger"></div>
  <div class="item-politician pw-arrow-box">
    <h3><?php print $firstname; ?> <?php print $lastname; ?> (<?php print $party; ?>)</h3>
    <p><span class="medium">Position von <?php print $firstname; ?> <?php print $lastname; ?>: </span><span class="vote <?php print $vote; ?> block"><?php print $vote; ?></span></p>
    <?php if (strlen($statement) > 0){ ?>
	    <blockquote>
	      <?php print $statement; ?>
	    </blockquote>
    <?php } ?>
    <p><a href="/<?php print $path_profile; ?>">Profile öffnen</a></p>
  </div>
</li>