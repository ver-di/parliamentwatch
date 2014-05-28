<?php

function blank_preprocess_html(&$variables) {
    $variables['pw_tracking'] = block_get_blocks_by_region('pw_tracking');
}