<?php
/**
 * @file
 * training.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function training_image_default_styles() {
  $styles = array();

  // Exported image style: features_image.
  $styles['features_image'] = array(
    'label' => 'Features Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 65,
          'height' => 56,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function training_node_info() {
  $items = array(
    'featured_training' => array(
      'name' => t('Featured Training'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
