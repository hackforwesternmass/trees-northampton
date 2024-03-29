<?php
/**
 * @file
 * tree_sites.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tree_sites_user_default_permissions() {
  $permissions = array();

  // Exported permission: create site content.
  $permissions['create site content'] = array(
    'name' => 'create site content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any site content.
  $permissions['delete any site content'] = array(
    'name' => 'delete any site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own site content.
  $permissions['delete own site content'] = array(
    'name' => 'delete own site content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any site content.
  $permissions['edit any site content'] = array(
    'name' => 'edit any site content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own site content.
  $permissions['edit own site content'] = array(
    'name' => 'edit own site content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
