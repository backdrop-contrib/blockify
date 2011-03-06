<?php
/**
 * Implementation of hook_theme().
 */
function blockify_theme() {
  return array(
    'blockify_theme_default_logo' => array(
      'arguments' => array('logo_path' => NULL),
    ),

    'blockify_theme_custom_logo' => array(
      'arguments' => array('logo_path' => NULL),
    ),

    'blockify_siteinfo_name' => array(
      'arguments' => array('site_name' => NULL),
    ),

    'blockify_siteinfo_slogan' => array(
      'arguments' => array('site_slogan' => NULL),
    ),

    'blockify_siteinfo_mission' => array(
      'arguments' => array('site_mission' => NULL),
    ),

    'blockify_siteinfo_footer' => array(
      'arguments' => array('site_footer' => NULL),
    ),

    'blockify_page_title' => array(
      'arguments' => array('page_title' => NULL),
     ),

     'blockify_page_breadcrumb' => array(
       'arguments' => array('page_breadcrumb' => NULL),
      ),
  );
}

/**
 * Themeable function for the default logo block.
 * TODO: use drupal_attributes()
 */
function theme_blockify_theme_default_logo($logo_path) {
  $img = '<img src="'. $logo_path .'" id="blockify-theme-default-logo" />';
  $output = l($img, '<front>', array('html' => TRUE,
      'attributes' => array('id' => 'logo', 'rel' => 'home')));
  return $output;
}

/**
 * Themeable function for the custom logo block.
 * TODO: use drupal_attributes()
 */
function theme_blockify_theme_custom_logo($logo_path) {
  $img = '<img src="'. $logo_path .'" id="blockify-theme-custom-logo" />';
  $output = l($img, '<front>', array('html' => TRUE,
      'attributes' => array('id' => 'logo', 'rel' => 'home')));
  return $output;
}

/**
 * Themeable function for the site name block.
 */
function theme_blockify_siteinfo_name($site_name) {
  return $site_name;
}

/**
 * Themeable function for the site slogan block.
 */
function theme_blockify_siteinfo_slogan($site_slogan) {
  return $site_slogan;
}

/**
 * Themeable function for the site mission block.
 */
function theme_blockify_siteinfo_mission($site_mission) {
  return $site_mission;
}

/**
 * Themeable function for the site footer block.
 */
function theme_blockify_siteinfo_footer($site_footer) {
  return $site_footer;
}

/**
 * Themeable function for the page title block.
 */
function theme_blockify_page_title($page_title) {
  return '<h2>' . $page_title . '</h2>';
}

/**
 * Themeable function for the page breadcrumb block.
 */
function theme_blockify_page_breadcrumb($page_breadcrumb) {
  return theme('breadcrumb', $page_breadcrumb);
}