<?php

/**
 * Returns the rendered logo.
 *
 * @ingroup themeable
 */
function theme_blockify_logo($logo_path) {
  $site_name = filter_xss_admin(variable_get('site_name', 'Drupal'));
  $path = preg_replace('|^' . base_path() . '|', '', $logo_path);

  $image = theme('image', $path, t('!site_name logo', array(
    '!site_name' => $site_name,
  )));

  return l($image, '<front>', array(
    'html' => TRUE,
    'attributes' => array(
      'id' => 'logo',
      'rel' => 'home',
      'title' => t('Return to the !site_name home page', array(
        '!site_name' => $site_name,
      )),
    ),
  ));
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
