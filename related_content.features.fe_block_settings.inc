<?php
/**
 * @file
 * related_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function related_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-related_content-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content-block_2',
    'module' => 'views',
    'node_types' => array(),
    'options' => NULL,
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'material_custom' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'material_custom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-related_content-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'related_content-block_3',
    'module' => 'views',
    'node_types' => array(
      0 => 'article',
      1 => 'opn_article',
      2 => 'page',
    ),
    'options' => 'a:0:{}',
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'material_custom' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'material_custom',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
