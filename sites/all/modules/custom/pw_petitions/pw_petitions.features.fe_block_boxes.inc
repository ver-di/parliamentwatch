<?php
/**
 * @file
 * pw_petitions.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_petitions_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Petitions description';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'petitions_description';
  $fe_block_boxes->body = '<p>
	Hier stellen wir Ihnen ausgewählte Petitionen unseres Kooperationspartners change.org vor. Sobald eine Petition die notwendige Anzahl an Unterschriften erreicht (Schritt 1), werden wir durch eine repräsentative Meinungsumfrage ermitteln, ob das Anliegen eine Mehrheit in der Bevölkerung genießt (Schritt 2). Sollte dies der Fall sein, werden wir sämtliche Abgeordnete des jeweiligen Parlaments dazu Stellung nehmen lassen (Schritt 3). Die Positionierung der Abgeordneten wird im jeweiligen Abgeordnetenprofil archiviert und könnte damit zum Wieder- oder Abwahlkritierium werden.
</p>
<div class="desktop-only">
<h3>
	So erreicht eine Petition das Parlament
</h3>
<ol id="petition-block-description">
	<li class="center float-left">
<span class="aw-brand"><span>1. </span><i class="icon-signing aw-icon-4x"></i></span><br>
		Petition erreicht die<br>Mindestunterschriftenzahl
	</li>
	<li class="center float-left">
<span class="aw-brand"><span>2. </span><i class="icon-microphone aw-brand aw-icon-4x"></i></span><br>
		Mehrheit für die Petition in der<br>Meinungsumfrage
	</li>
	<li class="center float-left">
<span class="aw-brand"><span>3. </span><i class="icon-politician aw-brand aw-icon-4x"></i></span><br>
		Abfrage der Petition im<br>Parlament
	</li>
</ol>
</div>';

  $export['petitions_description'] = $fe_block_boxes;

  return $export;
}
