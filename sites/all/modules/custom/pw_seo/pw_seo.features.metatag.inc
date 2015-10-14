<?php
/**
 * @file
 * pw_seo.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function pw_seo_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'generator' => array(
        'value' => 'Drupal 7 (http://drupal.org)',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:card' => array(
        'value' => 'summary',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
    ),
  );

  // Exported Metatag config instance: global:403.
  $config['global:403'] = array(
    'instance' => 'global:403',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:404.
  $config['global:404'] = array(
    'instance' => 'global:404',
    'config' => array(
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [site:slogan]',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'itemprop:name' => array(
        'value' => '[current-page:title]',
      ),
      'og:description' => array(
        'value' => '[site:slogan]',
      ),
      'og:title' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
      'twitter:description' => array(
        'value' => '[site:slogan]',
      ),
      'twitter:title' => array(
        'value' => '[site:name]',
      ),
      'twitter:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
      'itemprop:name' => array(
        'value' => '[node:title]',
      ),
      'itemprop:description' => array(
        'value' => '[node:summary]',
      ),
      'og:title' => array(
        'value' => '[node:title]',
      ),
      'og:description' => array(
        'value' => '[node:summary]',
      ),
      'og:updated_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'article:published_time' => array(
        'value' => '[node:created:custom:c]',
      ),
      'article:modified_time' => array(
        'value' => '[node:changed:custom:c]',
      ),
      'twitter:title' => array(
        'value' => '[node:title]',
      ),
      'twitter:description' => array(
        'value' => '[node:summary]',
      ),
    ),
  );

  // Exported Metatag config instance: node:blogpost.
  $config['node:blogpost'] = array(
    'instance' => 'node:blogpost',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'abstract' => array(
        'value' => '[node:summary]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'image_src' => array(
        'value' => '[node:field-teaser-image:file:url]',
      ),
      'itemtype' => array(
        'value' => 'Blog',
      ),
      'itemprop:name' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'itemprop:image' => array(
        'value' => '[node:field-teaser-image:file:url]',
      ),
      'og:type' => array(
        'value' => 'blog',
      ),
      'og:title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'og:image' => array(
        'value' => '[node:field-teaser-image:file:url]',
      ),
      'og:image:type' => array(
        'value' => 'image/gif,image/jpeg,image/png',
      ),
      'og:image:width' => array(
        'value' => '280',
      ),
      'og:image:height' => array(
        'value' => '187',
      ),
      'twitter:title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'twitter:image:src' => array(
        'value' => '[node:field-teaser-image:file:url]',
      ),
      'twitter:image:width' => array(
        'value' => '280',
      ),
      'twitter:image:height' => array(
        'value' => '187',
      ),
    ),
  );

  // Exported Metatag config instance: node:dialogue.
  $config['node:dialogue'] = array(
    'instance' => 'node:dialogue',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | Frage an [node:field-dialogue-recipient:field_user_title] [node:field-dialogue-recipient:field_user_fname] [node:field-dialogue-recipient:field_user_lname] - [node:field_parliament]',
      ),
      'abstract' => array(
        'value' => '[node:summary]',
      ),
      'robots' => array(
        'value' => array(
          'noindex' => 'noindex',
          'nofollow' => 'nofollow',
          'noarchive' => 'noarchive',
          'nosnippet' => 'nosnippet',
          'noodp' => 'noodp',
          'noydir' => 'noydir',
          'noimageindex' => 'noimageindex',
          'notranslate' => 'notranslate',
          'index' => 0,
          'follow' => 0,
        ),
      ),
      'content-language' => array(
        'value' => 'DE',
      ),
      'itemtype' => array(
        'value' => 'Person',
      ),
      'itemprop:name' => array(
        'value' => '[site:name] | Frage an [node:field-dialogue-recipient:field_user_title] [node:field-dialogue-recipient:field_user_fname] [node:field-dialogue-recipient:field_user_lname] - [node:field_parliament]',
      ),
      'og:type' => array(
        'value' => 'politician',
      ),
      'og:title' => array(
        'value' => '[site:name] | Frage an [node:field-dialogue-recipient:field_user_title] [node:field-dialogue-recipient:field_user_fname] [node:field-dialogue-recipient:field_user_lname] - [node:field_parliament]',
      ),
      'og:see_also' => array(
        'value' => 'https://www.abgeordnetenwatch.de/profile/[node:field-dialogue-recipient]',
      ),
      'og:locale' => array(
        'value' => 'de_DE',
      ),
      'twitter:title' => array(
        'value' => '[site:name] | Frage an [node:field-dialogue-recipient:field_user_title] [node:field-dialogue-recipient:field_user_fname] [node:field-dialogue-recipient:field_user_lname] - [node:field_parliament]',
      ),
    ),
  );

  // Exported Metatag config instance: node:press_release.
  $config['node:press_release'] = array(
    'instance' => 'node:press_release',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'abstract' => array(
        'value' => '[node:summary]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'itemtype' => array(
        'value' => 'Article',
      ),
      'itemprop:name' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'og:title' => array(
        'value' => '[site:name] | [node:title]',
      ),
      'twitter:title' => array(
        'value' => '[site:name] | [node:title]',
      ),
    ),
  );

  // Exported Metatag config instance: taxonomy_term.
  $config['taxonomy_term'] = array(
    'instance' => 'taxonomy_term',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | [term:name]',
      ),
      'description' => array(
        'value' => '[term:description]',
      ),
      'itemprop:name' => array(
        'value' => '[term:name]',
      ),
      'itemprop:description' => array(
        'value' => '[term:description]',
      ),
      'og:title' => array(
        'value' => '[term:name]',
      ),
      'og:description' => array(
        'value' => '[term:description]',
      ),
      'twitter:title' => array(
        'value' => '[term:name]',
      ),
      'twitter:description' => array(
        'value' => '[term:description]',
      ),
    ),
  );

  // Exported Metatag config instance: user.
  $config['user'] = array(
    'instance' => 'user',
    'config' => array(
      'title' => array(
        'value' => '[site:name] | Profil von [user:field-user-title] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'robots' => array(
        'value' => array(
          'index' => 'index',
          'follow' => 'follow',
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'image_src' => array(
        'value' => '[site:url]sites/abgeordnetenwatch.de/files/styles/pw_portrait_l__normal/public/users/[user:field-user-picture:file]',
      ),
      'itemtype' => array(
        'value' => 'Person',
      ),
      'itemprop:name' => array(
        'value' => '[site:name] | Profil von [user:field-user-title] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'og:type' => array(
        'value' => 'politician',
      ),
      'og:title' => array(
        'value' => '[site:name] | Profil von [user:field-user-title] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'og:description' => array(
        'value' => '[site:name] | Profil von [user:field-user-title] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'og:image' => array(
        'value' => '[site:url]sites/abgeordnetenwatch.de/files/styles/pw_portrait_l__normal/public/users/[user:field-user-picture:file]',
      ),
      'profile:username' => array(
        'value' => '[user:name]',
      ),
      'twitter:title' => array(
        'value' => '[site:name] | Profil von [user:field-user-title] [user:field-user-fname] [user:field_user_lname], [user:field-user-party] - [user:field-user-parliament]',
      ),
      'twitter:image:src' => array(
        'value' => '[site:url]sites/abgeordnetenwatch.de/files/styles/pw_portrait_l__normal/public/users/[user:field-user-picture:file]',
      ),
    ),
  );

  return $config;
}
