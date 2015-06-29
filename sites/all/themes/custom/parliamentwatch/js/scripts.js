jQuery(window) // https://www.drupal.org/node/1478648
	// fire mmenu adn sticky events for mobile only
    .on( "resize load", function() {
        jQuery('body').bind('responsivelayout', function(e, d) {
			$(".responsive-layout-mobile #nav").mmenu({
				classes: "mm-light",         
				searchfield: {
					add: true,
					search: true,
					placeholder: Drupal.t('Menüpunkt suchen'),
					noResults: Drupal.t('Keine Ergebnisse gefunden.')
				},
				counters: {
					add: true,
					update: true
				}
			})
			.on( "opening.mm", function() {
				var scrollTop = $(window).scrollTop();
				$('#region-branding').css('top',scrollTop);
			})
			.on( "closed.mm", function() {
				$('#region-branding').css('top',0);
			});      
			$("#hamburger").click(function() {
				$("#nav").trigger("open.mm");
			});
			$('.responsive-layout-mobile #region-branding').stick_in_parent({parent:'#page'});
			$('.responsive-layout-normal #region-branding').trigger("sticky_kit:detach");;
        });
});


jQuery(document).ready(function() {
  
  function toggle_details() {
    $('.toggle-details').on('click', function(e) {
      e.preventDefault();
      $(this).find('.icon-arrow-right').toggleClass('icon-arrow-down');
      $(this).closest('tr').next('.toggle-details-content').fadeToggle();
    });
  }
  toggle_details();
  $(document).ajaxComplete(function() {
    $('.toggle-details').unbind('click');
    toggle_details();
  });

// show voting details on click

    $('li .item.vote .pw-arrow-box-trigger').on('mousedown focus', function(e) {
      e.preventDefault();
      $(this).parents('ul').find('.pw-arrow-box-trigger').not(this).next('.item-politician').hide();
      $(this).next('.item-politician').fadeToggle('fast');
      if($(this).next('.item-politician').visible() == false){
        $('html, body').animate({
              scrollTop: $(this).next('.item-politician').offset().top
        }, 1000);
      }
    });
    $('li .item.vote .pw-arrow-box-trigger').on('click', function(e) {
      e.preventDefault();
    });

    $('li .item-politician .icon-close').on('click', function(e) {
      $(this).parents('.item-politician').hide();
    });

// reset jquery ui slider on profile list AW-1965 https://www.drupal.org/node/1264316

    $("#views-exposed-form-profile-list-rev-grid #edit-reset" ).on( "click", function() {
        history.go(0);
    });


// expand active user revision block in user revision switch

    if ($('#block-views-pw-announcement-slideshow .views-slideshow-controls-top .views-content-field-announce-tab-title').length < 2) {
        $('#block-views-pw-announcement-slideshow .views-slideshow-controls-top').hide();
    }
// expand active user revision block in user revision switch

    if ($('#block-views-pw-user-revision-switch-block .link-profile.active').length == 0) {
        $('#block-views-pw-user-revision-switch-block .pw-list-expander:first-child .link-profile').addClass('active');
    }
    $('#block-views-pw-user-revision-switch-block .link-profile.active').parents('#block-views-pw-user-revision-switch-block fieldset').removeClass('collapsed');


// automatically adjust textarea heigh  with jQuery Autosize

    $('textarea').autosize();

// change slideshow controls links in pw_kandidatencheck

    $(".view-pw-kandidatencheck .views_slideshow_controls_text_next a").text(Drupal.t('next thesis'));
    $(".view-pw-kandidatencheck .views_slideshow_controls_text_previous a").text(Drupal.t('previous thesis'));
     
// attach values of bef slider to handles

    $('.slider-filter-processed .views-widget .form-item label').hide(); // hide values
    $.pw_befslidervalue = function() {
        $('.slider-filter-processed').each(function() {
            $(this).find('.form-item').first().position( // position min value
            {
              of: $(this).find('.ui-slider-handle').first()
            });
            $(this).find('.form-item').last().position( // position max value
            {
              of: $(this).find('.ui-slider-handle').last()
            });
        });
    }
    $.pw_befslidervalue(); // execute on page load
    $('.views-exposed-widget').on('slidecreate slide slidechange', function() { // execute on slider change by sliding or cklicking
        $.pw_befslidervalue();
    });


// slice text and add expander link (http://plugins.learningjquery.com/expander/)
        
    $(window).load(function () { //https://drupal.org/node/1478648
        var t_readmore = 'weiterlesen';
        var t_readless = '';
        function pw_expand() {
          $('.responsive-layout-normal .pw-expander').expander({
              moreClass: 'expander-expand',
              lessClass: 'expander-shorten',
              slicePoint:       400,  // default is 100
              expandText:       t_readmore, // default is 'read more'
              userCollapseText: t_readless,  // default is 'read less'
              expandEffect:     'fadeIn',
              beforeExpand: function() {
                $(this).find('.details').css({display: 'inline'});
              }
          });
        }
        pw_expand();
        $(document).ajaxComplete(function() {
          pw_expand();
        });
    });


////// Make blocks expandable only for responsive mobile version
        
    $(window).load(function () { //https://drupal.org/node/1478648
        $('.responsive-layout-mobile #pw-block-user-basics h2').addClass('pw-mobile-expanded');
        $('.responsive-layout-mobile #pw-block-user-basics h3').addClass('pw-mobile-expanded');
        $('.responsive-layout-mobile .pw-expandable-mobile h2,.responsive-layout-mobile .pw-expandable-mobile h3').click(function(){
        //alert();
            $(this).parent('div').find('.view').slideToggle('slow');
            $(this).toggleClass('pw-mobile-expanded');
        });
    });
    

////// switch view mode in questions and answers

    jQuery(".view-id-profile_questions_answers .attachment").addClass("js-hide");
    jQuery("#form-view-mode-switcher .view-mode-full").click(function () {
        jQuery("#pw-block-questions-and-answers > .view-id-profile_questions_answers > .view-content").removeClass("js-hide");
        jQuery(".view-id-profile_questions_answers .attachment").addClass("js-hide");
    });
    jQuery("#form-view-mode-switcher .view-mode-teaser").click(function () {
        jQuery("#pw-block-questions-and-answers > .view-id-profile_questions_answers > .view-content").addClass("js-hide");
        jQuery(".view-id-profile_questions_answers .attachment").removeClass("js-hide");
    });

////// respect view mode on views ajax filter call

    jQuery(document).ajaxComplete(function(e, xhr, settings) {
        var radio1 = jQuery('.view-mode-full.form-radio').attr('checked');
        var radio2 = jQuery('.view-mode-teaser.form-radio').attr('checked');

        if(radio1 == 'checked')
        {
            jQuery("#pw-block-questions-and-answers > .view-id-profile_questions_answers > .view-content").removeClass("js-hide");
            jQuery(".view-id-profile_questions_answers .attachment").addClass("js-hide");
        }

        if(radio2 == 'checked')
        {
            jQuery("#pw-block-questions-and-answers > .view-id-profile_questions_answers > .view-content").addClass("js-hide");
            jQuery(".view-id-profile_questions_answers .attachment").removeClass("js-hide");
        }
    });

////// open external links in new window

    var domainparts = location.hostname.split('.');
    var sndleveldomain = domainparts.slice(-2).join('.');

    jQuery("#region-content a[href*='http://']:not([href*='"+sndleveldomain+"']),#region-content a[href*='https://']:not([href*='"+sndleveldomain+"'])")
        .attr("rel","external")
        .attr("target","_blank")
        .addClass("external");
    // remove class .external from images and slider
    jQuery("#region-content a[href*='http://']:not([href*='"+sndleveldomain+"']) img,#zone-content a[href*='https://']:not([href*='"+sndleveldomain+"']) img").parent('a').removeClass('external');
    jQuery("#region-content h3 a[href*='http://']:not([href*='"+sndleveldomain+"']),#zone-content h3 a[href*='https://']:not([href*='"+sndleveldomain+"'])").removeClass('external');
    jQuery('.view-slider a.external').removeClass('external');
    jQuery("h3 a").removeClass('external');

////// intelligent on:blur

    jQuery("input[type=text],textarea").blur(function() {
        if(jQuery(this).val() == "") {
            jQuery(this).val(jQuery(this).attr("alt"));
        }
    });

// intelligent on:focus

    jQuery("input[type=text],textarea").focus(function() {
        if(jQuery(this).val() == jQuery(this).attr("alt")) {
            jQuery(this).val("");
        }
    });

////// slide to comments

    jQuery(".node-blogpost.view-mode-full .comment-count")
        .css( "cursor", "pointer" )
        .click(function () {
            goToByScroll("comments");
            return false;
    });

////// change youtube links to open them in a colorbox (http://drupal.org/node/1368274)

    jQuery('a.colorbox-load').each(function(){
        var newUrl = jQuery(this).attr('href').replace('youtube.com/watch?v=', 'youtube.com/v/');
        jQuery(this).attr('href', newUrl);
    });

////// change sharethis defaults

    stLight.options({newOrZero:"zero"});

////// add a sharethis link to an anchor

    jQuery('.add-sharethis').each(function (i) {

        //revision vid
        var vid = jQuery(this).closest('div').attr('vid');
        var id = jQuery(this).closest('div').attr('id');

        //check if the path containes archive
        var localPath = location.protocol + '//'+location.host+location.pathname;
        var isArchivePage = localPath.indexOf("archive");

        var st_url;

        if(typeof vid != "undefined" && isArchivePage == -1)
        {
            st_url = localPath + '/archive/' + vid + "/" + id;
        }
        else {
            st_url = localPath + '/' + id;
        }
        // for anchor
        var link_title = jQuery(this).closest('div').attr('title');
        jQuery(this).append('<span class="sharethis-wrapper"><span class="st_sharethis_hcount" onhover="false" st_title="'+link_title+'" st_url="'+st_url+'" displayText="'+link_title+'"></span></span>');
    
    });

////// call check url if sharethisbutton is clicked

    jQuery(".sharethis-wrapper").click(function() {
        var st_url =  $(this).children("span").attr("st_url");
        if(st_url != undefined)callCheckURL(st_url);
    });


//// Report Link

   jQuery("a.report_message").click(function () {
		if(!confirm('Soll sich ein Moderator Frage und Antwort angeschauen?')){
			return false;
		}
		var message_id = jQuery(this).attr('id').substr(jQuery(this).attr('id').indexOf('_') + 1);
		var url = 'https://mod.parliamentwatch.org/piraten/api/message/' + message_id + '/report';
		jQuery.get(url);
		alert('Vielen Dank! Ein Moderator wird sich darum kümmern.');
    });


////// Navigation highlighting

    jQuery("#nice-menu-1 li").mouseenter(function(){
        jQuery("#nice-menu-1 li.active-trail").removeClass('active-trail').addClass('active-invisible');
    }).mouseleave(function(){
        jQuery("#nice-menu-1 li.active-invisible").removeClass('active-invisible').addClass('active-trail');
    });


////// Info icon

    jQuery(document).on("click",".ic-info",function(){  
        jQuery(this).find(".info-content").fadeToggle("slow", "linear");
        jQuery(".ic-info .info-content").not(jQuery('.info-content', this)).fadeOut("slow", "linear");
    });


////// Print icon

    jQuery(".external").click(function(){
        jQuery(this).attr('target', '_blank');
    });
    
    
////// Scroll to "Questions and Answers"

    function goToByScroll(id){
        jQuery('html,body').animate({scrollTop: jQuery("#"+id).offset().top},'1000');
    }
    jQuery(".page-user .link-qa").click(function () {
        goToByScroll("pw-block-questions-and-answers");
        return false;
    });
    
    
    jQuery(".pw-collapsible .fieldset-wrapper").hide();       
    jQuery(".pw-collapsible .fieldset-legend").click(function () {
        $(this).parent().parent().find('.fieldset-wrapper').slideToggle("fast",function(){
            $.colorbox.resize({
                reposition: 'false'
            });
        });
    });

    jQuery('body').bind('responsivelayout', function() {
        
        jQuery(".responsive-layout-mobile .link-question").click(function () {
            goToByScroll("pw_block_user_questionform");
            return false;
        });        
        /*jQuery(".responsive-layout-normal .link-question").click(function () {
            $(".responsive-layout-normal .link-question").colorbox({
                inline:true,
                href:'#pw_block_user_questionform',
                width: '1000px',
                maxWidth: '100%',
                height: '800px',
                onComplete:function(){
                    $.colorbox.resize();
                }
            });
        });*/
    
    } );
    jQuery(".anchor-to-top a").click(function () {
        goToByScroll("page");
        return false;
    });

});

/////// change images on image maps

function changeImage(imageSRC2){
    var imageSRC = document.getElementById('map').src;
    document.getElementById('map').src=imageSRC2;
}

//////  call checkurl for sharethis node update cue

function callCheckURL(st_url) {
    var st_url = st_url;
    //var localPath = location.protocol + '//'+location.host+location.pathname;
    var check_url = "/sharethis_check?url=";
    var complete_url = check_url+st_url;
    //console.log(complete_url);
    $.ajax({
        type: "GET",
        url : complete_url
    }).done(function() {
        //console.log("done");
    });
}
