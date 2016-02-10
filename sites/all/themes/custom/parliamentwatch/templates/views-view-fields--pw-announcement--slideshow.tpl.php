<?php $img= $fields['uri']->content; ?>
<div class="wrapper" style="background-image: url(<?php print $img; ?>);"><?php
$fields['uri']->content = "";
?>
<div class="wrapper-inner">
<?php foreach ($fields as $id => $field): ?>
        <?php if (!empty($field->separator)): ?>
            <?php print $field->separator; ?>
        <?php endif; ?>
        <?php print $field->wrapper_prefix; ?>
            <?php print $field->label_html; ?>
            <?php print $field->content; ?>        

        <?php print $field->wrapper_suffix; ?>
<?php endforeach; ?>
</div>
</div>