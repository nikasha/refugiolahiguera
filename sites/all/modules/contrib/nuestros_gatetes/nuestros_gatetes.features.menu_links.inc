<?php
/**
 * @file
 * nuestros_gatetes.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function nuestros_gatetes_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_nuestros-gatetes:nuestros-gatetes.
  $menu_links['main-menu_nuestros-gatetes:nuestros-gatetes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'nuestros-gatetes',
    'router_path' => 'nuestros-gatetes',
    'link_title' => 'Nuestros Gatetes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_nuestros-gatetes:nuestros-gatetes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Nuestros Gatetes');

  return $menu_links;
}
