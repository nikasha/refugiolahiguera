<?php
/**
 * @file
 * donaciones.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function donaciones_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'donaciones';
  $page->task = 'page';
  $page->admin_title = 'Donaciones';
  $page->admin_description = '';
  $page->path = 'donaciones';
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
  $handler->name = 'page_donaciones__panel';
  $handler->task = 'page';
  $handler->subtask = 'donaciones';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Donaciones',
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
  $display->title = 'Donaciones';
  $display->uuid = 'a0ffcacb-1abe-4e7d-a2d3-0fe76354ea28';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-580164fe-3488-4956-bf2b-76491328a71c';
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
    $pane->uuid = '580164fe-3488-4956-bf2b-76491328a71c';
    $display->content['new-580164fe-3488-4956-bf2b-76491328a71c'] = $pane;
    $display->panels['left'][0] = 'new-580164fe-3488-4956-bf2b-76491328a71c';
    $pane = new stdClass();
    $pane->pid = 'new-9bc50e56-e398-443c-a323-dd689938d3e7';
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
    $pane->uuid = '9bc50e56-e398-443c-a323-dd689938d3e7';
    $display->content['new-9bc50e56-e398-443c-a323-dd689938d3e7'] = $pane;
    $display->panels['left'][1] = 'new-9bc50e56-e398-443c-a323-dd689938d3e7';
    $pane = new stdClass();
    $pane->pid = 'new-128c7c63-1422-4804-b923-3bb4f94e99aa';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'donaciones-panel_pane_1';
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
    $pane->uuid = '128c7c63-1422-4804-b923-3bb4f94e99aa';
    $display->content['new-128c7c63-1422-4804-b923-3bb4f94e99aa'] = $pane;
    $display->panels['middle'][0] = 'new-128c7c63-1422-4804-b923-3bb4f94e99aa';
    $pane = new stdClass();
    $pane->pid = 'new-812b077b-912e-4320-bb37-52fc35f9c9e5';
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
    $pane->uuid = '812b077b-912e-4320-bb37-52fc35f9c9e5';
    $display->content['new-812b077b-912e-4320-bb37-52fc35f9c9e5'] = $pane;
    $display->panels['right'][0] = 'new-812b077b-912e-4320-bb37-52fc35f9c9e5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-128c7c63-1422-4804-b923-3bb4f94e99aa';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['donaciones'] = $page;

  return $pages;

}
