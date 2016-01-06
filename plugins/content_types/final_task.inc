<?php

/**
 * @file
 * Custom ctools plugin for render database submissions.
 * User: Anastasiia Granko
 * Date: 04.01.2016
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Database content type plugin'),
  'description' => t('The output data from database.'),
  'render callback' => 'final_task_content_type_render',
  'edit form' => 'final_task_edit_form',
  'category' => t('Node'),
);

/**
 * 'Edit form' callback for the content type.
 */
function final_task_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Run-time rendering of the body of the block (content type).
 */
function final_task_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
  $content = _final_task_db_data();
  $block = new stdClass();
  $block->title = t('Users data');
  $block->content = $content;
  return $block;
}

/**
 * Function that displays the user data from the database.
 */
function _final_task_db_data() {
  $my_data = &drupal_static(__FUNCTION__);
  $header = array(t('ID'), t('User name'), t('User login'), t('User email'), t('User pass'));
  $rows = array();
  $query = db_select('final_task_table', 'f')
      ->fields('f', array('id', 'name', 'login', 'mail', 'pass'))
      ->execute();
  while ($value = $query->fetchAssoc()) {
    $rows[] = array(
      $value['id'],
      $value['name'],
      $value['login'],
      $value['mail'],
      $value['pass'],
    );
  }
  $my_data = array('header' => $header, 'rows' => $rows);
  return theme('table', $my_data);
}