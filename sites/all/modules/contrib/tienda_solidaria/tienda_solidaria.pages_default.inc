<?php
/**
 * @file
 * tienda_solidaria.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tienda_solidaria_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tienda_solidaria';
  $page->task = 'page';
  $page->admin_title = 'Tienda Solidaria';
  $page->admin_description = '';
  $page->path = 'tienda';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tienda_solidaria__panel';
  $handler->task = 'page';
  $handler->subtask = 'tienda_solidaria';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Tienda Solidaria',
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
  $display->uuid = '80345523-241a-422c-a753-bb8fd46fddcb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0bdd4107-2467-4841-98a4-ecf262c2af25';
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
    $pane->uuid = '0bdd4107-2467-4841-98a4-ecf262c2af25';
    $display->content['new-0bdd4107-2467-4841-98a4-ecf262c2af25'] = $pane;
    $display->panels['left'][0] = 'new-0bdd4107-2467-4841-98a4-ecf262c2af25';
    $pane = new stdClass();
    $pane->pid = 'new-b81681c2-e428-43a1-ae76-91a284cad082';
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
    $pane->uuid = 'b81681c2-e428-43a1-ae76-91a284cad082';
    $display->content['new-b81681c2-e428-43a1-ae76-91a284cad082'] = $pane;
    $display->panels['left'][1] = 'new-b81681c2-e428-43a1-ae76-91a284cad082';
    $pane = new stdClass();
    $pane->pid = 'new-1ce4f501-474a-4412-a31b-072ad0a08321';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'shop-panel_pane_1';
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
    $pane->uuid = '1ce4f501-474a-4412-a31b-072ad0a08321';
    $display->content['new-1ce4f501-474a-4412-a31b-072ad0a08321'] = $pane;
    $display->panels['middle'][0] = 'new-1ce4f501-474a-4412-a31b-072ad0a08321';
    $pane = new stdClass();
    $pane->pid = 'new-0820eb4c-beac-4324-9e47-249f5f787ec8';
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
    $pane->uuid = '0820eb4c-beac-4324-9e47-249f5f787ec8';
    $display->content['new-0820eb4c-beac-4324-9e47-249f5f787ec8'] = $pane;
    $display->panels['right'][0] = 'new-0820eb4c-beac-4324-9e47-249f5f787ec8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0bdd4107-2467-4841-98a4-ecf262c2af25';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tienda_solidaria'] = $page;

  return $pages;

}
