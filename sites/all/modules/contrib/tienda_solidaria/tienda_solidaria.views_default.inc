<?php
/**
 * @file
 * tienda_solidaria.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tienda_solidaria_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'shop';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tienda';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['navigation'] = 'before';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Fotos */
  $handler->display->display_options['fields']['field_shared_images']['id'] = 'field_shared_images';
  $handler->display->display_options['fields']['field_shared_images']['table'] = 'field_data_field_shared_images';
  $handler->display->display_options['fields']['field_shared_images']['field'] = 'field_shared_images';
  $handler->display->display_options['fields']['field_shared_images']['label'] = '';
  $handler->display->display_options['fields']['field_shared_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_images']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_shared_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_images']['separator'] = '';
  /* Field: Content: Precio */
  $handler->display->display_options['fields']['field_shared_integer']['id'] = 'field_shared_integer';
  $handler->display->display_options['fields']['field_shared_integer']['table'] = 'field_data_field_shared_integer';
  $handler->display->display_options['fields']['field_shared_integer']['field'] = 'field_shared_integer';
  $handler->display->display_options['fields']['field_shared_integer']['label'] = '';
  $handler->display->display_options['fields']['field_shared_integer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_integer']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'articulo_tienda' => 'articulo_tienda',
  );

  /* Display: Tienda */
  $handler = $view->new_display('panel_pane', 'Tienda', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Precio */
  $handler->display->display_options['fields']['field_shared_integer']['id'] = 'field_shared_integer';
  $handler->display->display_options['fields']['field_shared_integer']['table'] = 'field_data_field_shared_integer';
  $handler->display->display_options['fields']['field_shared_integer']['field'] = 'field_shared_integer';
  $handler->display->display_options['fields']['field_shared_integer']['label'] = '';
  $handler->display->display_options['fields']['field_shared_integer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_integer']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Fotos */
  $handler->display->display_options['fields']['field_shared_images']['id'] = 'field_shared_images';
  $handler->display->display_options['fields']['field_shared_images']['table'] = 'field_data_field_shared_images';
  $handler->display->display_options['fields']['field_shared_images']['field'] = 'field_shared_images';
  $handler->display->display_options['fields']['field_shared_images']['label'] = '';
  $handler->display->display_options['fields']['field_shared_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_images']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_images']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_shared_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_images']['separator'] = '                           ';

  /* Display: Artículos Portada */
  $handler = $view->new_display('panel_pane', 'Artículos Portada', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Artículos de nuestra Tienda Solidaria';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_shared_images' => 'field_shared_images',
    'field_shared_integer' => 'field_shared_images',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_shared_images' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_shared_integer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Fotos */
  $handler->display->display_options['fields']['field_shared_images']['id'] = 'field_shared_images';
  $handler->display->display_options['fields']['field_shared_images']['table'] = 'field_data_field_shared_images';
  $handler->display->display_options['fields']['field_shared_images']['field'] = 'field_shared_images';
  $handler->display->display_options['fields']['field_shared_images']['label'] = '';
  $handler->display->display_options['fields']['field_shared_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shared_images']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_shared_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_shared_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_shared_images']['separator'] = '';
  /* Field: Content: Precio */
  $handler->display->display_options['fields']['field_shared_integer']['id'] = 'field_shared_integer';
  $handler->display->display_options['fields']['field_shared_integer']['table'] = 'field_data_field_shared_integer';
  $handler->display->display_options['fields']['field_shared_integer']['field'] = 'field_shared_integer';
  $handler->display->display_options['fields']['field_shared_integer']['label'] = '';
  $handler->display->display_options['fields']['field_shared_integer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_shared_integer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_shared_integer']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $translatables['shop'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Tienda'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('View panes'),
    t('Artículos Portada'),
    t('Artículos de nuestra Tienda Solidaria'),
  );
  $export['shop'] = $view;

  return $export;
}
