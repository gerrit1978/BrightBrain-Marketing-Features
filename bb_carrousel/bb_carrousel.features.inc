<?php
/**
 * @file
 * bb_carrousel.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bb_carrousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bb_carrousel_image_default_styles() {
  $styles = array();

  // Exported image style: carrousel.
  $styles['carrousel'] = array(
    'name' => 'carrousel',
    'label' => 'Carrousel',
    'effects' => array(
      1 => array(
        'label' => 'Schalen en bijsnijden',
        'help' => 'Bij het schalen blijft de breedte-hoogte verhouding van de oorspronkelijke afbeelding behouden. Bij het bijsnijden wordt de langste zijde ingekort. Hiermee kunt u bijvoorbeeld vierkante miniaturen maken.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bb_carrousel_node_info() {
  $items = array(
    'carrousel' => array(
      'name' => t('Carrousel'),
      'base' => 'node_content',
      'description' => t('Een carrousel-item, compleet met afbeelding, titel en beschrijving.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
