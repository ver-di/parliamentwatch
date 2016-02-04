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
<?php
$cols_visible = 0;
?>
<table <?php if ($classes) { print 'class="pw-sidejobs zebra table-sorted '. $classes . '" '; } ?><?php print $attributes; ?>>
 <?php if (!empty($title) || !empty($caption)) : ?>
   <caption><?php print $caption . $title; ?></caption>
 <?php endif; ?>
 <?php if (!empty($header)) : ?>
  <thead>
    <tr>
      <?php foreach ($header as $field => $label): ?>
        <?php if(strpos($field_classes[$field][0], 'row-details') === FALSE): ?>
          <th <?php if ($header_classes[$field]) { print 'class="'. $header_classes[$field] . '" '; } ?>>
            <?php print $label; ?>
            <?php $cols_visible++; ?>
          </th>
        <?php endif; ?>
      <?php endforeach; ?>
    </tr>
  </thead>
<?php endif; ?>
<tbody>
  <?php foreach ($rows as $row_count => $row): ?>
    <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
      <?php foreach ($row as $field => $content): ?>
        <?php if(strpos($field_classes[$field][0], 'row-details') === FALSE): ?>
          <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . '" '; } ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
            <?php
            if($field == 'field_sidejob_income_min_total' && preg_replace('/\D/', '', $content) == 0){
              print 'ehrenamtlich';
            }
            else{
              print $content;
            }
            ?>
          </td>
        <?php endif; ?>
      <?php endforeach; ?>
    </tr>
    <tr <?php if ($row_classes[$row_count]) { print 'class="js-hide toggle-details-content ' . implode(' ', $row_classes[$row_count]) .'"';  } ?> >
      <td colspan="<?php print $cols_visible; ?>">
        <h4>Branche</h4>
        <p>
          <?php print $row['field_sectors']; ?>
        </p>
        <h4>Ort</h4>
        <p>
          <?php print $row['field_sidejob_address']; ?>
        </p>
        <h4>Nebentätigkeit</h4>
        <p>
          <?php print $row['field_job']; ?>
        </p>
        <?php if(!empty($row['field_sidejob_income_min'])): ?>
          <h4>Nebenverdienst</h4>
          <p>
            mindestens <?php print $row['field_sidejob_income_min']; ?>
            <?php if(!empty($row['field_sidejob_income_max'])): ?>
              bis maximal <?php print $row['field_sidejob_income_max']; ?>
            <?php endif; ?>
            <?php if($row['field_sidejob_income_min'] != $row['field_sidejob_income_min_total']): ?>
              <?php print $row['field_sidejob_income_interval']; ?>, woraus ein aufsummierter Verdienst neben dem Mandat von
              mindestens <?php print $row['field_sidejob_income_min_total']; ?>
              <?php if(!empty($row['field_sidejob_income_max_total'])): ?>
                bis maximal <?php print $row['field_sidejob_income_max_total']; ?>
              <?php endif; ?>
              resultiert
            <?php endif; ?>
          </p>
        <?php endif; ?>
        <?php if(!empty($row['field_sidejob_date_start'])): ?>
          <h4>Datum</h4>
          <p>
            <?php print $row['field_sidejob_date_start']; ?>
          </p>
        <?php endif; ?>
        <?php if(!empty($row['field_sidejob_date_end'])): ?>
          <h4>Niedergelegt</h4>
          <p>
            <?php print $row['field_sidejob_date_end']; ?>
          </p>
        <?php endif; ?>
      </td>
    </tr>
  <?php endforeach; ?>
</tbody>
</table>
