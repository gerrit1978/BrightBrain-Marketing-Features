<?php
/**
 * @file
 * bb_customer_reference.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bb_customer_reference_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bb_customer_reference_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bb_customer_reference_node_info() {
  $items = array(
    'customer_ref' => array(
      'name' => t('Klantenreferentie'),
      'base' => 'node_content',
      'description' => t('Een klantenreferentie, gebruikt voor een klein blokje met getuigenissen.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
