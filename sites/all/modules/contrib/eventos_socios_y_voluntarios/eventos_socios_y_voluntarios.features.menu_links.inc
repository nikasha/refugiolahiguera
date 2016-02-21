<?php
/**
 * @file
 * eventos_socios_y_voluntarios.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function eventos_socios_y_voluntarios_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_eventos-socis-y-voluntaris:eventos-privados.
  $menu_links['user-menu_eventos-socis-y-voluntaris:eventos-privados'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'eventos-privados',
    'router_path' => 'eventos-privados',
    'link_title' => 'Eventos Soci@s y Voluntari@s',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_eventos-socis-y-voluntaris:eventos-privados',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Eventos Soci@s y Voluntari@s');

  return $menu_links;
}
