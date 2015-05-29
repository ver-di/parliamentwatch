<li class="item vote <?php print $class_name; ?>">
  <div class="pw-arrow-box-trigger"></div>
  <div class="item-politician pw-arrow-box">
    <span class="icon-close light"></span>
    <h3>
      <?php print $firstname; ?> <?php print $lastname; ?> (<?php print $party; ?>)
    </h3>
    <p>
      <span class="medium">Position von <?php print $firstname; ?> <?php print $lastname; ?>: </span>
      <span class="vote <?php print $class_name; ?> block"><?php print $voting_behavior; ?></span>
    </p>
    <div class="file-image float-left portrait-s">
      <a href="/<?php print $path_profile; ?>"><?php print $portrait; ?></a>
    </div>
    <?php if (strlen($statement) > 0): ?>
      <div class="statement">
        <div class="scrollbars-inner">
          <?php print $statement; ?>
        </div>
      </div>
    <?php endif ?>
    <p class="path-profile">
      <a href="/<?php print $path_profile; ?>" class="icon-politician">Profil öffnen</a>
    </p>
  </div>
</li>