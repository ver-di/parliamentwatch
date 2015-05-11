<li class="item vote <?php print $class_name; ?>">
  <div class="pw-arrow-box-trigger"></div>
  <div class="item-politician pw-arrow-box">
    <h3>
      <?php print $firstname; ?> <?php print $lastname; ?> (<?php print $party; ?>)
    </h3>
    <p>
      <span class="medium">Position von <?php print $firstname; ?> <?php print $lastname; ?>: </span>
      <span class="vote <?php print $class_name; ?> block"><?php print $voting_behavior; ?></span>
    </p>
    <p>
      <?php print $portrait; ?>
    </p>
    <?php if (strlen($statement) > 0): ?>
      <blockquote>
        <?php print $statement; ?>
      </blockquote>
    <?php endif ?>
    <p>
      <a href="/<?php print $path_profile; ?>" class="icon-politician">Profil öffnen</a>
    </p>
  </div>
</li>