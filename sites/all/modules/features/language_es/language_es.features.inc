<?php
/**
 * @file
 * language_es.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function language_es_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
