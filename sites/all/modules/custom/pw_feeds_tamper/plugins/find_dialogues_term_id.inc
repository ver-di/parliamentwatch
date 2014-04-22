<?php
/**
 * @file
 * Do super awesome thing.
 */
$plugin = array(
  'form' => 'find_dialogues_term_id_form',
  // Optional validation callback.
  'validate' => 'find_dialogues_term_id_validate',
  'callback' => 'find_dialogues_term_id',
  'name' => 'Find Dialogues Term ID by Term and Parliament',
  'multi' => 'loop',
  'category' => 'Custom',
);
function find_dialogues_term_id_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do super duper awesome things.');
  return $form;
}
function find_dialogues_term_id_validate(&$settings) {
}
function find_dialogues_term_id($source, $item_key, $element_key, &$field, $settings) {
  $parliament = $source->current_item['xpathparser:18'];

  // load terms
  $parliament_term = taxonomy_get_term_by_name($parliament, 'parliaments');
  if(!empty($parliament_term)){
    $parliament_term_id = key($parliament_term);
 
    // find dialogues term tagged with same parliament
    $dialogues_terms = taxonomy_get_term_by_name($field, 'dialogue_topics');
    $topic_found = false;
    foreach($dialogues_terms as $dialogues_term){
      if($dialogues_term->field_parliament['und'][0]['tid'] == $parliament_term_id){
        $field = $dialogues_term->tid;
        $topic_found = true;
        break;
      }
    }
    
    // create term
    if(!$topic_found){
      $term = new stdClass();
      $term->name = $field;
      $voc_dialogue_topics = taxonomy_vocabulary_machine_name_load('dialogue_topics');
      $term->vid = $voc_dialogue_topics->vid; 
      $term->field_parliament['und'][0]['tid'] = $parliament_term_id; 
      taxonomy_term_save($term);
      $field = $term->tid;
    }
  }
}
