<?php
/**
 * @file
 * eventos_socios_y_voluntarios.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function eventos_socios_y_voluntarios_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'eventos_soci_s_y_voluntari_s';
  $page->task = 'page';
  $page->admin_title = 'Eventos Soci@s y Voluntari@s';
  $page->admin_description = '';
  $page->path = 'eventos-privados';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
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
  $handler->name = 'page_eventos_soci_s_y_voluntari_s__panel';
  $handler->task = 'page';
  $handler->subtask = 'eventos_soci_s_y_voluntari_s';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Eventos Soci@s y Voluntari@s',
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
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Eventos Soci@ y Voluntari@s';
  $display->uuid = '99daa9d1-80f6-47e7-a077-5e16ea50f5a0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4c086390-8824-4644-ad7a-a3e7fa23c6be';
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
    $pane->uuid = '4c086390-8824-4644-ad7a-a3e7fa23c6be';
    $display->content['new-4c086390-8824-4644-ad7a-a3e7fa23c6be'] = $pane;
    $display->panels['left'][0] = 'new-4c086390-8824-4644-ad7a-a3e7fa23c6be';
    $pane = new stdClass();
    $pane->pid = 'new-d5486637-fbd1-4947-89fb-a2d29503f319';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'eventos_privados-panel_pane_1';
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
    $pane->uuid = 'd5486637-fbd1-4947-89fb-a2d29503f319';
    $display->content['new-d5486637-fbd1-4947-89fb-a2d29503f319'] = $pane;
    $display->panels['middle'][0] = 'new-d5486637-fbd1-4947-89fb-a2d29503f319';
    $pane = new stdClass();
    $pane->pid = 'new-ef7cc077-559b-4b18-b88d-169f5a264a08';
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
    $pane->uuid = 'ef7cc077-559b-4b18-b88d-169f5a264a08';
    $display->content['new-ef7cc077-559b-4b18-b88d-169f5a264a08'] = $pane;
    $display->panels['right'][0] = 'new-ef7cc077-559b-4b18-b88d-169f5a264a08';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['eventos_soci_s_y_voluntari_s'] = $page;

  return $pages;

}
