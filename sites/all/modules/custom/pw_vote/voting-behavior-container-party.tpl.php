<li class="clearfix push-bottom-m">
  <div class="grid-2 alpha">
    <h4>
      <a title="<?php print $party; ?>: Alle Positionen anzeigen" href="<?php print $path_search; ?>?<?php print $party; ?>">
        <?php print $party; ?><br />
        <?php print $party_num_members; ?> Mitglieder
      </a>
    </h4>
  </div>
  <div class="grid-6 omega">
    <ul class="push-bottom-xs">
    	<?php print $list_voting_behavior; ?>
    </ul>
    <ul class="clear">
      <?php print $list_voting_behavior_sum; ?>
    </ul>
  </div>
</li>