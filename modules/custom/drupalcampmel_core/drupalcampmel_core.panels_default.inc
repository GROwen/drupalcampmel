<?php
/**
 * @file
 * drupalcampmel_core.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function drupalcampmel_core_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'about';
  $mini->category = 'DrupalCampMel';
  $mini->admin_title = 'About';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'raw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About';
  $display->uuid = '6fee49a0-f181-4827-9cab-ec2cb55f9d61';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-79836f6b-904b-40dc-95f2-cba49b3e5c13';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Unconference',
      'body' => 'DrupalCampMelbourne is a two day unconference; one day of ad-hoc sessions followed by a day of partially mentored code sprinting.',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h3',
          'class_enable' => 1,
          'class' => 'pane-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-sm-4',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '79836f6b-904b-40dc-95f2-cba49b3e5c13';
    $display->content['new-79836f6b-904b-40dc-95f2-cba49b3e5c13'] = $pane;
    $display->panels['content'][0] = 'new-79836f6b-904b-40dc-95f2-cba49b3e5c13';
    $pane = new stdClass();
    $pane->pid = 'new-8acc1e6a-9415-41c5-9e5b-d5c6ea173c78';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Have your say',
      'body' => 'DrupalCampMelbourne is a two day unconference; one day of ad-hoc sessions followed by a day of partially mentored code sprinting.',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h3',
          'class_enable' => 1,
          'class' => 'pane-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-sm-4',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8acc1e6a-9415-41c5-9e5b-d5c6ea173c78';
    $display->content['new-8acc1e6a-9415-41c5-9e5b-d5c6ea173c78'] = $pane;
    $display->panels['content'][1] = 'new-8acc1e6a-9415-41c5-9e5b-d5c6ea173c78';
    $pane = new stdClass();
    $pane->pid = 'new-5024e343-de49-41a0-8852-20e587219d29';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Who should attend?',
      'body' => 'You should, and so should all your friends and/or colleagues. DrupalCampMelbourne is for everyone, mo matter your level of experience.',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h3',
          'class_enable' => 1,
          'class' => 'pane-title',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-sm-4',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5024e343-de49-41a0-8852-20e587219d29';
    $display->content['new-5024e343-de49-41a0-8852-20e587219d29'] = $pane;
    $display->panels['content'][2] = 'new-5024e343-de49-41a0-8852-20e587219d29';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-79836f6b-904b-40dc-95f2-cba49b3e5c13';
  $mini->display = $display;
  $export['about'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'credits';
  $mini->category = 'DrupalCampMel';
  $mini->admin_title = 'Credits';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'raw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
    ),
    'content' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '32c140b8-63a7-4318-9ade-10e51116bf3b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-33231a78-1fba-439b-8443-2c0de1a6802a';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Not for profit',
      'body' => 'This event is not intended to generate a profit. Any incidental profit will be incorporated back to the <a href="https://assoc.drupal.org/">Drupal Association</a> (our legal entity) and will be available for the funding of future Melbourne Drupal Camps.',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-sm-6',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '33231a78-1fba-439b-8443-2c0de1a6802a';
    $display->content['new-33231a78-1fba-439b-8443-2c0de1a6802a'] = $pane;
    $display->panels['content'][0] = 'new-33231a78-1fba-439b-8443-2c0de1a6802a';
    $pane = new stdClass();
    $pane->pid = 'new-8d0d1faa-1501-44a8-bebd-4e44b74d906a';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contributors',
      'body' => 'Brian Gilbert (<a href="https://www.drupal.org/user/139189">realityloop</a>), Guy Owen (<a href="https://www.drupal.org/user/1159450">GRO</a>), Jarkko Oksanen (<a href="https://www.drupal.org/user/2352292">jOksanen</a>), Luis Saavedra (<a href="https://www.drupal.org/user/373022">Luisga</a>), Stuart Clark (<a href="https://www.drupal.org/user/103796">Deciphered</a>)',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => 'h2',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => 'div',
          'class_enable' => 1,
          'class' => 'col-sm-6',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 0,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8d0d1faa-1501-44a8-bebd-4e44b74d906a';
    $display->content['new-8d0d1faa-1501-44a8-bebd-4e44b74d906a'] = $pane;
    $display->panels['content'][1] = 'new-8d0d1faa-1501-44a8-bebd-4e44b74d906a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-33231a78-1fba-439b-8443-2c0de1a6802a';
  $mini->display = $display;
  $export['credits'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'submit_session';
  $mini->category = 'DrupalCampMel';
  $mini->admin_title = 'Submit a session';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'raw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '21ff43cf-7916-4a3e-8b1c-e1ed292b04b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1542a6b7-e827-4eed-9a82-c3ca80388f82';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Submit your session now!',
      'body' => '<p>This camp works best when the attendees present something, this means you too!</p>
<p>Things you might like to talk about:</p>
<ul>
    <li>How to use a module, group of modules or a Drupal distribution</li>
    <li>Case study for one of your projects</li>
    <li>Demonstartion of something interesting to the Drupal community</li>
    <li>Open discussion on a subject you are interested in</li>
    <li>Ask the community for input on a problem your experiencing</li>
    </ul>
<div class="center"><a href="/node/add/session" class="btn btn-lg btn-primary">Add your session</a></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1542a6b7-e827-4eed-9a82-c3ca80388f82';
    $display->content['new-1542a6b7-e827-4eed-9a82-c3ca80388f82'] = $pane;
    $display->panels['content'][0] = 'new-1542a6b7-e827-4eed-9a82-c3ca80388f82';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1542a6b7-e827-4eed-9a82-c3ca80388f82';
  $mini->display = $display;
  $export['submit_session'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'tickets';
  $mini->category = 'DrupalCampMel';
  $mini->admin_title = 'Tickets';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'raw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ee9862d4-4c5e-49bb-8db4-90304e511e61';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1241e04d-37f0-40e1-979f-c022dcfbe142';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'entityform_block-register_interest';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1241e04d-37f0-40e1-979f-c022dcfbe142';
    $display->content['new-1241e04d-37f0-40e1-979f-c022dcfbe142'] = $pane;
    $display->panels['content'][0] = 'new-1241e04d-37f0-40e1-979f-c022dcfbe142';
    $pane = new stdClass();
    $pane->pid = 'new-7c455645-1bb3-4de4-95ab-ba25384f038a';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'formblock-user_register';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Tickets',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c455645-1bb3-4de4-95ab-ba25384f038a';
    $display->content['new-7c455645-1bb3-4de4-95ab-ba25384f038a'] = $pane;
    $display->panels['content'][1] = 'new-7c455645-1bb3-4de4-95ab-ba25384f038a';
    $pane = new stdClass();
    $pane->pid = 'new-4e99ec33-3782-49dd-b021-2a8d0856b048';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Days',
      'body' => '<h4>Day 1 - Friday 27th of October</h4>
First day of DrupalCamp Melbourne 2015 will be focused on sessions, networking and learning Drupal. 
<h4>Day 2 - Saturday 28th of October</h4>
On the second day we will hold a code sprint. This is a great place to come to contribute to Drupal and learn Drupal.

Both days tickets will include <b>lunch</b>.',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-md-6',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4e99ec33-3782-49dd-b021-2a8d0856b048';
    $display->content['new-4e99ec33-3782-49dd-b021-2a8d0856b048'] = $pane;
    $display->panels['content'][2] = 'new-4e99ec33-3782-49dd-b021-2a8d0856b048';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['tickets'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'where';
  $mini->category = 'DrupalCampMel';
  $mini->admin_title = 'Where';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'raw';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'content' => NULL,
    ),
    'middle' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'Where';
  $display->uuid = '159b967e-1784-4ce7-b11c-44219ef304ea';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2571f825-40de-4fc2-918d-2cbf8dab9bea';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Directions',
      'title' => '',
      'body' => '<p>Catch Tram <a href="http://ptv.vic.gov.au/route/view/2903" target="_blank">48</a> or <a href="http://ptv.vic.gov.au/route/view/3343" target="_blank">11</a> to stop D18 where it’s just a 3 minute walk to:</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => 'div',
          'attributes' => array(
            'id' => '',
            'class' => 'col-sm-12',
          ),
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2571f825-40de-4fc2-918d-2cbf8dab9bea';
    $display->content['new-2571f825-40de-4fc2-918d-2cbf8dab9bea'] = $pane;
    $display->panels['content'][0] = 'new-2571f825-40de-4fc2-918d-2cbf8dab9bea';
    $pane = new stdClass();
    $pane->pid = 'new-603a49e7-6adf-461b-90a6-554893e292f9';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Location',
      'title' => '',
      'body' => '<p>&nbsp;</p>
<h3>Library At The Dock</h3><br>
107 Victoria Harbour Promenade<br>
Docklands<br>
VIC 3008',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => 'div',
          'attributes' => array(
            'id' => '',
            'class' => 'column col-sm-6',
          ),
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '603a49e7-6adf-461b-90a6-554893e292f9';
    $display->content['new-603a49e7-6adf-461b-90a6-554893e292f9'] = $pane;
    $display->panels['content'][1] = 'new-603a49e7-6adf-461b-90a6-554893e292f9';
    $pane = new stdClass();
    $pane->pid = 'new-eb0b8ca4-46c2-4a88-8365-bec057712a76';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Map',
      'title' => '',
      'body' => '<iframe width="100%" frameborder="0" style="border:0" src="https://www.google.com/maps/embed/v1/place?key=AIzaSyAjBQD17FoR341SBcPnqU-KpFTsw7i-OW8&amp;q=Library+At+The+Dock">
</iframe>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title' => array(
          'element' => 'no_wrapper',
          'attributes' => array(
            'id' => '',
            'class' => '',
          ),
        ),
        'content' => array(
          'element' => 'div',
          'attributes' => array(
            'id' => '',
            'class' => 'col-sm-6',
          ),
        ),
        'theme' => 0,
      ),
      'style' => 'wrapper_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eb0b8ca4-46c2-4a88-8365-bec057712a76';
    $display->content['new-eb0b8ca4-46c2-4a88-8365-bec057712a76'] = $pane;
    $display->panels['content'][2] = 'new-eb0b8ca4-46c2-4a88-8365-bec057712a76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2571f825-40de-4fc2-918d-2cbf8dab9bea';
  $mini->display = $display;
  $export['where'] = $mini;

  return $export;
}
