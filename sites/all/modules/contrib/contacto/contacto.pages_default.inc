<?php
/**
 * @file
 * contacto.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function contacto_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contacto';
  $page->task = 'page';
  $page->admin_title = 'Contacto';
  $page->admin_description = '';
  $page->path = 'contacto';
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
  $handler->name = 'page_contacto__panel';
  $handler->task = 'page';
  $handler->subtask = 'contacto';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contacto',
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
  $display->uuid = 'e41684a0-5c0d-4d29-ba00-f6c1754967d1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-69d744fb-66c3-400c-a79a-36e1f920efea';
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
    $pane->uuid = '69d744fb-66c3-400c-a79a-36e1f920efea';
    $display->content['new-69d744fb-66c3-400c-a79a-36e1f920efea'] = $pane;
    $display->panels['left'][0] = 'new-69d744fb-66c3-400c-a79a-36e1f920efea';
    $pane = new stdClass();
    $pane->pid = 'new-b3d31601-cd34-462e-bc0d-5066653bc706';
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
    $pane->uuid = 'b3d31601-cd34-462e-bc0d-5066653bc706';
    $display->content['new-b3d31601-cd34-462e-bc0d-5066653bc706'] = $pane;
    $display->panels['left'][1] = 'new-b3d31601-cd34-462e-bc0d-5066653bc706';
    $pane = new stdClass();
    $pane->pid = 'new-bf1110b0-b791-4ae7-ba5c-a50d0b8d0cab';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'contactblock-contactblock';
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
    $pane->uuid = 'bf1110b0-b791-4ae7-ba5c-a50d0b8d0cab';
    $display->content['new-bf1110b0-b791-4ae7-ba5c-a50d0b8d0cab'] = $pane;
    $display->panels['middle'][0] = 'new-bf1110b0-b791-4ae7-ba5c-a50d0b8d0cab';
    $pane = new stdClass();
    $pane->pid = 'new-7a564b77-3218-4c90-967f-58d6ed12df8c';
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
    $pane->uuid = '7a564b77-3218-4c90-967f-58d6ed12df8c';
    $display->content['new-7a564b77-3218-4c90-967f-58d6ed12df8c'] = $pane;
    $display->panels['right'][0] = 'new-7a564b77-3218-4c90-967f-58d6ed12df8c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-69d744fb-66c3-400c-a79a-36e1f920efea';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contacto'] = $page;

  return $pages;

}
