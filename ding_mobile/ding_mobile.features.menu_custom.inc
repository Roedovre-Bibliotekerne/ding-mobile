<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ding_mobile_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-mobile-bottom-menu
  $menus['menu-mobile-bottom-menu'] = array(
    'menu_name' => 'menu-mobile-bottom-menu',
    'title' => 'Mobile bottom menu',
    'description' => '',
  );
  // Exported menu: menu-mobile-menu
  $menus['menu-mobile-menu'] = array(
    'menu_name' => 'menu-mobile-menu',
    'title' => 'Mobile menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Mobile bottom menu');
  t('Mobile menu');


  return $menus;
}
