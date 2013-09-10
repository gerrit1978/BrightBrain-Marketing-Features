<?php
/**
 * @file
 * bb_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bb_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bb_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bb_jobs_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Een job, bestaande uit enkele velden, waarop mensen kunnen solliciteren.'),
      'has_title' => '1',
      'title_label' => t('Functietitel'),
      'help' => '',
    ),
  );
  return $items;
}
