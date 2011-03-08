<?php

/**
 * Returns the rendered default logo.
 *
 * @ingroup themeable
 */
function theme_blockify_default_logo($logo_path) {
  $img = '<img src="'. $logo_path .'" id="blockify-theme-default-logo" />';
  $output = l($img, '<front>', array('html' => TRUE,
      'attributes' => array('id' => 'logo', 'rel' => 'home')));
  return $output;
}

/**
 * Returns the rendered custom logo.
 *
 * @ingroup themeable
 */
function theme_blockify_custom_logo($logo_path) {
  $img = '<img src="'. $logo_path .'" id="blockify-theme-custom-logo" />';
  $output = l($img, '<front>', array('html' => TRUE,
      'attributes' => array('id' => 'logo', 'rel' => 'home')));
  return $output;
}

/**
 * Returns the rendered site name.
 *
 * @ingroup themeable
 */
function theme_blockify_site_name($site_name) {
  return $site_name;
}

/**
 * Returns the rendered site slogan.
 *
 * @ingroup themeable
 */
function theme_blockify_site_slogan($site_slogan) {
  return $site_slogan;
}

/**
 * Returns the rendered mission.
 *
 * @ingroup themeable
 */
function theme_blockify_mission($site_mission) {
  return $site_mission;
}

/**
 * Returns the rendered footer message.
 *
 * @ingroup themeable
 */
function theme_blockify_footer_message($site_footer) {
  return $site_footer;
}

/**
 * Returns the rendered page title.
 *
 * @ingroup themeable
 */
function theme_blockify_page_title($page_title) {
  return '<h2>' . $page_title . '</h2>';
}

/**
 * Returns the rendered breadcrumb.
 *
 * @ingroup themeable
 */
function theme_blockify_breadcrumb($page_breadcrumb) {
  return theme('breadcrumb', $page_breadcrumb);
}
