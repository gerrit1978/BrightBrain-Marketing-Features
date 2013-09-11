<?php
/**
 * @file
 * bb_customer_reference.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bb_customer_reference_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'klantenreferenties';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Klantenreferenties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Referenties';
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
  $handler->display->display_options['style_options']['row']['class'] = 'slide';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Veld: Inhoud: Bericht */
  $handler->display->display_options['fields']['field_customer_message']['id'] = 'field_customer_message';
  $handler->display->display_options['fields']['field_customer_message']['table'] = 'field_data_field_customer_message';
  $handler->display->display_options['fields']['field_customer_message']['field'] = 'field_customer_message';
  $handler->display->display_options['fields']['field_customer_message']['label'] = '';
  $handler->display->display_options['fields']['field_customer_message']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_customer_message']['element_class'] = 'message';
  $handler->display->display_options['fields']['field_customer_message']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Naam */
  $handler->display->display_options['fields']['field_customer_name']['id'] = 'field_customer_name';
  $handler->display->display_options['fields']['field_customer_name']['table'] = 'field_data_field_customer_name';
  $handler->display->display_options['fields']['field_customer_name']['field'] = 'field_customer_name';
  $handler->display->display_options['fields']['field_customer_name']['label'] = '';
  $handler->display->display_options['fields']['field_customer_name']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_customer_name']['element_class'] = 'name';
  $handler->display->display_options['fields']['field_customer_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'customer_ref' => 'customer_ref',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['klantenreferenties'] = array(
    t('Master'),
    t('Referenties'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['klantenreferenties'] = $view;

  return $export;
}
