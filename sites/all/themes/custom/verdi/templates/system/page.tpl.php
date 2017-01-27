<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */
?>

<div class="container">
    <header id="header" role="banner">
        <div class="header_bg"></div>
        <div class="navbar">
            <div class="navbar-header">
                <?php if (!empty($primary_nav)): ?>
                    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse">
                        <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                    </button>
                <?php endif; ?>
                <div class="brand clearfix">
                    <div class="svg-container">
                        <a href="<?php print $front_page; ?>" title="Zurück zur Startseite von sozialversicherung.watch"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 127.1 106.7"><path fill="none" stroke="#F29100" stroke-width="5" stroke-miterlimit="10" d="M33.1 74.2L20.7 78 3.1 20.7l19.1-5.8m45.4 12.3l-7.1-24-18.4 5.6"/><path fill="#F29100" d="M39.9 30.3c-1 .8-1.8 1.7-2.6 2.6l3.3 2.7c.6-.7 1.3-1.4 2.1-2 .3-.3.6-.5 1-.8 1-.7 2-1.3 3.1-1.7l-1.6-4c-1.4.6-2.8 1.3-4 2.2-.5.4-.9.7-1.3 1zm-3.4-4.1c-1.2 1-2.4 2.2-3.4 3.4l3.3 2.7c.8-1 1.8-2 2.8-2.8.4-.4.9-.7 1.3-1 1.3-.9 2.7-1.7 4.2-2.3l-1.6-3.9c-1.8.7-3.5 1.7-5 2.7-.6.4-1.1.8-1.6 1.2zm-3.1-3.7c-1.5 1.2-2.8 2.6-4 4l3.1 2.5c1-1.3 2.2-2.4 3.5-3.5.5-.4 1.1-.9 1.7-1.3 1.6-1.1 3.3-2.1 5.2-2.8l-1.5-3.7c-2.2.9-4.2 2-6 3.3-.7.5-1.4 1-2 1.5zm.6 16.1c-.2.4-.3.9-.5 1.3-.1.3-.2.7-.3 1-.1.4-.2.8-.3 1.3l4.2.6c.1-.3.1-.6.2-.9.1-.3.1-.6.2-.8.1-.3.2-.7.4-1 .2-.4.3-.8.5-1.2.4-.8.9-1.6 1.4-2.4L36.4 34c-.7 1-1.3 2-1.8 3.1-.2.5-.5 1-.6 1.5zm-4.2-3.8c-.3.6-.6 1.2-.8 1.9-.2.6-.4 1.1-.6 1.7-.1.4-.3.9-.4 1.3-.2.6-.3 1.2-.4 1.8l4.2.6c.1-.5.2-.9.3-1.4.1-.4.2-.7.3-1.1.2-.5.3-.9.5-1.4.2-.5.4-1 .7-1.6.5-1.1 1.2-2.2 1.9-3.3l-3.4-2.6c-.9 1.4-1.7 2.7-2.3 4.1zm-4.4-2c-.4.7-.7 1.5-1 2.2-.2.7-.5 1.3-.7 2-.2.5-.3 1.1-.4 1.6-.2.7-.3 1.5-.5 2.2l3.9.6c.1-.6.2-1.2.4-1.9.1-.5.2-.9.4-1.4.2-.6.4-1.2.6-1.7.3-.7.5-1.3.8-1.9.7-1.5 1.5-2.8 2.5-4.1L28.2 28c-1 1.5-2 3.1-2.8 4.8zM32.7 44c-.1 1.2-.1 2.4 0 3.6 0 .5.1 1.1.2 1.6.2 1.4.6 2.8 1.2 4.2l3.9-1.6c-.4-1.1-.8-2.2-.9-3.3-.1-.4-.1-.9-.2-1.3-.1-.9-.1-1.8 0-2.7l-4.2-.5zm-5.3-.6c-.2 1.5-.2 3.1 0 4.7 0 .7.1 1.4.3 2 .3 1.8.8 3.5 1.5 5.3l3.9-1.6c-.6-1.4-1-2.9-1.3-4.4-.1-.6-.2-1.1-.2-1.7-.1-1.3-.1-2.5 0-3.8l-4.2-.5zm-.9-.1l-3.9-.5c-.2 1.9-.2 3.7 0 5.6l.3 2.4c.4 2.1 1 4.2 1.8 6.3l3.7-1.5c-.7-1.8-1.2-3.6-1.6-5.5l-.3-2.1c-.1-1.5-.1-3.1 0-4.7z"/><path fill="#DB224D" d="M41.6 68.3c.6.4 1.8.8 2.8.8 1.2 0 1.8-.5 1.8-1.3s-.5-1.1-1.8-1.6c-2.2-.7-3.1-1.9-3.1-3.3 0-2 1.6-3.5 4.2-3.5 1.2 0 2.3.3 3 .7l-.6 2c-.5-.3-1.4-.6-2.4-.7-1 0-1.6.5-1.6 1.2s.5 1 2 1.6c2 .7 3 1.8 3 3.4 0 2-1.6 3.5-4.6 3.5-1.4 0-2.6-.3-3.4-.8l.7-2zm11.6-8.5l1.8 5.7c.3 1 .5 1.9.8 2.8h.1c.2-.9.5-1.8.8-2.8l1.8-5.7h3L57 71h-2.8l-4.1-11.2h3.1zm14.7 4.1v2H62v-2h5.9zm3.9-4.1l1.1 5.1c.3 1.2.5 2.4.7 3.6.2-1.2.6-2.5.9-3.6l1.5-5.1h2.3l1.4 5c.3 1.3.6 2.5.9 3.8.2-1.2.4-2.4.7-3.7l1.3-5h2.8L82 71.1h-2.6L78 66.5c-.3-1.2-.6-2.2-.8-3.6-.3 1.4-.5 2.5-.9 3.6L74.8 71h-2.6l-3.3-11.2h2.9zm24.1 8.6c0 1 0 2 .2 2.7h-2.6l-.2-1.2h-.1c-.7.9-1.8 1.5-3.3 1.5-2.2 0-3.5-1.6-3.5-3.3 0-2.8 2.5-4.2 6.7-4.2v-.2c0-.7-.3-2-2.3-2-1.1 0-2.3.3-3 .8l-.5-1.8c.8-.5 2.3-1 4.1-1 3.6 0 4.6 2.3 4.6 4.7l-.1 4zm-2.8-2.8c-2 0-3.9.4-3.9 2.1 0 1.1.7 1.6 1.6 1.6 1.2 0 2-.7 2.2-1.5.1-.2.1-.4.1-.6v-1.6zM102 57v2.9h2.7V62H102v4.9c0 1.4.4 2.1 1.4 2.1.5 0 .8 0 1.1-.1V71c-.4.2-1.2.3-2.1.3-1.1 0-1.9-.3-2.4-.9-.6-.6-.9-1.7-.9-3.2v-5.3h-1.6v-2.1h1.6v-2.1c.1.1 2.9-.7 2.9-.7zm12.9 13.8c-.6.3-1.8.6-3.2.6-3.5 0-5.8-2.3-5.8-5.7 0-3.4 2.3-5.9 6.2-5.9 1 0 2.1.2 2.7.5l-.5 2.1c-.5-.2-1.1-.4-2.1-.4-2.2 0-3.5 1.6-3.4 3.6 0 2.3 1.5 3.6 3.4 3.6 1 0 1.7-.2 2.2-.4l.5 2zm2.1-16h2.8v6.6c.3-.5.8-1 1.4-1.3.6-.3 1.2-.5 2-.5 1.9 0 3.9 1.3 3.9 4.9v6.6h-2.8v-6.3c0-1.6-.6-2.9-2.2-2.9-1.1 0-1.9.7-2.2 1.6-.1.3-.1.6-.1.9v6.7H117V54.8z"/><path fill="none" stroke="#DB224D" stroke-width="5" stroke-miterlimit="10" d="M47.7 54.2L44 42.3l57.4-17.5 8.7 27M54.3 76.5l8.3 27L120.1 86l-2.8-9.3"/></svg></a>
                    </div>
                    <div class="brand-typo">
                        <p>
                            <a href="<?php print $front_page; ?>" title="Zurück zur Startseite von sozialversicherung.watch">
                                <span class="brand-typo-before">Wir schaffen Transparenz:</span>
                                <span class="brand-typo-main">sozialversicherung.watch</span>
                                <span class="brand-typo-after">Das Portal zu Deiner Selbstverwaltung.</span>
                            </a>
                        </p>
                    </div>
                </div>
            </div>
            <?php if (!empty($primary_nav)): ?>
                <div class="navbar-collapse collapse">
                    <nav role="navigation">
                        <?php if (!empty($primary_nav)): ?>
                            <?php print render($primary_nav); ?>
                        <?php endif; ?>
                    </nav>
                </div>
            <?php endif; ?>
        </div>
    </header>

    <?php if (!empty($page['header'])): ?>
    <header role="banner" id="page-header">
        <?php print render($page['header']); ?>
    </header> <!-- /#page-header -->
    <?php endif; ?>


    <section id="content">
        <?php if (!empty($page['highlighted'])): ?>
            <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
        <?php endif; ?>
        <a id="main-content"></a>

        <?php print render($title_prefix); ?>
        <?php if (!empty($title)): ?>
            <h1 class="<?php if ($is_front): ?> sr-only<?php endif; ?>"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>


        <?php print $messages; ?>
        <?php if (!empty($tabs)): ?>
            <?php print render($tabs); ?>
        <?php endif; ?>
        <?php if (!empty($page['help'])): ?>
            <?php print render($page['help']); ?>
        <?php endif; ?>
        <?php if (!empty($action_links)): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
    </section>


    <?php if (!empty($page['footer'])): ?>
        <footer id="footer">
            <div class="row">
                <div class="col-xs-12 col-sm-8">
                  <?php print render($page['footer']); ?>
                </div>
                <div class="col-xs-12 col-sm-4">
                    <div class="social-links clearfix">
                        <div class="social-link-label">Sie finden uns auch auf:</div>
                        <ul class="clearfix">
                            <li class="social-link-facebook"><a href="https://www.facebook.com/verdi/" target="_blank"><i class="fa fa-facebook"></i></a></li>
                            <li class="social-link-twitter"><a href="https://twitter.com/_verdi" target="_blank"><i class="fa fa-twitter"></i></a></li>
                        </ul>
                    </div>
                </div>
            </div>
        </footer>
    <?php endif; ?>
</div>

