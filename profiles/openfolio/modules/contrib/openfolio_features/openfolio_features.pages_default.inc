<?php
/**
 * @file
 * openfolio_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function openfolio_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Mobile Gallery',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gallery' => 'gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'browscap_access',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '48652616-65c1-4273-bf15-9879d140aac0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-617e9dee-fb4f-44bb-a843-406400bb01f9';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '617e9dee-fb4f-44bb-a843-406400bb01f9';
    $display->content['new-617e9dee-fb4f-44bb-a843-406400bb01f9'] = $pane;
    $display->panels['middle'][0] = 'new-617e9dee-fb4f-44bb-a843-406400bb01f9';
    $pane = new stdClass();
    $pane->pid = 'new-1dd5e75b-08b5-4095-90a3-03b7c64d58af';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_images-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1dd5e75b-08b5-4095-90a3-03b7c64d58af';
    $display->content['new-1dd5e75b-08b5-4095-90a3-03b7c64d58af'] = $pane;
    $display->panels['middle'][1] = 'new-1dd5e75b-08b5-4095-90a3-03b7c64d58af';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-617e9dee-fb4f-44bb-a843-406400bb01f9';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Gallery',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gallery' => 'gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '14289e58-ac63-443d-8ecc-9bd7ff15a6a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d482d966-fb29-4cb8-a0f3-22e8ecc48df9';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = 'd482d966-fb29-4cb8-a0f3-22e8ecc48df9';
    $display->content['new-d482d966-fb29-4cb8-a0f3-22e8ecc48df9'] = $pane;
    $display->panels['middle'][0] = 'new-d482d966-fb29-4cb8-a0f3-22e8ecc48df9';
    $pane = new stdClass();
    $pane->pid = 'new-91a892e7-4b2e-4476-842a-c87485ade987';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_images-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '91a892e7-4b2e-4476-842a-c87485ade987';
    $display->content['new-91a892e7-4b2e-4476-842a-c87485ade987'] = $pane;
    $display->panels['middle'][1] = 'new-91a892e7-4b2e-4476-842a-c87485ade987';
    $pane = new stdClass();
    $pane->pid = 'new-f5c998d3-926b-457b-ace0-fc43adc46b87';
    $pane->panel = 'middle';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f5c998d3-926b-457b-ace0-fc43adc46b87';
    $display->content['new-f5c998d3-926b-457b-ace0-fc43adc46b87'] = $pane;
    $display->panels['middle'][2] = 'new-f5c998d3-926b-457b-ace0-fc43adc46b87';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d482d966-fb29-4cb8-a0f3-22e8ecc48df9';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Slideshow page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'slideshow_page' => 'slideshow_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2885306f-e794-4898-ba26-766415958238';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3075bfef-91fd-44b0-befd-9229cc620a27';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshow_images-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3075bfef-91fd-44b0-befd-9229cc620a27';
    $display->content['new-3075bfef-91fd-44b0-befd-9229cc620a27'] = $pane;
    $display->panels['middle'][0] = 'new-3075bfef-91fd-44b0-befd-9229cc620a27';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}
