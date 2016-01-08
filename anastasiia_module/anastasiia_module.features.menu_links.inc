<?php
/**
 * @file
 * anastasiia_module.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function anastasiia_module_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_final-task:final_task_test.
  $menu_links['main-menu_final-task:final_task_test'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'final_task_test',
    'router_path' => 'final_task_test',
    'link_title' => 'Final Task',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_final-task:final_task_test',
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
  t('Final Task');

  return $menu_links;
}
