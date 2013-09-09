<?php
/**
 * @file
 * bb_carrousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bb_carrousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carrousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carrousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['list']['class'] = 'slides';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['style_options']['row']['class'] = 'slide slide-#';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Veld: Inhoud: Beschrijving */
  $handler->display->display_options['fields']['field_carrousel_beschrijving']['id'] = 'field_carrousel_beschrijving';
  $handler->display->display_options['fields']['field_carrousel_beschrijving']['table'] = 'field_data_field_carrousel_beschrijving';
  $handler->display->display_options['fields']['field_carrousel_beschrijving']['field'] = 'field_carrousel_beschrijving';
  $handler->display->display_options['fields']['field_carrousel_beschrijving']['label'] = '';
  $handler->display->display_options['fields']['field_carrousel_beschrijving']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_carrousel_beschrijving']['element_class'] = 'description';
  $handler->display->display_options['fields']['field_carrousel_beschrijving']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carrousel_beschrijving']['element_default_classes'] = FALSE;
  /* Veld: Inhoud: Visual */
  $handler->display->display_options['fields']['field_carrousel_visual']['id'] = 'field_carrousel_visual';
  $handler->display->display_options['fields']['field_carrousel_visual']['table'] = 'field_data_field_carrousel_visual';
  $handler->display->display_options['fields']['field_carrousel_visual']['field'] = 'field_carrousel_visual';
  $handler->display->display_options['fields']['field_carrousel_visual']['label'] = '';
  $handler->display->display_options['fields']['field_carrousel_visual']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_carrousel_visual']['element_class'] = 'visual';
  $handler->display->display_options['fields']['field_carrousel_visual']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carrousel_visual']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_carrousel_visual']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carrousel_visual']['settings'] = array(
    'image_style' => 'carrousel',
    'image_link' => '',
  );
  /* Sort criterion: Inhoud: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carrousel' => 'carrousel',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['carrousel'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['carrousel'] = $view;

  return $export;
}
