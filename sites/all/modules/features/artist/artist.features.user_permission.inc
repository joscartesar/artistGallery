<?php
/**
 * @file
 * artist.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function artist_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'artist' => 'artist',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'artist' => 'artist',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'administrator' => 'administrator',
      'artist' => 'artist',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'bulk upload media'.
  $permissions['bulk upload media'] = array(
    'name' => 'bulk upload media',
    'roles' => array(
      'administrator' => 'administrator',
      'artist' => 'artist',
    ),
    'module' => 'bulk_media_upload',
  );

  // Exported permission: 'create gallery content'.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create link content'.
  $permissions['create link content'] = array(
    'name' => 'create link content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create picture content'.
  $permissions['create picture content'] = array(
    'name' => 'create picture content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create slideshow_page content'.
  $permissions['create slideshow_page content'] = array(
    'name' => 'create slideshow_page content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gallery content'.
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any link content'.
  $permissions['delete any link content'] = array(
    'name' => 'delete any link content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any picture content'.
  $permissions['delete any picture content'] = array(
    'name' => 'delete any picture content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any slideshow_page content'.
  $permissions['delete any slideshow_page content'] = array(
    'name' => 'delete any slideshow_page content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own slideshow_page content'.
  $permissions['delete own slideshow_page content'] = array(
    'name' => 'delete own slideshow_page content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gallery content'.
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any link content'.
  $permissions['edit any link content'] = array(
    'name' => 'edit any link content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any picture content'.
  $permissions['edit any picture content'] = array(
    'name' => 'edit any picture content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own slideshow_page content'.
  $permissions['edit own slideshow_page content'] = array(
    'name' => 'edit own slideshow_page content',
    'roles' => array(
      'artist' => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'artist' => 'artist',
    ),
    'module' => 'system',
  );

  return $permissions;
}
