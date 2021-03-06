<?php
/**
 * @file
 * awesome_site_book_store.features.inc
 */

/**
 * Implements hook_views_api().
 */
function awesome_site_book_store_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function awesome_site_book_store_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book'),
      'base' => 'node_content',
      'description' => t('Test content type for book'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
