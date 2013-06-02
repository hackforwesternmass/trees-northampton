<?php
/**
 * @file
 * tree_sites.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tree_sites_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/site
  $menu_links['navigation:node/add/site'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/site',
    'router_path' => 'node/add/site',
    'link_title' => 'Propose a Site',
    'options' => array(
      'attributes' => array(
        'title' => 'Site for a tree to get planted',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Propose a Site');


  return $menu_links;
}
