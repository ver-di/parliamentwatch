<?php
/**
 * @file
 * Do super awesome thing.
 */
$plugin = array(
  'form' => 'term_id_by_term_and_parliament_form',
  // Optional validation callback.
  'validate' => 'term_id_by_term_and_parliament_validate',
  'callback' => 'term_id_by_term_and_parliament',
  'name' => 'Term ID by Term and Parliament',
  'multi' => 'loop',
  'category' => 'Custom',
);
function term_id_by_term_and_parliament_form($importer, $element_key, $settings) {
  $form = array();
  $form['help']['#value'] = t('My plugin can do awesome things.');
  return $form;
}
function term_id_by_term_and_parliament_validate(&$settings) {
}
function term_id_by_term_and_parliament($source, $item_key, $element_key, &$field, $settings) {
  $parliament = $source->current_item['xpathparser:25'];

  // load terms
  $parliament_term = taxonomy_get_term_by_name($parliament, 'parliaments');
  if(!empty($parliament_term)){
    $parliament_term_id = key($parliament_term);
 
    // find constituency term tagged with same parliament like imported userx
    $constituency_terms = taxonomy_get_term_by_name($field, 'constituency');
    foreach($constituency_terms as $constituency_term){
      if($constituency_term->field_parliament['und'][0]['tid'] == $parliament_term_id){
        $field = $constituency_term->tid;
        break;
      }
    }
  }
}
