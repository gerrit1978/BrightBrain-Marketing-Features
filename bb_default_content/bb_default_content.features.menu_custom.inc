<?php
/**
 * @file
 * bb_default_content.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bb_default_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Hoofdmenu',
    'description' => 'Het <em>Hoofdmenu</em> wordt vaak gebruikt om de hoofdonderdelen van de website aan te geven bijvoorbeeld in een menu bovenaan de pagina.',
  );
  // Exported menu: menu-service-menu.
  $menus['menu-service-menu'] = array(
    'menu_name' => 'menu-service-menu',
    'title' => 'Service Menu',
    'description' => 'Service menu met links naar algemene voorwaarden & privacy.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Het <em>Hoofdmenu</em> wordt vaak gebruikt om de hoofdonderdelen van de website aan te geven bijvoorbeeld in een menu bovenaan de pagina.');
  t('Hoofdmenu');
  t('Service Menu');
  t('Service menu met links naar algemene voorwaarden & privacy.');


  return $menus;
}
