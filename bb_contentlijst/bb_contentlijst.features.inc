<?php
/**
 * @file
 * bb_contentlijst.features.inc
 */

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function bb_contentlijst_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: contentlijst
  $nodequeues['contentlijst'] = array(
    'name' => 'contentlijst',
    'title' => 'Contentlijst',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
      1 => 'page',
      2 => 'webform',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
