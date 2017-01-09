<?php
/**
 * @file
 * pw_dialogues.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_dialogues_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_dialogue|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_dialogue';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'dialogues_answered' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h2',
          'fi-cl' => 'p large',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'field_delimiter' => '',
      ),
    ),
    'field_dialogue_comment_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_dialogue_documents' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Anhang',
          'lb-el' => 'h2',
          'lb-cl' => 'h4',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'attachments',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => 'list-group',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => 'list-group-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['comment|comment_node_dialogue|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_dialogue|teaser';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_dialogue';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'field_dialogue_comment_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_dialogue_sender_fullname' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['comment|comment_node_dialogue|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dialogue|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dialogue';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'dialogue_social_buttons' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'dialogues_arrow_navigation' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'dialogues_asked' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'comments' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h1',
          'fi-cl' => 'blockquote',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_dialogue_recipient' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_dialogue_sender_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|dialogue|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dialogue|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dialogue';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'button_dialogue' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'dialogues_asked' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'text-serif',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_dialogue_sender_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'text-magenta',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|dialogue|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|dialogue|teaser_landing';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'dialogue';
  $ds_fieldsetting->view_mode = 'teaser_landing';
  $ds_fieldsetting->settings = array(
    'dialogues_asked' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
        'field_delimiter' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Ganze Frage lesen',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'read-more',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
        'field_delimiter' => '',
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => 'question',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_dialogue_recipient' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_dialogue_sender_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'text-magenta',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|dialogue|teaser_landing'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_dialogues_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'button_dialogue';
  $ds_field->label = 'Button Dialogue';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a href="[node:url]" class="btn btn-primary">Details anzeigen</a>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['button_dialogue'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dialogue_filter';
  $ds_field->label = 'Dialogue Filter';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $parliament = _pw_get_current_parliament_term();
  $account = _pw_get_current_user();
  $dialogue_nids = pw_dialogues_get_dialogue_nids($parliament, $account);
  if(empty($dialogue_nids)){
    return;
  }
?>

<form action="#" class="masonry-filter">
    <div class="row">
        <div class="col-xs-12 col-sm-5">
            <div class="form-group">
                <label for="question_search_input" class="sr-only">Suche</label>
                <div class="input-group">
                    <div class="input-group-addon"><i class="fa fa-search"></i></div>
                    <input type="text" class="form-control input-lg quicksearch" id="question_search_input" placeholder="Suchbegriff eingeben">
                </div>
            </div>
        </div>
        <div class="col-xs-12 col-sm-7">
            <!--div class="checkbox">
                <label data-filter=".answered">
                    <input type="checkbox"> Nur beantwortete Anzeigen
                </label>
            </div-->
        </div>
    </div>
</form>',
      'format' => 'php_code',
    ),
    'use_token' => 0,
  );
  $export['dialogue_filter'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dialogue_social_buttons';
  $ds_field->label = 'Dialogue Social-Buttons';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p class="small">Frage &amp; Antwort mit Freunden teilen:</p>
<div class="social-bar">
    <ul>
        <li><a href="http://www.facebook.com/sharer.php?u=[node:url]" class="social-bar-facebook" target="_blank"><i class="fa fa-facebook"></i></a></li>
        <li><a href="http://twitter.com/home?status=[node:url]" class="social-bar-twitter" target="_blank"><i class="fa fa-twitter"></i></a></li>
        <li><a href="https://plus.google.com/share?url=[node:url]" class="social-bar-google" target="_blank"><i class="fa fa-google-plus"></i></a></li>
        <li class="visible-xs"><a href="whatsapp://send" data-text="Frage an " data-href="[node:url]" class="social-bar-whatsapp" target="_blank"><i class="fa fa-whatsapp"></i></a></li>
        <li><a href="mailto:?&subject=KandidatenCheck&body=Meine%20Frage%20an%20,%20findest%20du%20auf%20[node:url]" class="social-bar-mail"><i class="fa fa-envelope" target="_blank"></i></a></li>
    </ul>
</div>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['dialogue_social_buttons'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dialogues_answered';
  $ds_field->label = 'Dialogues Answered';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'comment' => 'comment',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<span class="text-magenta">[comment:author:field-user-fname] [comment:author:field-user-lname]</span> antworte',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['dialogues_answered'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dialogues_arrow_navigation';
  $ds_field->label = 'Dialogues Arrow Navigation';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a class="question-intro-control question-intro-prev hidden-xs"><i class="fa fa-angle-left"></i></a>
<a class="question-intro-control question-intro-next hidden-xs"><i class="fa fa-angle-right"></i></a>',
      'format' => 'php_code',
    ),
    'use_token' => 0,
  );
  $export['dialogues_arrow_navigation'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dialogues_asked';
  $ds_field->label = 'Dialogues Asked (date)';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => ' fragte am [node:created:short]',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['dialogues_asked'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'pw_dialogue_questions_block';
  $ds_field->label = 'PW Dialogue Questions Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|pw_dialogue_questions-block',
    'block_render' => '3',
  );
  $export['pw_dialogue_questions_block'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function pw_dialogues_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_dialogue|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_dialogue';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'dialogues_answered',
        1 => 'field_dialogue_comment_body',
        2 => 'field_dialogue_documents',
      ),
    ),
    'fields' => array(
      'dialogues_answered' => 'ds_content',
      'field_dialogue_comment_body' => 'ds_content',
      'field_dialogue_documents' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_dialogue|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_dialogue|teaser';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_dialogue';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_dialogue_sender_fullname',
        1 => 'post_date',
        2 => 'field_dialogue_comment_body',
      ),
    ),
    'fields' => array(
      'field_dialogue_sender_fullname' => 'ds_content',
      'post_date' => 'ds_content',
      'field_dialogue_comment_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_dialogue|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dialogue|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dialogue';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_dialogue_recipient',
        1 => 'comments',
        2 => 'group_question_intro',
        3 => 'group_question_answer',
        4 => 'group_question_intro_submitted',
        5 => 'dialogue_social_buttons',
        6 => 'group_question_footer',
        7 => 'body',
        8 => 'dialogues_arrow_navigation',
        9 => 'field_dialogue_sender_name',
        10 => 'dialogues_asked',
      ),
    ),
    'fields' => array(
      'field_dialogue_recipient' => 'ds_content',
      'comments' => 'ds_content',
      'group_question_intro' => 'ds_content',
      'group_question_answer' => 'ds_content',
      'group_question_intro_submitted' => 'ds_content',
      'dialogue_social_buttons' => 'ds_content',
      'group_question_footer' => 'ds_content',
      'body' => 'ds_content',
      'dialogues_arrow_navigation' => 'ds_content',
      'field_dialogue_sender_name' => 'ds_content',
      'dialogues_asked' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|dialogue|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dialogue|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dialogue';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_dialouge_question_info',
        1 => 'body',
        3 => 'field_dialogue_sender_name',
        4 => 'dialogues_asked',
      ),
      'ds_hidden' => array(
        2 => 'button_dialogue',
      ),
    ),
    'fields' => array(
      'group_dialouge_question_info' => 'ds_content',
      'body' => 'ds_content',
      'button_dialogue' => 'ds_hidden',
      'field_dialogue_sender_name' => 'ds_content',
      'dialogues_asked' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|dialogue|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|dialogue|teaser_landing';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'dialogue';
  $ds_layout->view_mode = 'teaser_landing';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_dialogue_recipient',
        1 => 'field_dialogue_sender_name',
        2 => 'group_dialouge_question',
        3 => 'group_dialouge_question_info',
        4 => 'dialogues_asked',
        5 => 'body',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_dialogue_recipient' => 'ds_content',
      'field_dialogue_sender_name' => 'ds_content',
      'group_dialouge_question' => 'ds_content',
      'group_dialouge_question_info' => 'ds_content',
      'dialogues_asked' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|dialogue|teaser_landing'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pw_dialogues_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser';
  $ds_view_mode->label = 'Teaser';
  $ds_view_mode->entities = array(
    'comment' => 'comment',
  );
  $export['teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_landing';
  $ds_view_mode->label = 'Teaser Landing';
  $ds_view_mode->entities = array(
    'comment' => 'comment',
    'node' => 'node',
  );
  $export['teaser_landing'] = $ds_view_mode;

  return $export;
}
