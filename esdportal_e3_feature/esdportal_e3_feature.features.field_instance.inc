<?php
/**
 * @file
 * esdportal_e3_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function esdportal_e3_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'e3_note-observation_log-field_note_duration'
  $field_instances['e3_note-observation_log-field_note_duration'] = array(
    'bundle' => 'observation_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Duration is automatically calculated.
The duration is displayed in h:mm.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm',
          'leading_zero' => TRUE,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 85,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_note_duration',
    'label' => 'Observation Duration',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'entity_translation_sync' => FALSE,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'e3_note-session_log-field_note_duration'
  $field_instances['e3_note-session_log-field_note_duration'] = array(
    'bundle' => 'session_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Duration is automatically calculated.
The duration is displayed in h:mm.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hms_field',
        'settings' => array(
          'format' => 'h:mm',
          'leading_zero' => TRUE,
        ),
        'type' => 'hms_default_formatter',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'e3_note',
    'field_name' => 'field_note_duration',
    'label' => 'Session Duration',
    'required' => 0,
    'settings' => array(
      'default_description' => 1,
      'entity_translation_sync' => FALSE,
      'format' => 's',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'hms_field',
      'settings' => array(),
      'type' => 'hms_default_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-webform-body'
  $field_instances['node-webform-body'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Duration is automatically calculated.
The duration is displayed in h:mm.');
  t('Observation Duration');
  t('Session Duration');

  return $field_instances;
}
