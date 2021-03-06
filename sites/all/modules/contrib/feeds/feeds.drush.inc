<?php

/**
 * @file
 * Drush commands for Feeds module.
 */

/**
 * Implements hook_drush_command().
 */
function feeds_drush_command() {
  $items = array();

  $items['feeds-list-importers'] = array(
    'description' => 'Get a list of all Feeds importers in the system.',
    'aliases' => array('feeds'),
  );

  $items['feeds-list-feeds'] = array(
    'description' => 'List all feed sources.',
    'arguments' => array(
      'importer' => 'The name of the Feeds importer whose instances will be listed. Optional.',
    ),
    'examples' => array(
      'drush feeds-list-feeds' => 'List all instances of all feeds.',
      'drush feeds-list-feeds rss_feed' => 'List all feed sources of the rss_feed importer.',
      'drush feeds-list-feeds --limit=3' => 'Only list the first three feed sources.',
    ),
    'options' => array(
      'limit' => 'Limit the number of feeds to show in the list. Optional.',
    ),
    'aliases' => array('feeds-lf'),
  );

  $items['feeds-import'] = array(
    'description' => 'Imports a feed.',
    'arguments' => array(
      'importer' => 'The name of the Feeds importer that will be refreshed. Mandatory.',
    ),
    'options' => array(
      'nid' => 'The nid of the Feeds importer that will be imported. Optional.',
      'file' => 'The file to import. Optional.',
      'url' => 'The URL to import. Optional.',
      'stdin' => 'Read the file to import from stdin. Optional.',
    ),
    'examples' => array(
      'drush feeds-import my_importer' => "Import items with the importer 'my_importer'.",
      'drush feeds-import my_importer --nid=2' => "Import item with the importer 'my_importer' for feed node 2.",
    ),
  );

  $items['feeds-import-all'] = array(
    'description' => 'Import all instances of feeds of the given type.',
    'arguments' => array(
      'importer' => 'The name of the Feeds importer that will be refreshed. Omitting the importer will cause all instances of all feeds to be imported.',
    ),
    'examples' => array(
      'drush feeds-import-all' => 'Import all instances of all feeds.',
      'drush feeds-import-all my_importer' => "Import all instances of the importer 'my_importer'.",
      'drush feeds-import-all my_importer --limit 10' => "Import 10 instances the feed \'my_importer'.",
    ),
    'options' => array(
      'limit' => 'Limit the number of feeds to import. Optional.',
    ),
  );

  $items['feeds-clear'] = array(
    'description' => 'Delete all items from a feed.',
    'arguments' => array(
      'importer' => 'The name of the Feeds importer that will be cleared. Mandatory.',
    ),
    'options' => array(
      'nid' => 'The ID of the Feed node that will be cleared. Required if the importer is attached to a content type.',
    ),
    'examples' => array(
      'drush feeds-clear my_importer' => "Deletes all items imported with the importer 'my_importer'. The importer must use the standalone import form.",
      'drush feeds-clear my_importer --nid=2' => "Deletes all items imported with the importer 'my_importer' for the feed node with ID 2. The importer must be attached to a content type.",
    ),
  );

  $items['feeds-enable'] = array(
    'description' => 'Enables one or more Feeds importers.',
    'arguments' => array(
      'importers' => 'A space delimited list of Feeds importers. Mandatory.',
    ),
    'examples' => array(
      'drush feeds-enable importer_1 importer_2' => "Enable Feeds importers 'importer_1' and 'importer_2'.",
    ),
    'aliases' => array('feeds-en'),
  );

  $items['feeds-disable'] = array(
    'description' => 'Disable one or more Feeds importers.',
    'arguments' => array(
      'importers' => 'A space delimited list of Feeds importers. Mandatory.',
    ),
    'examples' => array(
      'drush feeds-disable importer_1 importer_2' => "Disable Feeds importers 'importer_1' and 'importer_2'.",
    ),
    'aliases' => array('feeds-dis'),
  );

  $items['feeds-delete'] = array(
    'description' => 'Deletes one or more Feeds importers.',
    'arguments' => array(
      'importers' => 'A space delimited list of Feeds importers. Mandatory.',
    ),
    'examples' => array(
      'drush feeds-delete importer_1 importer_2' => "Delete Feeds importers 'importer_1' and 'importer_2'.",
    ),
  );

  $items['feeds-revert'] = array(
    'description' => 'Reverts one or more Feeds importers.',
    'arguments' => array(
      'importers' => 'A space delimited list of Feeds importers. Mandatory.',
    ),
    'examples' => array(
      'drush feeds-revert importer_1 importer_2' => "Revert Feeds importers 'importer_1' and 'importer_2'.",
    ),
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function feeds_drush_help($section) {
  switch ($section) {
    case 'drush:feeds-list-importers':
      return dt('Show a list of available Feeds importers with information about them.');
    case 'drush:feeds-list-feeds':
      return dt("List all feed sources. You can limit the number of feed sources to display by setting the option '--limit'.");
    case 'drush:feeds-import':
      return dt("Import items from a feed. Follow the command with the importer name to import items with. If the importer is attached to a content type, specify also the feed node with the option '--nid'.");
    case 'drush:feeds-import-all':
      return dt('Import items from all feeds. Optionally specify the importer name to import all feeds for.');
    case 'drush:feeds-clear':
      return dt("Delete all items from a feed. Follow the command with the importer name to delete items from. If the importer is attached to a content type, specify also the feed node with the option '--nid'.");
    case 'drush:feeds-enable':
      return dt('Enable the specified Feeds importers. Follow the command with a space delimited list of importer names.');
    case 'drush:feeds-disable':
      return dt('Disable the specified Feeds importers. Follow the command with a space delimited list of importer names.');
    case 'drush:feeds-delete':
      return dt('Delete the specified Feeds importers. Follow the command with a space delimited list of importer names.');
    case 'drush:feeds-revert':
      return dt('Revert the specified Feeds importers. Follow the command with a space delimited list of importer names.');
  }
}

/**
 * Prints a list of all Feeds importers.
 */
function drush_feeds_list_importers() {
  if (!$importers = feeds_importer_load_all(TRUE)) {
    drush_print(dt('No importers available.'));
    return;
  }

  $rows = array();

  $rows[] = array(
    dt('Name'),
    dt('Description'),
    dt('Attached to'),
    dt('Status'),
    dt('State'),
  );

  foreach ($importers as $importer) {
    if ($importer->export_type == EXPORT_IN_CODE) {
      $state = dt('Default');
    }
    elseif ($importer->export_type == EXPORT_IN_DATABASE) {
      $state = dt('Normal');
    }
    elseif ($importer->export_type == (EXPORT_IN_CODE | EXPORT_IN_DATABASE)) {
      $state = dt('Overridden');
    }

    $rows[] = array(
      $importer->config['name'] . ' (' . $importer->id . ')',
      $importer->config['description'],
      $importer->config['content_type'] ? dt(node_type_get_name($importer->config['content_type'])) : dt('none'),
      $importer->disabled ? dt('Disabled') : dt('Enabled'),
      $state,
    );
  }

  drush_print_table($rows, TRUE);
}

/**
 * Lists all feeds.
 *
 * @param string $importer_id
 *   (optional) The importer id.
 */
function drush_feeds_list_feeds($importer_id = NULL) {
  if (!$limit = drush_get_option('limit')) {
    $limit = 2147483647;
  }

  $rows = array();

  $rows[] = array(
    dt('Importer ID'),
    dt('Feed NID'),
    dt('Last imported'),
    dt('Feed source'),
    dt('Process in background'),
  );

  foreach (_drush_feeds_get_all($importer_id, $limit) as $feed) {
    $feed_config = feeds_source($feed->id, $feed->feed_nid)->importer->getConfig();

    $rows[] = array(
      $feed->id,
      $feed->feed_nid,
      $feed->imported ? date('Y-m-d H:i:s', $feed->imported) : dt('Never'),
      is_scalar($feed->source) ? $feed->source : gettype($feed->source),
      !empty($feed_config['process_in_background']) ? dt('Yes') : dt('No'),
    );
  }

  drush_print_table($rows, TRUE);
}

/**
 * Imports a given importer/source.
 *
 * @param string $importer_id
 *   (optional) The importer id to filter on.
 */
function drush_feeds_import($importer_id = NULL) {
  if (!strlen($importer_id)) {
    drush_set_error(dt("Please specify the importer to import items with. If the importer is attached to a content type, specify also the feed node with the option '--nid'."));
    return FALSE;
  }

  if (!$feed_nid = drush_get_option('nid')) {
    $feed_nid = 0;
  }

  try {
    $source = feeds_source($importer_id, $feed_nid)->existing();
  }
  catch (FeedsNotExistingException $e) {
    $importer = feeds_importer_load($importer_id);
    if (!$importer) {
      drush_set_error(dt("The importer '@importer' does not exist.", array(
        '@importer' => $importer_id,
      )));
      return FALSE;
    }

    if ($feed_nid == 0) {
      // Check if the importer is a standalone importer.
      if ($importer->config['content_type']) {
        drush_set_error(dt("The importer '@importer' is attached to a content type. Please specify the feed node to import items for with the option '--nid'. To show a list of available feed nodes for this importer, use 'drush feeds-list-feeds @importer'.", array(
          '@importer' => $importer_id,
        )));
        return FALSE;
      }
    }
    elseif (!$importer->config['content_type']) {
      $message = dt("The importer '@importer' is not attached to a content type. Do you want to import items for this importer?", array(
        '@importer' => $importer_id,
      ));

      if (!drush_confirm($message)) {
        return drush_log(dt('Aborting.'), 'ok');
      }
      else {
        drush_set_option('nid', 0);
        // Avoid asking for confirmation twice.
        drush_set_option('feeds_import_skip_confirm', 1);
        return drush_feeds_import($importer_id);
      }
    }

    drush_set_error(dt("There is no feed node with ID @nid for importer '@importer'. To show a list of available feed nodes for this importer, use 'drush feeds-list-feeds @importer'.", array(
      '@importer' => $importer_id,
      '@nid' => $feed_nid,
    )));
    return FALSE;
  }

  // Propose confirmation message.
  $messages = array();
  $vars = array(
    '@importer' => $importer_id,
    '@feed_nid' => $feed_nid,
  );
  if ($feed_nid) {
    $messages[] = dt("Items will be imported with the importer '@importer' for the feed node @feed_nid.", $vars);
  }
  else {
    $messages[] = dt("Items will be imported with the importer '@importer'.", $vars);
  }

  $result = NULL;
  if ($filename = drush_get_option('file')) {
    if (!is_file($filename)) {
      drush_set_error(dt("The file '@file' does not exist.", array('@file' => $filename)));
      return FALSE;
    }
    $result = new FeedsFileFetcherResult($filename);

    $messages[] = dt("The items will be imported from the file '@file'.", array(
      '@file' => $filename,
    ));
  }
  elseif ($url = drush_get_option('url')) {
    $result = new FeedsHTTPFetcherResult($url);

    $messages[] = dt("The items will be imported from the url '@url'.", array(
      '@url' => $url,
    ));
  }
  elseif (drush_get_option('stdin')) {
    $result = new FeedsFetcherResult(file_get_contents('php://stdin'));

    $messages[] = dt('The items will be imported from stdin.');
  }

  // Only ask for confirmation if it wasn't already asked before. See above.
  if (!drush_get_option('feeds_import_skip_confirm')) {
    $messages[] = dt('Do you really want to continue?');
    $message = implode(' ', $messages);
    if (!drush_confirm($message)) {
      return drush_log(dt('Aborting.'), 'ok');
    }
  }

  // Start the import!
  if ($result) {
    try {
      $source->pushImport($result);
    }
    catch (Exception $e) {
      drush_set_error($e->getMessage());
      return FALSE;
    }
  }
  else {
    _drush_feeds_create_import_batch($importer_id, $feed_nid);
    drush_backend_batch_process();
    return;
  }
}

/**
 * Imports all feeds.
 *
 * @param string $importer_id
 *   (optional) The importer id to filter on.
 */
function drush_feeds_import_all($importer_id = NULL) {
  if (!$limit = drush_get_option('limit')) {
    $limit = 2147483647;
  }

  foreach (_drush_feeds_get_all($importer_id, $limit) as $feed) {
    if (!isset($feed->source) || !strlen($feed->source)) {
      continue;
    }

    try {
      $source = feeds_source($feed->id, $feed->feed_nid)->existing();
    }
    catch (FeedsNotExistingException $e) {
      continue;
    }

    _drush_feeds_create_import_batch($feed->id, $feed->feed_nid);
  }

  drush_backend_batch_process();
}

/**
 * Creates a batch job for an import.
 *
 * @param string $importer_id
 *   The importer id.
 * @param int $feed_nid
 *   The feed node id.
 */
function _drush_feeds_create_import_batch($importer_id, $feed_nid) {
  $feed_node = FALSE;
  if ($feed_nid) {
    if (!$feed_node = node_load($feed_nid)) {
      drush_set_error(dt('The feed node @importer: @nid does not exist.', array('@importer' => $importer_id, '@nid' => $feed_nid)));
      return FALSE;
    }
  }

  $title = $feed_node ? $feed_node->title . ' (' . $importer_id . ')' : $importer_id;

  drush_log(dt('Importing: @title', array('@title' => $title)), 'ok');

  $batch = array(
    'title' => '',
    'operations' => array(
      array('feeds_batch', array('import', $importer_id, $feed_nid)),
    ),
    'progress_message' => '',
  );

  batch_set($batch);
}

/**
 * Clears a Feeds importer.
 *
 * @param string $importer_id
 *   The importer id to clean.
 */
function drush_feeds_clear($importer_id = NULL) {
  if (!strlen($importer_id)) {
    drush_set_error(dt("Please specify the importer to delete all imported items from. If the importer is attached to a content type, specify also the feed node with the option '--nid'."));
    return FALSE;
  }

  if (!$feed_nid = drush_get_option('nid')) {
    $feed_nid = 0;
  }

  try {
    feeds_source($importer_id, $feed_nid)->existing();
  }
  catch (FeedsNotExistingException $e) {
    $importer = feeds_importer_load($importer_id);
    if (!$importer) {
      drush_set_error(dt("The importer '@importer' does not exist.", array(
        '@importer' => $importer_id,
      )));
      return FALSE;
    }

    if ($feed_nid == 0) {
      // Check if the importer is a standalone importer.
      if ($importer->config['content_type']) {
        drush_set_error(dt("The importer '@importer' is attached to a content type. Please specify the feed node to delete items from with the option '--nid'. To show a list of available feed nodes for this importer, use 'drush feeds-list-feeds @importer'.", array(
          '@importer' => $importer_id,
        )));
        return FALSE;
      }
    }
    elseif (!$importer->config['content_type']) {
      $message = dt("The importer '@importer' is not attached to a content type. Do you want to clear all items for this importer?", array(
        '@importer' => $importer_id,
      ));

      if (!drush_confirm($message)) {
        return drush_log(dt('Aborting.'), 'ok');
      }
      else {
        drush_set_option('nid', 0);
        // Avoid asking for confirmation twice.
        drush_set_option('feeds_clear_skip_confirm', 1);
        return drush_feeds_clear($importer_id);
      }
    }

    drush_set_error(dt("There is no feed node with ID @nid for importer '@importer'. To show a list of available feed nodes for this importer, use 'drush feeds-list-feeds @importer'.", array(
      '@importer' => $importer_id,
      '@nid' => $feed_nid,
    )));
    return FALSE;
  }

  // Only ask for confirmation if it wasn't already asked before. See above.
  if (!drush_get_option('feeds_clear_skip_confirm')) {
    if ($feed_nid) {
      $message = dt("All items imported with the importer '@importer' for the feed node @feed_nid will be deleted. Do you really want to continue?", array(
        '@importer' => $importer_id,
        '@feed_nid' => $feed_nid,
      ));
    }
    else {
      $message = dt("All items imported with the importer '@importer' will be deleted. Do you really want to continue?", array(
        '@importer' => $importer_id,
      ));
    }
    if (!drush_confirm($message)) {
      return drush_log(dt('Aborting.'), 'ok');
    }
  }

  $batch = array(
    'title' => dt('Clearing !importer', array('!importer' => $importer_id)),
    'operations' => array(
      array('feeds_batch', array('clear', $importer_id, $feed_nid)),
    ),
  );

  batch_set($batch);
  drush_backend_batch_process();
}

/**
 * Enables a set of Feeds importers.
 */
function drush_feeds_enable() {
  $all = array_keys(feeds_importer_load_all(TRUE));
  $enabled = array_keys(feeds_importer_load_all());
  $missing = array_diff(func_get_args(), $all);
  $to_enable = array_diff(func_get_args(), $enabled, $missing);
  $already_enabled = array_intersect(func_get_args(), $enabled);

  if ($missing) {
    drush_print(dt('The following importers are missing: !importers', array('!importers' => implode(', ', $missing))));
  }

  if ($already_enabled) {
    drush_print(dt('The following importers are already enabled: !importers', array('!importers' => implode(', ', $already_enabled))));
  }

  if ($to_enable) {
    drush_print(dt('The following importers will be enabled: !importers', array('!importers' => implode(', ', $to_enable))));
  }
  elseif (count(func_get_args()) == 0) {
    return drush_set_error(dt('Please specify a space delimited list of importers to enable.'));
  }
  else {
    return drush_print(dt('There are no importers to enable.'));
  }

  if (!drush_confirm(dt('Do you really want to continue?'))) {
    return drush_log(dt('Aborting.'), 'ok');
  }

  $disabled = variable_get('default_feeds_importer', array());

  foreach ($to_enable as $importer_id) {
    unset($disabled[$importer_id]);
    drush_log(dt("The importer '!importer' has been enabled.", array('!importer' => $importer_id)), 'ok');
  }

  variable_set('default_feeds_importer', $disabled);
}

/**
 * Disables a set of Feeds importers.
 */
function drush_feeds_disable() {
  $all = array_keys(feeds_importer_load_all(TRUE));
  $enabled = array_keys(feeds_importer_load_all());
  $to_disable = array_intersect(func_get_args(), $enabled);
  $missing = array_diff(func_get_args(), $all);
  $already_disabled = array_diff(func_get_args(), $enabled, $missing);

  if ($missing) {
    drush_print(dt('The following importers are missing: !importers', array('!importers' => implode(', ', $missing))));
  }

  if ($already_disabled) {
    drush_print(dt('The following importers are already disabled: !importers', array('!importers' => implode(', ', $already_disabled))));
  }

  if ($to_disable) {
    drush_print(dt('The following importers will be disabled: !importers', array('!importers' => implode(', ', $to_disable))));
  }
  elseif (count(func_get_args()) == 0) {
    return drush_set_error(dt('Please specify a space delimited list of importers to disable.'));
  }
  else {
    return drush_print(dt('There are no importers to disable.'));
  }

  if (!drush_confirm(dt('Do you really want to continue?'))) {
    return drush_log(dt('Aborting.'), 'ok');
  }

  $disabled = variable_get('default_feeds_importer', array());
  foreach ($to_disable as $importer_id) {
    $disabled[$importer_id] = TRUE;
    drush_log(dt("The importer '!importer' has been disabled.", array('!importer' => $importer_id)), 'ok');
  }
  variable_set('default_feeds_importer', $disabled);
  feeds_cache_clear();
}

/**
 * Deletes a set of Feeds importers.
 */
function drush_feeds_delete() {
  $all = feeds_importer_load_all(TRUE);
  $to_delete = array_intersect_key($all, array_flip(func_get_args()));
  $missing = array_diff(func_get_args(), array_keys($all));
  $cant_delete = array();

  // Filter out default importers that are not overridden.
  foreach ($to_delete as $delta => $importer) {
    if ($importer->export_type === EXPORT_IN_CODE) {
      unset($to_delete[$delta]);
      $cant_delete[$importer->id] = $importer->id;
    }
  }

  if ($missing) {
    drush_print(dt('The following importers are missing: !importers', array('!importers' => implode(', ', $missing))));
  }

  if ($cant_delete) {
    drush_print(dt('The following importers cannot be deleted because they only exist in code: !importers', array('!importers' => implode(', ', array_keys($cant_delete)))));
  }

  if ($to_delete) {
    drush_print(dt('The following importers will be deleted: !importers', array('!importers' => implode(', ', array_keys($to_delete)))));
  }
  elseif (count(func_get_args()) == 0) {
    return drush_set_error(dt('Please specify a space delimited list of importers to delete.'));
  }
  else {
    return drush_print(dt('There are no importers to delete.'));
  }

  if (!drush_confirm(dt('Do you really want to continue?'))) {
    return drush_log(dt('Aborting.'), 'ok');
  }

  foreach ($to_delete as $importer) {
    $importer->delete();
    drush_log(dt("The importer '!importer' was deleted successfully.", array('!importer' => $importer->id)), 'ok');
  }

  feeds_cache_clear();
}

/**
 * Reverts a set of feeds.
 */
function drush_feeds_revert() {
  $all = feeds_importer_load_all(TRUE);
  $missing = array_diff(func_get_args(), array_keys($all));
  $to_revert = array_intersect_key($all, array_flip(func_get_args()));
  $cant_revert = array();
  $cant_revert_db = array();

  // Filter out non-overridden importers.
  foreach ($to_revert as $delta => $importer) {
    if ($importer->export_type !== (EXPORT_IN_CODE | EXPORT_IN_DATABASE)) {
      unset($to_revert[$delta]);
      if ($importer->export_type == EXPORT_IN_DATABASE) {
        $cant_revert_db[$importer->id] = $importer->id;
      }
      else {
        $cant_revert[$importer->id] = $importer->id;
      }
    }
  }

  if ($missing) {
    drush_print(dt('The following importers are missing: !importers', array('!importers' => implode(', ', $missing))));
  }

  if ($cant_revert) {
    drush_print(dt('The following importers cannot be reverted because they are not overridden: !importers', array('!importers' => implode(', ', array_keys($cant_revert)))));
  }
  if ($cant_revert_db) {
    drush_print(dt('The following importers cannot be reverted because they only exist in the database: !importers', array('!importers' => implode(', ', array_keys($cant_revert_db)))));
  }

  if ($to_revert) {
    drush_print(dt('The following importers will be reverted: !importers', array('!importers' => implode(', ', array_keys($to_revert)))));
  }
  elseif (count(func_get_args()) == 0) {
    return drush_set_error(dt('Please specify a space delimited list of importers to revert.'));
  }
  else {
    return drush_print(dt('There are no importers to revert.'));
  }

  if (!drush_confirm(dt('Do you really want to continue?'))) {
    return drush_log(dt('Aborting.'), 'ok');
  }

  foreach ($to_revert as $importer) {
    $importer->delete();
    drush_log(dt("The importer '!importer' was reverted successfully.", array('!importer' => $importer->id)), 'ok');
  }

  feeds_cache_clear();
}

/**
 * Returns all feed instances filtered by an optional importer.
 *
 * @param string $importer_id
 *   (optional) The importer id.
 * @param int $limit
 *   (optional) The number of feeds to return.
 *
 * @return DatabaseStatementInterface
 *   A list of feeds objects.
 */
function _drush_feeds_get_all($importer_id = NULL, $limit = 2147483647) {
  if (isset($importer_id)) {
    return db_query_range("SELECT * FROM {feeds_source} WHERE id = :importer ORDER BY imported ASC", 0, $limit, array(':importer' => $importer_id));
  }

  return db_query_range("SELECT * FROM {feeds_source} ORDER BY imported ASC", 0, $limit);
}
