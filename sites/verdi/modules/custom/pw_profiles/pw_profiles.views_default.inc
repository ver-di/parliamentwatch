<?php
/**
 * @file
 * pw_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pw_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pw_candidate_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'PW Candidate Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PW Candidate Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'user_slider_item';
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'user_slider_item';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="kassen-filter clearfix">
    <div class="kassen-filter-item-group clearfix">
        <h3>Krankenversicherung:</h3>
        <div class="kassen-filter-item" data-kassen-filter="dak_gesundheit">
            <label for="filter_dak">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/dak.png" alt="DAK" class="img-responsive">
                <input type="checkbox" id="filter_dak">
            </label>
        </div>
        <div class="kassen-filter-item" data-kassen-filter="kkh">
            <label for="filter_kkh">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/kkh.png" alt="KKH" class="img-responsive">
                <input type="checkbox" id="filter_kkh">
            </label>
        </div>
        <div class="kassen-filter-item" data-kassen-filter="tk">
            <label for="filter_tk">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/tk.png" alt="TK" class="img-responsive">
                <input type="checkbox" id="filter_tk">
            </label>
        </div>
        <div class="kassen-filter-item" data-kassen-filter="barmer">
            <label for="filter_barmer">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/barmer.png" alt="Barmer" class="img-responsive">
                <input type="checkbox" id="filter_barmer">
            </label>
        </div>
    </div>
    <div class="kassen-filter-item-group clearfix" data-kassen-filter="drv_bund">
        <h3>Rentenversicherung:</h3>
        <div class="kassen-filter-item">
            <label for="filter_drv">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/drv.png" alt="Deutsche Rentenversicherung" class="img-responsive">
                <input type="checkbox" id="filter_drv">
            </label>
        </div>
    </div>
    <div class="kassen-filter-item-action">
        <a class="btn btn-lg" href=""><i class="fa fa-search"></i></a>
    </div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Parliament (field_user_parliament) */
  $handler->display->display_options['filters']['field_user_parliament_tid']['id'] = 'field_user_parliament_tid';
  $handler->display->display_options['filters']['field_user_parliament_tid']['table'] = 'field_data_field_user_parliament';
  $handler->display->display_options['filters']['field_user_parliament_tid']['field'] = 'field_user_parliament_tid';
  $handler->display->display_options['filters']['field_user_parliament_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_user_parliament_tid']['value'] = array(
    5 => '5',
    1 => '1',
    4 => '4',
    2 => '2',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_user_parliament_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_user_parliament_tid']['vocabulary'] = 'parliaments';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['pw_candidate_slider'] = array(
    t('Master'),
    t('PW Candidate Slider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="kassen-filter clearfix">
    <div class="kassen-filter-item-group clearfix">
        <h3>Krankenversicherung:</h3>
        <div class="kassen-filter-item" data-kassen-filter="dak_gesundheit">
            <label for="filter_dak">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/dak.png" alt="DAK" class="img-responsive">
                <input type="checkbox" id="filter_dak">
            </label>
        </div>
        <div class="kassen-filter-item" data-kassen-filter="kkh">
            <label for="filter_kkh">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/kkh.png" alt="KKH" class="img-responsive">
                <input type="checkbox" id="filter_kkh">
            </label>
        </div>
        <div class="kassen-filter-item" data-kassen-filter="tk">
            <label for="filter_tk">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/tk.png" alt="TK" class="img-responsive">
                <input type="checkbox" id="filter_tk">
            </label>
        </div>
        <div class="kassen-filter-item" data-kassen-filter="barmer">
            <label for="filter_barmer">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/barmer.png" alt="Barmer" class="img-responsive">
                <input type="checkbox" id="filter_barmer">
            </label>
        </div>
    </div>
    <div class="kassen-filter-item-group clearfix" data-kassen-filter="drv_bund">
        <h3>Rentenversicherung:</h3>
        <div class="kassen-filter-item">
            <label for="filter_drv">
                <img src="/sites/all/themes/custom/verdi/images/kassen_logo/drv.png" alt="Deutsche Rentenversicherung" class="img-responsive">
                <input type="checkbox" id="filter_drv">
            </label>
        </div>
    </div>
    <div class="kassen-filter-item-action">
        <a class="btn btn-lg" href=""><i class="fa fa-search"></i></a>
    </div>
</div>'),
    t('Block'),
  );
  $export['pw_candidate_slider'] = $view;

  return $export;
}
