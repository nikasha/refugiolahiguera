<?php
/**
 * @file
 * donaciones.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function donaciones_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_donaciones:donaciones.
  $menu_links['main-menu_donaciones:donaciones'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'donaciones',
    'router_path' => 'donaciones',
    'link_title' => 'Donaciones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_donaciones:donaciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Donaciones');

  return $menu_links;
}
