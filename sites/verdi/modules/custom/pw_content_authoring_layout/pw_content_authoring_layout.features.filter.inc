<?php
/**
 * @file
 * pw_content_authoring_layout.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pw_content_authoring_layout_filter_default_formats() {
  $formats = array();

  // Exported format: Copyright.
  $formats['copyright'] = array(
    'format' => 'copyright',
    'name' => 'Copyright',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  // Exported format: Basic.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Basic',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<p><br><a><em> <strong><ul> <ol> <li> <dl> <dt> <dd><span><!-- --><crypt>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'pathologic' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'path',
            'local_paths' => 'https://live.de.parliamentwatch.org/
https://beta.abgeordnetenwatch.de/
http://live.de.parliamentwatch.org/
http://beta.abgeordnetenwatch.de/
/',
          ),
        ),
      ),
      'filter_autop' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(),
      ),
      'pw_crypt' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '0',
    'status' => '1',
    'weight' => '-8',
    'filters' => array(
      'php_code' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'twitter_hashtag' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'twitter_links' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'twitter_username' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '50',
        'status' => '1',
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => 'https://live.de.parliamentwatch.org/
https://beta.abgeordnetenwatch.de/
http://live.de.parliamentwatch.org/
http://beta.abgeordnetenwatch.de/
/',
          'protocol_style' => 'full',
        ),
      ),
    ),
  );

  // Exported format: Managed Content.
  $formats['managed_content'] = array(
    'format' => 'managed_content',
    'name' => 'Managed Content',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'media_filter' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-44',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '50',
        'status' => '1',
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => 'https://live.de.parliamentwatch.org/
https://beta.abgeordnetenwatch.de/
http://live.de.parliamentwatch.org/
http://beta.abgeordnetenwatch.de/
/',
          'protocol_style' => 'path',
        ),
      ),
    ),
  );

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => '0',
    'status' => '1',
    'weight' => '-6',
    'filters' => array(
      'php_code' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '-7',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a><em> <strong> <cite> <blockquote> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '50',
        'status' => '1',
        'settings' => array(
          'settings_source' => 'global',
          'local_paths' => '',
          'protocol_style' => 'path',
        ),
      ),
    ),
  );

  return $formats;
}
