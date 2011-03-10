<?php
/**
 * @file
 * Theme functions for the Blockify module.
 */

/**
 * Returns the rendered logo.
 *
 * @ingroup themeable
 */
function theme_blockify_logo($variables) {
  $site_name = filter_xss_admin(variable_get('site_name', 'Drupal'));

  // Strip the base_path from the beginning of the logo path.
  $path = preg_replace('|^' . base_path() . '|', '', $variables['logo_path']);

  $image = array(
    '#theme' => 'image',
    '#path' => $path,
    '#alt' => t('!site_name logo', array(
      '!site_name' => $site_name,
    ))
  );

  return l(render($image), '<front>', array(
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
function theme_blockify_site_name($variables) {
  $title = drupal_get_title();

  // If there is no page title set for this page, use an h1 for the site name.
  $tag = ($title !== '') ? 'span' : 'h1';

  return '<' . $tag . ' class="site-name">' . $variables['site_name'] . '</' . $tag . '>';
}

/**
 * Returns the rendered site slogan.
 *
 * @ingroup themeable
 */
function theme_blockify_site_slogan($variables) {
  return '<span class="site-slogan">' . $variables['site_slogan'] . '</span>';
}

/**
 * Returns the rendered page title.
 *
 * @ingroup themeable
 */
function theme_blockify_page_title($variables) {
  if ($variables['page_title'] !== '') {
    return '<h1>' . $variables['page_title'] . '</h1>';
  }
}

/**
 * Returns the rendered breadcrumb.
 *
 * @ingroup themeable
 */
function theme_blockify_breadcrumb($variables) {
  return theme('breadcrumb', $variables);
}
