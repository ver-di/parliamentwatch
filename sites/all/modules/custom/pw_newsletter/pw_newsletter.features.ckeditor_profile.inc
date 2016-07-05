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
        'toolbar' => '[
    [\'Source\',\'Cut\',\'Copy\',\'SpellChecker\',\'Undo\',\'Redo\',\'Find\',\'Replace\',\'RemoveFormat\',\'linkit\',\'Media\',\'Link\',\'Unlink\',\'Maximize\'],
    \'/\',
    [\'Styles\',\'Format\',\'Bold\',\'Subscript\',\'Superscript\',\'NumberedList\',\'BulletedList\',\'Blockquote\',\'SpecialChar\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
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
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support für Linkit-Modul',
            'path' => '%base_path%sites/all/modules/contrib/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'icons/linkit.png',
              ),
            ),
          ),
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for embedding files using Media CKEditor',
            'path' => '%base_path%sites/all/modules/contrib/media_ckeditor/js/plugins/media/',
            'buttons' => array(
              'Media' => array(
                'icon' => 'images/icon.gif',
                'label' => 'Add media',
              ),
            ),
            'default' => 'f',
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
