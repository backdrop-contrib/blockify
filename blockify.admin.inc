<?php
/**
 * @file
 * Administrative page callbacks for the blockify module.
 */

/**
 * Blockify administration form.
 */
function blockify_admin_settings() {
  $form = array();

  $form['blockify_blocks'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Make the following blocks available'),
    '#options' => _blockify_get_blocks(FALSE),
    '#default_value' => config_get('blockify.settings', 'blockify_blocks'),
    '#description' => t('These blocks will be made available in places
      such as the blocks admin interface and the context UI.'),
  );
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );
  return $form;
}

function blockify_admin_settings_submit($form, &$form_state) {
  $config = config('blockify.settings');
  $config->set('blockify_blocks', $form_state['values']['blockify_blocks']);
  $config->save();
  backdrop_set_message(t('The configuration options have been saved.'));
}