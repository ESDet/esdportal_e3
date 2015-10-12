<?php
/**
 * @file
 * esdportal_e3_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function esdportal_e3_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_note_duration'
  $field_bases['field_note_duration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_note_duration',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'hms_field',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'hms_field',
  );

  return $field_bases;
}
