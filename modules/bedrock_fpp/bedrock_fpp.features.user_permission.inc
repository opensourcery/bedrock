<?php
/**
 * @file
 * bedrock_fpp.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bedrock_fpp_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable slide_pane'.
  $permissions['create fieldable slide_pane'] = array(
    'name' => 'create fieldable slide_pane',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'create fieldable slideshow_pane'.
  $permissions['create fieldable slideshow_pane'] = array(
    'name' => 'create fieldable slideshow_pane',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable slide_pane'.
  $permissions['delete fieldable slide_pane'] = array(
    'name' => 'delete fieldable slide_pane',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable slideshow_pane'.
  $permissions['delete fieldable slideshow_pane'] = array(
    'name' => 'delete fieldable slideshow_pane',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable slide_pane'.
  $permissions['edit fieldable slide_pane'] = array(
    'name' => 'edit fieldable slide_pane',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable slideshow_pane'.
  $permissions['edit fieldable slideshow_pane'] = array(
    'name' => 'edit fieldable slideshow_pane',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
