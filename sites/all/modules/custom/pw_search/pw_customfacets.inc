<?php

Function pw_search_facetapi_filters()
{
    return array(
        'rewrite_items' => array(
            'handler' => array(
                'label' => t('Rewrite facet items via callback function'),
                'class' => 'FacetapiFilterRewriteItems',
            ),
        ),
    );
}
