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
                        <a href="<?php print $front_page; ?>" title="Zurück zur Startseite von sozialversicherung.watch"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 1490 1490"><path fill="#DB214C" d="M1490 1286.3L1286.3 0 0 203.7 203.7 1490z"/><path fill="#FFFFFF" d="M196.2 951.8h79l57 151.5h.8l57.4-151.5h73.2l-91.7 212.7H288l-91.8-212.7zm341.4 127.8h147.3v-13.5c0-63.3-28.6-119.2-107.6-119.2-66.3 0-114.1 40.8-114.1 111.1 0 70.2 53.6 111.5 124 111.5 27.4 0 54.4-4.1 78.1-13.5v-51.9c-22.1 11.8-45 16.3-65 16.3-36.1.1-58.6-11.4-62.7-40.8zm-.8-41.6c1.6-24.5 14.3-44.5 40.9-44.5 29.5 0 40.9 20 40.9 44.5h-81.8zm338.7-27.4l3.7-61.2c-7.4-1.2-16.4-2.5-25-2.5-31.9 0-50.3 17.1-63 44.1h-.8v-39.2h-67.1v212.7h73.6v-89.8c0-41.6 19.2-66.6 53.6-66.6 8.6.1 16.8.1 25 2.5zm346.1 154V858.3h-74v120.9h-.8c-18.8-24.5-43.8-32.3-73.2-32.3-58.9 0-91.2 55.1-91.2 107.4 0 62.9 34 115.1 97.4 115.1 34 0 63.8-19.2 73.2-42.9h.8v38l67.8.1zM1058.3 1056c0-28.2 16-52.7 44.6-52.7 27 0 45 23.3 45 55.5 0 31-20.5 54.3-45 54.3-27.8 0-44.6-23.3-44.6-57.1zm211.7 108.6h73.6V951.8H1270v212.8zm73.7-301.4H1270v53.9h73.6v-53.9z"/><path fill="#1F1A17" d="M955.6 1168.7l-13.4-84.8-84.9 13.4 13.5 84.8z"/></svg></a>
                    </div>
                    <div class="brand-typo">
                        <p>
                            <a href="<?php print $front_page; ?>" title="Zurück zur Startseite von sozialversicherung.watch">
                                <span class="brand-typo-before">Wir schaffen Transparenz:</span>
                                <span class="brand-typo-main">Sozialversicherung.watch</span>
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
        <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if (!empty($title)): ?>
            <h1 class="page-header<?php if ($is_front): ?> sr-only<?php endif; ?>"><?php print $title; ?></h1>
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
                        <li class="social-link-facebook"><a href="#"><i class="fa fa-facebook"></i></a></li>
                        <li class="social-link-twitter"><a href="#"><i class="fa fa-twitter"></i></a></li>
                        <li class="social-link-feed"><a href="#"><i class="fa fa-feed"></i></a></li>
                    </ul>
                </div>
            </div>
        </div>
    </footer>
    <?php endif; ?>
</div>

