<?php
/**
 * @file
 * contacto.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function contacto_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contacto:contacto.
  $menu_links['main-menu_contacto:contacto'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contacto',
    'router_path' => 'contacto',
    'link_title' => 'Contacto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contacto:contacto',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contacto');

  return $menu_links;
}
