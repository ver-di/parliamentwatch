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

            // These styles are already available in the "Format" drop-down list, so they are
            // not needed here by default. You may enable them to avoid placing the
            // "Format" drop-down list in the toolbar, maintaining the same features.
            /*
            { name : 'Paragraph'        , element : 'p' },
            { name : 'Heading 1'        , element : 'h1' },
            { name : 'Heading 2'        , element : 'h2' },
            { name : 'Heading 3'        , element : 'h3' },
            { name : 'Heading 4'        , element : 'h4' },
            { name : 'Heading 5'        , element : 'h5' },
            { name : 'Heading 6'        , element : 'h6' },
            { name : 'Preformatted Text', element : 'pre' },
            { name : 'Address'          , element : 'address' },

            { name : 'Blue Title'       , element : 'h3', styles : { 'color' : 'Blue' } },
            { name : 'Red Title'        , element : 'h3', styles : { 'color' : 'Red' } },

            /* Inline Styles */

            // These are core styles available as toolbar buttons. You may opt enabling
            // some of them in the "Styles" drop-down list, removing them from the toolbar.
            /*
            { name : 'Strong'           , element : 'strong', overrides : 'b' },
            { name : 'Emphasis'         , element : 'em'    , overrides : 'i' },
            { name : 'Underline'        , element : 'u' },
            { name : 'Strikethrough'    , element : 'strike' },
            { name : 'Subscript'        , element : 'sub' },
            { name : 'Superscript'      , element : 'sup' },
            */
            /* Text Styles */

            { name : 'Kommentare', element : 'span', attributes : { 'class' : 'comment-count' } },
            { name : 'Schlagworte', element : 'span', attributes : { 'class' : 'icon-taxonomy' } },
            /* Link Styles */
            { name : 'Weiterlesen', element : 'a', attributes : { 'class' : 'read-more' } },
            { name : 'Codex', element : 'a', attributes : { 'class' : 'read-codex' } },
            { name : 'Profil', element : 'a', attributes : { 'class' : 'link-profile' } },
            { name : 'Gruppe', element : 'a', attributes : { 'class' : 'link-committees' } },
            { name : 'Abstimmung', element : 'a', attributes : { 'class' : 'link-poll' } },
            { name : 'Download', element : 'a', attributes : { 'class' : 'link-download' } },
            { name : 'Petition', element : 'a', attributes : { 'class' : 'link-sign' } },
            { name : 'Event', element : 'a', attributes : { 'class' : 'link-calendar' } },
            { name : 'Video', element : 'a', attributes : { 'class' : 'link-video' } },
            { name : 'Audio-File', element : 'a', attributes : { 'class' : 'link-sound' } },
            { name : 'Aufzählungsliste', element : 'ul', attributes : { 'class' : 'arrow-item-list' } },
            { name : 'Nummerierte Liste', element : 'ol', attributes : { 'class' : 'numbered-list' } },

            /* Object Styles */

            {
                    name : 'Image on Left',
                    element : 'img',
                    attributes :
                    {
                            'style' : 'padding: 5px; margin-right: 5px',
                            'border' : '2',
                            'align' : 'left'
                    }
            },

            {
                    name : 'Image on Right',
                    element : 'img',
                    attributes :
                    {
                            'style' : 'padding: 5px; margin-left: 5px',
                            'border' : '2',
                            'align' : 'right'
                    }
            }
    ]);
    // Register a templates definition set named "default".
    CKEDITOR.addTemplates( 'custom', {
        // The name of sub folder which hold the shortcut preview images of the
        // templates.
        imagesPath: CKEDITOR.getUrl( CKEDITOR.plugins.getPath( 'templates' ) + 'templates/images/' ),

        // The templates definitions.
        templates: [
            {
                title: 'Floatbox',
                image: 'template_default_1.gif',
                description: 'A floating box on the left with headline.',
                html: '<div class="floatbox floatbox-left">' +
                    '<h3>' +
                        'Title goes here' +
                    '</h3>' +
                    '<h4>' +
                            'Subtitle goes here' +
                    '</h4>' +
                    '<ul>' +
                        '<li>List item 1</li>' +
                        '<li>List item 2</li>' +
                        '<li>List item 3</li>' +
                    '</ul>' +
                    '</div>'
            },
            {
                title: 'Floatbox',
                image: 'template_default_2.gif',
                description: 'A floating box on the right with headline.',
                html: '<div class="floatbox floatbox-right">' +
                    '<h3>' +
                        'Title goes here' +
                    '</h3>' +
                    '<h4>' +
                            'Subtitle goes here' +
                    '</h4>' +
                    '<ul>' +
                        '<li>List item 1</li>' +
                        '<li>List item 2</li>' +
                        '<li>List item 3</li>' +
                    '</ul>' +
                    '</div>'
            },
            {
                title: 'Image container with ©opyright',
                image: 'template_default_3.gif',
                description: 'A container with an image and a subline floating to the left.',
                html: '<div class="file-image float-left">' +
                        '<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template_default_3.gif">' +
                        '<div class="copyright">©opyright</div>' +
                    '</div>'
            },
            {
                title: 'Image container with ©opyright',
                image: 'template_default_4.gif',
                description: 'A container with an image and a subline floating to the right.',
                html: '<div class="file-image float-right">' +
                        '<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template_default_4.gif">' +
                        '<div class="copyright">©opyright</div>' +
                    '</div>'
            }
        ]
    });
}