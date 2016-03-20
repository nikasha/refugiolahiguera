<?php
/**
 * @file
 * eventos_y_mercadillos.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function eventos_y_mercadillos_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'eventos_y_mercadillos';
  $page->task = 'page';
  $page->admin_title = 'Eventos y Mercadillos';
  $page->admin_description = '';
  $page->path = 'eventos';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_eventos_y_mercadillos__panel';
  $handler->task = 'page';
  $handler->subtask = 'eventos_y_mercadillos';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Eventos',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9b82c6c4-06ea-4bde-a34e-dd46d613df86';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e731b704-90d5-45d9-a6cd-f01d9409d24f';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e731b704-90d5-45d9-a6cd-f01d9409d24f';
    $display->content['new-e731b704-90d5-45d9-a6cd-f01d9409d24f'] = $pane;
    $display->panels['left'][0] = 'new-e731b704-90d5-45d9-a6cd-f01d9409d24f';
    $pane = new stdClass();
    $pane->pid = 'new-fac91f8e-87b7-4fc5-b60d-7cc5b85a9cb8';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fac91f8e-87b7-4fc5-b60d-7cc5b85a9cb8';
    $display->content['new-fac91f8e-87b7-4fc5-b60d-7cc5b85a9cb8'] = $pane;
    $display->panels['left'][1] = 'new-fac91f8e-87b7-4fc5-b60d-7cc5b85a9cb8';
    $pane = new stdClass();
    $pane->pid = 'new-b199926c-6dda-4d2d-9248-aacb897d55e6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'eventos-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b199926c-6dda-4d2d-9248-aacb897d55e6';
    $display->content['new-b199926c-6dda-4d2d-9248-aacb897d55e6'] = $pane;
    $display->panels['middle'][0] = 'new-b199926c-6dda-4d2d-9248-aacb897d55e6';
    $pane = new stdClass();
    $pane->pid = 'new-afafc324-32e8-46c6-a28f-f76a0d524d78';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-s-guenos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'afafc324-32e8-46c6-a28f-f76a0d524d78';
    $display->content['new-afafc324-32e8-46c6-a28f-f76a0d524d78'] = $pane;
    $display->panels['right'][0] = 'new-afafc324-32e8-46c6-a28f-f76a0d524d78';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e731b704-90d5-45d9-a6cd-f01d9409d24f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['eventos_y_mercadillos'] = $page;

  return $pages;

}
