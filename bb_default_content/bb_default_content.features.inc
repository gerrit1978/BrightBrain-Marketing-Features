<?php
/**
 * @file
 * bb_default_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function bb_default_content_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Eenvoudige pagina'),
      'base' => 'node_content',
      'description' => t('Gebruik <em>basispagina\'s</em> voor statische inhoud, zoals een \'Over ons\' pagina.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
