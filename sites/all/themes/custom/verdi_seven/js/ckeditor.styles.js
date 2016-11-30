/*
 Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
 For licensing, see LICENSE.html or http://ckeditor.com/license
 */

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.config.templates = 'custom';
    CKEDITOR.addStylesSet( 'drupal',
        [
            /* Block Styles */

            /* Text Styles */


            /* Link Styles */
            { name : 'Button Default', element : 'a', attributes : { 'class' : 'btn btn-default' } },
            { name : 'Button Primary', element : 'a', attributes : { 'class' : 'btn btn-primary' } },
            { name : 'Button Default Large', element : 'a', attributes : { 'class' : 'btn btn-default btn-lg' } },
            { name : 'Button Primary Large', element : 'a', attributes : { 'class' : 'btn btn-primary btn-lg' } },
            { name : 'Aufzählungsliste', element : 'ul', attributes : { 'class' : 'arrow-item-list' } },
            { name : 'Nummerierte Liste', element : 'ol', attributes : { 'class' : 'numbered-list' } },

        ]);
    // Register a templates definition set named "default".
    CKEDITOR.addTemplates( 'custom', {
        // The name of sub folder which hold the shortcut preview images of the
        // templates.
        imagesPath: CKEDITOR.getUrl( CKEDITOR.plugins.getPath( 'templates' ) + 'templates/images/' ),

        // The templates definitions.
        templates: [
            {
                title: 'Info-Liste',
                image: 'template_info_list.gif',
                description: 'An unordered List wrapped with an gray-box.',
                html: '<div class="info-list">' +
                '<ul>' +
                '<li>List item 1</li>' +
                '<li>List item 2</li>' +
                '<li>List item 3</li>' +
                '</ul>' +
                '</div>'
            }
        ]
    });
}