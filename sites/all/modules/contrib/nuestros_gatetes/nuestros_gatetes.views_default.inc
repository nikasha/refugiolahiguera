<?php
/**
 * @file
 * nuestros_gatetes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nuestros_gatetes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nuestros_gatetes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nuestros Gatetes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '8, 15, 25, 40, 60';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title_field' => 'title_field',
    'field_cat_age' => 'field_cat_age',
    'field_cat_images' => 'field_cat_images',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Título */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => 'h1',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Age */
  $handler->display->display_options['fields']['field_cat_age']['id'] = 'field_cat_age';
  $handler->display->display_options['fields']['field_cat_age']['table'] = 'field_data_field_cat_age';
  $handler->display->display_options['fields']['field_cat_age']['field'] = 'field_cat_age';
  $handler->display->display_options['fields']['field_cat_age']['label'] = '';
  $handler->display->display_options['fields']['field_cat_age']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cat_age']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'cat' => 'cat',
  );
  /* Filter criterion: Content: Age (field_cat_age) */
  $handler->display->display_options['filters']['field_cat_age_value']['id'] = 'field_cat_age_value';
  $handler->display->display_options['filters']['field_cat_age_value']['table'] = 'field_data_field_cat_age';
  $handler->display->display_options['filters']['field_cat_age_value']['field'] = 'field_cat_age_value';
  $handler->display->display_options['filters']['field_cat_age_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cat_age_value']['expose']['operator_id'] = 'field_cat_age_value_op';
  $handler->display->display_options['filters']['field_cat_age_value']['expose']['label'] = 'Age (field_cat_age)';
  $handler->display->display_options['filters']['field_cat_age_value']['expose']['operator'] = 'field_cat_age_value_op';
  $handler->display->display_options['filters']['field_cat_age_value']['expose']['identifier'] = 'field_cat_age_value';
  $handler->display->display_options['filters']['field_cat_age_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_cat_age_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_cat_age_value']['group_info']['label'] = 'Edad';
  $handler->display->display_options['filters']['field_cat_age_value']['group_info']['identifier'] = 'field_cat_age_value';
  $handler->display->display_options['filters']['field_cat_age_value']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_cat_age_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Cachorritos / Bebés',
      'operator' => '<',
      'value' => array(
        'value' => '12',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Adultos / Mayores',
      'operator' => '>=',
      'value' => array(
        'value' => '12',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Nuestros Gatetes */
  $handler = $view->new_display('panel_pane', 'Nuestros Gatetes', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '8, 15, 25, 40, 60';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title_field' => 'title_field',
    'field_cat_age' => 'field_cat_age',
    'field_cat_images' => 'field_cat_images',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '0';
  $translatables['nuestros_gatetes'] = array(
    t('Master'),
    t('more'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Age (field_cat_age)'),
    t('Edad'),
    t('Nuestros Gatetes'),
    t('View panes'),
  );
  $export['nuestros_gatetes'] = $view;

  return $export;
}
