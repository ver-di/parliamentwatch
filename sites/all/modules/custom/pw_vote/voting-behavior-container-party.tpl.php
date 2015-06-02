<li class="clearfix push-bottom-m">
  <h4 class="push-bottom-xs">
    <a title="<?php print $party; ?>: Alle Positionen anzeigen" href="<?php print $path_search; ?>" onclick="<? echo $onclick; ?>">
      <?php print $party; ?>, <?php print $party_num_members; ?> Mitglieder
    </a>
  </h4>
  <ul class="push-bottom-xs list_voting_behavior">
  	<?php print $list_voting_behavior; ?>
  </ul>
  <ul class="clear list-inline">
    <?php print $list_voting_behavior_sum; ?>
  </ul>
</li>