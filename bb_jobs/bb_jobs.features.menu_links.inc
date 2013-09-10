<?php
/**
 * @file
 * bb_jobs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bb_jobs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:jobs
  $menu_links['main-menu:jobs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'jobs',
    'router_path' => 'jobs',
    'link_title' => 'Jobs',
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
  t('Jobs');


  return $menu_links;
}
