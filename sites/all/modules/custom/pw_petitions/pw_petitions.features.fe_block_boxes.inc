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
<ol>
	<li class="center float-left" style="width: 31%; padding: 0 35px; box-sizing: border-box;">
<span class="aw-brand">1. <i class="icon-signing aw-icon-4x"></i></span><br>
		Petition erreicht die Mindestunterschriftzahl
	</li>
	<li class="center float-left" style="width: 38%; padding: 0 35px; box-sizing: border-box;">
<span class="aw-brand">2. <i class="icon-microphone aw-brand aw-icon-4x"></i></span><br>
		Mehrheit für die Petition in der Meinungsumfrage
	</li>
	<li class="center float-left" style="width: 31%; padding: 0 35px; box-sizing: border-box;">
<span class="aw-brand">3. <i class="icon-politician aw-brand aw-icon-4x"></i></span><br>
		Abfrage der Petition im Parlament
	</li>
</ol>
</div>';

  $export['petitions_description'] = $fe_block_boxes;

  return $export;
}
