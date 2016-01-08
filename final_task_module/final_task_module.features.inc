<?php
/**
 * @file
 * final_task_module.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function final_task_module_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
