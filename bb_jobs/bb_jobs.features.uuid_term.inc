<?php
/**
 * @file
 * bb_jobs.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function bb_jobs_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'freelance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '04b058e4-7069-4a14-95b0-351978083e24',
    'vocabulary_machine_name' => 'job_type',
  );
  $terms[] = array(
    'name' => 'bediende - voltijds',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0ff44d0c-772d-45da-8e98-e0301a662791',
    'vocabulary_machine_name' => 'job_type',
  );
  $terms[] = array(
    'name' => 'bediende - halftijds',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b1d82b8d-5dd4-4c65-b111-0820b470dc53',
    'vocabulary_machine_name' => 'job_type',
  );
  return $terms;
}
