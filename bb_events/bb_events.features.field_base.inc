<?php
/**
 * @file
 * bb_events.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bb_events_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_event_date'
  $field_bases['field_event_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_event_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => 'optional',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  // Exported field_base: 'field_event_location'
  $field_bases['field_event_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_event_location',
    'foreign keys' => array(),
    'indexes' => array(
      'lid' => array(
        0 => 'lid',
      ),
    ),
    'locked' => 0,
    'module' => 'location_cck',
    'settings' => array(
      'gmap_macro' => '[gmap ]',
      'gmap_marker' => 'drupal',
      'location_settings' => array(
        'display' => array(
          'hide' => array(
            'additional' => 'additional',
            'city' => 0,
            'coords' => 'coords',
            'country' => 0,
            'country_name' => 0,
            'locpick' => 'locpick',
            'map_link' => 0,
            'name' => 0,
            'postal_code' => 0,
            'province' => 0,
            'province_name' => 0,
            'street' => 0,
          ),
        ),
        'form' => array(
          'fields' => array(
            'additional' => array(
              'collect' => 0,
              'default' => '',
              'weight' => 6,
            ),
            'city' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 8,
            ),
            'country' => array(
              'collect' => 1,
              'default' => 'be',
              'weight' => 14,
            ),
            'locpick' => array(
              'collect' => 0,
              'weight' => 20,
            ),
            'name' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 2,
            ),
            'postal_code' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 12,
            ),
            'province' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 10,
              'widget' => 'autocomplete',
            ),
            'street' => array(
              'collect' => 1,
              'default' => '',
              'weight' => 4,
            ),
          ),
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'location',
  );

  return $field_bases;
}
