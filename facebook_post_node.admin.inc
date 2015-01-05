<?php
/**
 * @file facebook_post_node.admin.inc
 * Administration page callback allows setting up parameters of facebook application.
 */
/**
 * @Form builder. Configure facebook_post_node vocabulary.
 *
 * @ingroup forms
 * @see system_settings_form().
 */

function facebook_post_node_admin_settings() {


    $form['facebook_post_node_settings'] = array(
        '#type'        => 'fieldset',
        '#title'       => t('Users may configure the facebook application.'),
        '#collapsible' => TRUE,
        '#collapsed'   => FALSE,
    );
    $form['facebook_post_node_settings']['facebook_post_node_appId'] = array(
        '#type'          => 'textfield',
        '#title'         => t('Facebook application ID.'),
        '#default_value' => variable_get('facebook_post_node_appId'),
        '#size'          => 60,
        '#maxlenght'     => 128,
        '#required'      => TRUE,
    );
    $form['facebook_post_node_settings']['facebook_post_node_secret'] = array(
        '#type'          => 'textfield',
        '#title'         => t('Facebook application secret.'),
        '#default_value' => variable_get('facebook_post_node_secret'),
        '#size'          => 60,
        '#maxlenght'     => 128,
        '#required'      => TRUE,
    );
    //$form['#submit'][] = 'facebook_post_node_admin_settings_submit';
    return system_settings_form($form);
}
