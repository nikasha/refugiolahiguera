<?php
/**
 * @file
 * eventos_y_mercadillos.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function eventos_y_mercadillos_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_eventos-y-mercadillos:eventos.
  $menu_links['main-menu_eventos-y-mercadillos:eventos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eventos',
    'router_path' => 'eventos',
    'link_title' => 'Eventos y Mercadillos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_eventos-y-mercadillos:eventos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Eventos y Mercadillos');

  return $menu_links;
}
