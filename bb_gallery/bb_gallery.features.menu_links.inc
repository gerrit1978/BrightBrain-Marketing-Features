<?php
/**
 * @file
 * bb_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bb_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:fotogalerij
  $menu_links['main-menu:fotogalerij'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'fotogalerij',
    'router_path' => 'fotogalerij',
    'link_title' => 'Fotogalerij',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Fotogalerij');


  return $menu_links;
}
