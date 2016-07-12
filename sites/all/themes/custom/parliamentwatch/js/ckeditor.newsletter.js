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
  CKEDITOR.addTemplates( 'custom', {
  	// The name of sub folder which hold the shortcut preview images of the
  	// templates.
    imagesPath: CKEDITOR.getUrl( CKEDITOR.plugins.getPath( 'templates' ) + 'templates/images/' ),
  
  	// The templates definitions.
  	templates: [
  		// {
    	// 	title: 'Spendenstörer',
    	// 	image: 'template1.gif',
    	// 	description: 'Ein Block mit Hintergrundbild und Button',
    	// 	html: '<h3>Spenden Sie einmalig oder fördern Sie regelmäßig<h3>'
    	// 	      +'Denn Spenden sichern die Unabhängigkeit und Überparteilichkeit von abgeordnetenwatch.de '
    	// },
  		// {
    	// 	title: 'Bild mit Text',
    	// 	image: 'template1.gif',
    	// 	description: 'Vorlage für Text mit Bild',
    	// 	html: '<div>'
    	// 	      +'<h3>Überschrift</h3>'
      //         +'<div class="file-image float-left">'
      //         +'<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template1.gif">'
      //         +'<div class="copyright">© copyright</div>'			
      //         +'</div>'
      //         +'Lorem ipsum ad qui amet dolore, vitae cetero quaerendum mel ea. Facilis fastidii duo no. Viris partiendo ius no, alia animal nam at. Feugait imperdiet ius an, no quis facer lucilius vis. Aliquam saperet contentiones ex pro, id idque offendit ius. Fugit suavitate ad eam, ut essent debitis cum. Cu duo iudico instructior. Sea te choro perfecto, per eu meis nonumy percipit. Ut mea sint constituam, cu pro impedit constituam. Et diam wisi tollit mel, te has atqui veritus. Falli volumus ullamcorper id vis, fugit debet ei pri. Mea esse saperet oporteat cu, sumo interesset an cum. Facer expetenda ius te, sint mundi aperiri no est, mollis salutandi quo ne. No dicta errem sed. Mea ei detraxit patrioque, sumo eirmod ea vix. Et dicit omittantur eam, et vix modo eius vidit. Vis et pertinacia abhorreant constituam, eum at quod vero. Ferri consectetuer sed no, ex vix nonumy posidonium quaerendum. Eum in nostro omnesque philosophia, sit veniam recteque et. Et sit facer honestatis, sonet propriae officiis ne vel, est atqui verear eruditi eu. Ut duo augue deserunt mnesarchum, an per option dignissim, cu cum convenire consulatu deterruisset. Cu vel debet ludus, docendi nominati philosophia ex his. Ad legendos expetendis duo, sed et delicata pericula torquatos. Temporibus delicatissimi eu nam, mel ea ipsum fabulas tractatos, at vim omnis clita omittantur. Ad graeco scriptorem eos. Nam ut nulla congue singulis. Ea his doctus interpretaris, at qui aliquyam complectitur. Vix hinc habeo appareat an, at modo regione tamquam sed. Vim et tritani viderer, puto evertitur nam cu. Sed odio dicunt reprimique ex, ullum noluisse instructior ei sed, ei ius nostro corrumpit. Nec mundi equidem consulatu no. Sea an prodesset intellegat, usu dicit aperiam ut. Usu cu animal meliore. Platonem theophrastus duo ea, eum no alia ludus. Assentior referrentur quo ex. Usu id causae corrumpit patrioque, ei putant nonummy nec, ne nisl laudem petentium mea. Exerci instructior cu qui. Cum probo scribentur ut. Mei pertinax suscipiantur an. Nisl pertinax ex quo, eos esse ornatus at. Usu quidam definitionem no, eu mel quem mazim pertinax. Quodsi percipit consetetur at vim, eam omnis option explicari et. Pri at liber labores, his an utinam labore aperiam. Ei eos justo omnesque reformidans. Inani detraxit voluptatum ut pro. An sit posse probatus inimicus. Magna vivendo deseruisse has at, meis modus molestiae an has. Eam iudicabit constituam mediocritatem ne.</div>'
      //         +'<div class="clear text-right"><a href="#">weiterlesen</a></div>'
  	  // },
  		// {
    	// 	title: 'Spendenbutton',
    	// 	image: 'template1.gif',
    	// 	description: 'Zentrierter Button',
    	// 	html: '<div class="text-center">'
    	// 	      +'<a href="http://www.abgeordnetenwatch.de/node/10508" class="button">Spenden</a>'
      //         +'</div>'
  	  // },
      {
        title: 'Image container with ©opyright',
        image: 'template_default_3.gif',
        description: 'A container with an image and a subline floating to the left.',
        html: '<div class="file-image float-left">'
              +'<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template_default_3.gif">'
              +'<div class="copyright">©opyright</div>'
              +'</div>'
      },
      {
        title: 'Image container with ©opyright',
        image: 'template_default_4.gif',
        description: 'A container with an image and a subline floating to the right.',
        html: '<div class="file-image float-right">'
              +'<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template_default_4.gif">'
              +'<div class="copyright">©opyright</div>'
              +'</div>'
      }
  	]
  })
}