<?php
/**
 * @file
 * eventos_socios_y_voluntarios.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function eventos_socios_y_voluntarios_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Menú principal',
    'description' => 'El menú <em>Principal</em> se usa en muchos sitios web para mostrar las secciones principales del sitio, generalmente en una barra de navegación superior.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'El menú <em>Usuario</em> contiene enlaces relacionados con la cuenta del usuario, como el enlace \'Cerrar sesión\'.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('El menú <em>Principal</em> se usa en muchos sitios web para mostrar las secciones principales del sitio, generalmente en una barra de navegación superior.');
  t('El menú <em>Usuario</em> contiene enlaces relacionados con la cuenta del usuario, como el enlace \'Cerrar sesión\'.');
  t('Menú principal');
  t('User menu');

  return $menus;
}
