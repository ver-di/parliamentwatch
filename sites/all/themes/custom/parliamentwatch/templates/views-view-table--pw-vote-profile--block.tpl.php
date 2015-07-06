<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
?>
<table <?php if ($classes) { print 'class="pw-voting zebra table-sorted '. $classes . '" '; } ?><?php print $attributes; ?>>
 <?php if (!empty($title) || !empty($caption)) : ?>
   <caption><?php print $caption . $title; ?></caption>
 <?php endif; ?>
 <?php if (!empty($header)) : ?>
  <thead>
    <tr>
      <?php foreach ($header as $field => $label): ?>
        <th <?php if ($header_classes[$field]) { print 'class="'. $header_classes[$field] . '" '; } ?>>
          <?php print $label; ?>
        </th>
      <?php endforeach; ?>
    </tr>
  </thead>
<?php endif; ?>
<tbody>
  <?php foreach ($rows as $row_count => $row): ?>
    <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
      <?php foreach ($row as $field => $content): ?>
        <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . '" '; } ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
          <?php print $content; ?>
        </td>
      <?php endforeach; ?>
    </tr>
    <tr <?php if ($row_classes[$row_count]) { print 'class="js-hide toggle-details-content ' . implode(' ', $row_classes[$row_count]) .'"';  } ?> >
      <td colspan="4">
        <h4 class="push-bottom-s">Gesamtergebnis</h4>
          <!--p>
            <span class="yes vote block">155 dafür gestimmt</span>
            <span class="no vote block">162 dagegen gestimmt</span>
            <span class="abstain vote block">161 enthalten</span>
            <span class="no-show vote block">155 nicht beteiligt</span>
          </p-->
          <div class="pw-voting">
            <ul class="clearfix push-bottom-s">
              <?php
              $block_result = module_invoke('pw_vote', 'block_view', 'final_result_full', array('nid' => $result[$row_count]->field_field_vote_node[0]['raw']['target_id']));
              print render($block_result['content']);
              ?>
            </ul>
          </div>
          <?php if(sizeof($result[$row_count]->field_body) > 0 && strlen($result[$row_count]->field_body[0]['rendered']['#markup']) > 0) : ?>
            <h4>Begründung</h4>
            <blockquote><?php print $result[$row_count]->field_body[0]['rendered']['#markup']; ?></blockquote>
          <?php endif; ?>
        </td>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
