<?php
/**
 * @file
 * awesome_site_book_store.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function awesome_site_book_store_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'book_store';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Book store';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Book store';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Book image */
  $handler->display->display_options['fields']['field_book_image']['id'] = 'field_book_image';
  $handler->display->display_options['fields']['field_book_image']['table'] = 'field_data_field_book_image';
  $handler->display->display_options['fields']['field_book_image']['field'] = 'field_book_image';
  $handler->display->display_options['fields']['field_book_image']['label'] = '';
  $handler->display->display_options['fields']['field_book_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_book_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_book_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Book author */
  $handler->display->display_options['fields']['field_book_author']['id'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['fields']['field_book_author']['field'] = 'field_book_author';
  $handler->display->display_options['fields']['field_book_author']['label'] = '';
  $handler->display->display_options['fields']['field_book_author']['element_label_colon'] = FALSE;
  /* Field: Content: Book ganre */
  $handler->display->display_options['fields']['field_book_ganre']['id'] = 'field_book_ganre';
  $handler->display->display_options['fields']['field_book_ganre']['table'] = 'field_data_field_book_ganre';
  $handler->display->display_options['fields']['field_book_ganre']['field'] = 'field_book_ganre';
  $handler->display->display_options['fields']['field_book_ganre']['label'] = '';
  $handler->display->display_options['fields']['field_book_ganre']['alter']['text'] = '[field_book_author] - [field_book_ganre]';
  $handler->display->display_options['fields']['field_book_ganre']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  /* Filter criterion: Content: Book author (field_book_author) */
  $handler->display->display_options['filters']['field_book_author_tid']['id'] = 'field_book_author_tid';
  $handler->display->display_options['filters']['field_book_author_tid']['table'] = 'field_data_field_book_author';
  $handler->display->display_options['filters']['field_book_author_tid']['field'] = 'field_book_author_tid';
  $handler->display->display_options['filters']['field_book_author_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_book_author_tid']['expose']['operator_id'] = 'field_book_author_tid_op';
  $handler->display->display_options['filters']['field_book_author_tid']['expose']['label'] = 'Автор';
  $handler->display->display_options['filters']['field_book_author_tid']['expose']['operator'] = 'field_book_author_tid_op';
  $handler->display->display_options['filters']['field_book_author_tid']['expose']['identifier'] = 'field_book_author_tid';
  $handler->display->display_options['filters']['field_book_author_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_book_author_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_book_author_tid']['vocabulary'] = 'author';
  /* Filter criterion: Content: Book ganre (field_book_ganre) */
  $handler->display->display_options['filters']['field_book_ganre_tid']['id'] = 'field_book_ganre_tid';
  $handler->display->display_options['filters']['field_book_ganre_tid']['table'] = 'field_data_field_book_ganre';
  $handler->display->display_options['filters']['field_book_ganre_tid']['field'] = 'field_book_ganre_tid';
  $handler->display->display_options['filters']['field_book_ganre_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_book_ganre_tid']['expose']['operator_id'] = 'field_book_ganre_tid_op';
  $handler->display->display_options['filters']['field_book_ganre_tid']['expose']['label'] = 'Жанр';
  $handler->display->display_options['filters']['field_book_ganre_tid']['expose']['operator'] = 'field_book_ganre_tid_op';
  $handler->display->display_options['filters']['field_book_ganre_tid']['expose']['identifier'] = 'field_book_ganre_tid';
  $handler->display->display_options['filters']['field_book_ganre_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_book_ganre_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_book_ganre_tid']['vocabulary'] = 'ganre';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'book-store';

  /* Display: Page JSON */
  $handler = $view->new_display('page', 'Page JSON', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Book store JSON';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['content_type'] = 'text/json';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 1;
  $handler->display->display_options['style_options']['bigint_string'] = 1;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 1;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 1;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'book-store-json';
  $export['book_store'] = $view;

  return $export;
}
