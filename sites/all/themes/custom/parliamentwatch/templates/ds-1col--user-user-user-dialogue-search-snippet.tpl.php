<?
#var_dump($field_user_fname);
echo "&nbsp;<strong>";
echo ($field_user_title[0]["value"])?$field_user_title[0]["value"]."&nbsp;":"";
echo $field_user_fname[0]["value"]."&nbsp;".$field_user_lname[0]["value"].",</strong>&nbsp;";
echo taxonomy_term_load($field_user_party[0]["tid"])->name;
?>