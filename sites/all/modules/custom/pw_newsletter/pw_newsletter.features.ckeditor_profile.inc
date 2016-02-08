<?php
/**
 * @file
 * pw_newsletter.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function pw_newsletter_ckeditor_profile_defaults() {
  $data = array(
    'Newsletter' => array(
      'name' => 'Newsletter',
      'settings' => array(
        'ss' => '2',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'toolbar' => '[
    [\'Source\',\'Cut\',\'Copy\',\'SpellChecker\',\'Undo\',\'Redo\',\'Find\',\'Replace\',\'RemoveFormat\',\'linkit\',\'Link\',\'Unlink\',\'Maximize\'],
    \'/\',
    [\'Format\',\'Bold\',\'Subscript\',\'Superscript\',\'NumberedList\',\'BulletedList\',\'Blockquote\',\'SpecialChar\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;h2;h3;h4',
        'custom_formatting' => 't',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakBeforeClose' => 'breakBeforeClose',
            'breakAfterClose' => 'breakAfterClose',
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%t/css/newsletter.css',
        'css_style' => 'self',
        'styles_path' => '%t/js/ckeditor.newsletter.js',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => '0',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Erweiterungsmodul für automatische Größenanpassung',
            'path' => '%editor_path%plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support für Linkit-Modul',
            'path' => '%base_path%sites/all/modules/contrib/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'linkit.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'newsletter' => 'Newsletter',
      ),
    ),
  );
  return $data;
}
