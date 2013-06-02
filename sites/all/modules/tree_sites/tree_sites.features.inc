<?php
/**
 * @file
 * tree_sites.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tree_sites_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tree_sites_node_info() {
  $items = array(
    'site' => array(
      'name' => t('new tree suggestion'),
      'base' => 'node_content',
      'description' => t('Site for a tree to get planted'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
