<?php
/**
 * @file
 * final_task_module.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function final_task_module_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'final_task';
  $page->task = 'page';
  $page->admin_title = 'Final Task';
  $page->admin_description = 'Testing custom ctools plugin for render database submissions.';
  $page->path = 'final_task_test';
  $page->access = array();
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Final task',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_final_task__panel';
  $handler->task = 'page';
  $handler->subtask = 'final_task';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cd5d0cb1-215e-4096-ac59-d44389062139';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bb892556-3813-4315-a2b4-9f824a5b147f';
    $pane->panel = 'center';
    $pane->type = 'final_task';
    $pane->subtype = 'final_task';
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
    $pane->uuid = 'bb892556-3813-4315-a2b4-9f824a5b147f';
    $display->content['new-bb892556-3813-4315-a2b4-9f824a5b147f'] = $pane;
    $display->panels['center'][0] = 'new-bb892556-3813-4315-a2b4-9f824a5b147f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bb892556-3813-4315-a2b4-9f824a5b147f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['final_task'] = $page;

  return $pages;

}
