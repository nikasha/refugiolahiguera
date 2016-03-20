<?php
/**
 * @file
 * nuestros_gatetes.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function nuestros_gatetes_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'nuestros_gatetes';
  $page->task = 'page';
  $page->admin_title = 'Nuestros Gatetes';
  $page->admin_description = '';
  $page->path = 'nuestros-gatetes';
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
  $handler->name = 'page_nuestros_gatetes__panel';
  $handler->task = 'page';
  $handler->subtask = 'nuestros_gatetes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Nuestros Gatetes',
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
  $display->title = 'Nuestros Gatetes';
  $display->uuid = '4c39561e-ab21-498e-a586-971830b8008a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-12a4d4cc-7829-43ef-8bdc-6e2761b4738a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-cb416b70f765feb0a784ca535ebe6b51';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
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
    $pane->uuid = '12a4d4cc-7829-43ef-8bdc-6e2761b4738a';
    $display->content['new-12a4d4cc-7829-43ef-8bdc-6e2761b4738a'] = $pane;
    $display->panels['left'][0] = 'new-12a4d4cc-7829-43ef-8bdc-6e2761b4738a';
    $pane = new stdClass();
    $pane->pid = 'new-31b4b74b-cea2-4764-8a6b-3ad42f2331f0';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '31b4b74b-cea2-4764-8a6b-3ad42f2331f0';
    $display->content['new-31b4b74b-cea2-4764-8a6b-3ad42f2331f0'] = $pane;
    $display->panels['left'][1] = 'new-31b4b74b-cea2-4764-8a6b-3ad42f2331f0';
    $pane = new stdClass();
    $pane->pid = 'new-d0e539b5-39bf-43c6-a93f-f106c0bde27a';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd0e539b5-39bf-43c6-a93f-f106c0bde27a';
    $display->content['new-d0e539b5-39bf-43c6-a93f-f106c0bde27a'] = $pane;
    $display->panels['left'][2] = 'new-d0e539b5-39bf-43c6-a93f-f106c0bde27a';
    $pane = new stdClass();
    $pane->pid = 'new-1d49d406-9cea-49f3-befc-f40b14cb6292';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'nuestros_gatetes-panel_pane_1';
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
    $pane->uuid = '1d49d406-9cea-49f3-befc-f40b14cb6292';
    $display->content['new-1d49d406-9cea-49f3-befc-f40b14cb6292'] = $pane;
    $display->panels['middle'][0] = 'new-1d49d406-9cea-49f3-befc-f40b14cb6292';
    $pane = new stdClass();
    $pane->pid = 'new-8ceca393-8be9-4d00-8c30-52b12f44d325';
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
    $pane->uuid = '8ceca393-8be9-4d00-8c30-52b12f44d325';
    $display->content['new-8ceca393-8be9-4d00-8c30-52b12f44d325'] = $pane;
    $display->panels['right'][0] = 'new-8ceca393-8be9-4d00-8c30-52b12f44d325';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nuestros_gatetes'] = $page;

  return $pages;

}
