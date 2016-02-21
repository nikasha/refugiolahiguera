<?php
/**
 * @file
 * tienda_solidaria.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tienda_solidaria_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_tienda-solidaria:tienda.
  $menu_links['main-menu_tienda-solidaria:tienda'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tienda',
    'router_path' => 'tienda',
    'link_title' => 'Tienda Solidaria',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tienda-solidaria:tienda',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Tienda Solidaria');

  return $menu_links;
}
