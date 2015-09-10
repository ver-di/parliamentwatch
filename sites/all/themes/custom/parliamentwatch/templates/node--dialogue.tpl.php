<?php
$dialogue_date = date("d.m.Y", $created);
$recipient_name  = ($field_dialogue_recipient[0]['entity']->field_user_title['und'][0]['value'])?$field_dialogue_recipient[0]['entity']->field_user_title['und'][0]['value']." ":"";
$recipient_name .= $field_dialogue_recipient[0]['entity']->field_user_fname['und'][0]['value']." ".$field_dialogue_recipient[0]['entity']->field_user_lname['und'][0]['value'];
?>
<div about="<?php print $attributes_array['about']; ?>">
  <div class="grid-2 alpha">
    <div class="arrow-item"><?php print $dialogue_date;?></div>
  </div>
  <div id="node_dialogue_search_result_group_grid_6" class="field-group-format group_grid_6 field-group-div group-grid-6 grid-6 omega speed-fast effect-none"><div class="label-inline">Frage an</div><div typeof="schema:Person sioc:UserAccount" about="/profile/<?php print $node->field_dialogue_recipient['und'][0]['entity']->name; ?>" class="ds-1col user-profile view-mode-user_dialogue_search_snippet clearfix">
      <strong><?php print $recipient_name; ?></strong> <span>PARTEI</span></div>
    <div id="node_dialogue_search_result_group_sender" class="field-group-format group_sender field-group-div group-sender push-bottom-s speed-fast effect-none"><span class="light"><div class="label-inline">von</div><?php print $field_dialogue_sender_name['und'][0]['value']; ?></span><span class="light"><div class="label-inline">zum Thema</div><span class="">Demokratie und Bürgerrechte</span></span></div><div class="field field-name-search-snippet"></div>
    <?php
      print $body[0]['summary'];
    ?>
    <div class="text-right">
      <span class="read-more"><a href="<?php print $node_url; ?>">Ganze Frage und Antwort lesen</a></span>
    </div>
  </div>
</div>
<hr/>
