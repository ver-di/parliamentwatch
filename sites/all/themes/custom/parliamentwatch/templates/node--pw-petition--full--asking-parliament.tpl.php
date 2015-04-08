<?php
?>
<?php if ($sharethis): ?>
    <div class="sharethis-wrapper">
        <? echo $sharethis; ?>
    </div>
<?php endif; ?>
<p class="medium"><? echo $field_petition_recipient[0]['value'] ?></p>

<?php if (!empty($field_blogpost_blogtags)): ?>
    <p class="icon-taxonomy push-bottom-m">
        <?
        $first_term = true;
        foreach ($field_blogpost_blogtags as $key => $value){
            if ($first_term) {
                $first_term = false;
            }
            else{
                echo ", ";
            }
            $term = taxonomy_term_load($value['tid']);
            echo l($term->name, 'taxonomy/term/' . $value['tid']);
        }
        ?>
    </p>
<?php endif; ?>
<div class="managed_content push-bottom-l">
    <? echo $field_petition_text_parliament['und'][0]['value'] ?>
</div>

<h3>Gesamtergebnis</h3>
<ul>
    <li>582 zugestimmt</li>
    <li>3 dagegen gestimmt</li>
    <li>7 enthalten</li>
    <li>39 nicht beteiligt</li>
</ul>

<h3>Parteiergebnis</h3>

…

<h3>Wie positionieren sich Ihre Abgeordneten?</h3>

<form action="#" class="search-form compact-form" target="_self">
    <div class="compact-form-wrapper">
        <label for="FILLID" class="element-invisible">PLZ</label>
        <input type="text" maxlength="128" size="15" value="" id="FILLID" placeholder="PLZ"
               title="Geben Sie hier Ihre PLZ ein.">
    </div>
    <div class="form-actions form-wrapper">
        <input type="image"
               src="http://develop_petitions.silversurfer/sites/abgeordnetenwatch.de/files/custom_search/ic_search.png"
               class="custom-search-button form-submit" alt="Search">
    </div>
</form>

<h3>Positionen aus dem Wahlkreis Berlin-Pankow (76)</h3>

<ul>
    <li class="pw-list-item">
        <h4 class="push-bottom-xs">Steafan Lieblich (DIE LINKE) zu “Abgeordnetenbestechung: bestrafen! #korrupt”</h4>
        <div class="push-bottom-s">
            <span class="medium">Position von Klaus Buchner:</span> <span class="poll-behavior"><span class="yes block">Lehne ab</span></span>
        </div>
        <div class="float-left pw-kc-profile-picture push-bottom-s">
            <img title="" alt="" src="/sites/abgeordnetenwatch.de/files/styles/pw_portrait_ms/public/users/klausbuchner14.jpeg?itok=hMLULTPx" typeof="foaf:Image">
        </div>
        <div class="pw-kc-argumentation pushfloat-1">
            <blockquote>Arbeitsverbote bedeuten, dass diese Menschen von unseren Sozialeinrichtungen unterhalten werden müssen. Das ist für motivierte, z.T. gut ausgebildete und dringend benötigte Arbeitskräfte unsinnig und demotivierend.</blockquote>
        </div>
    </li>
    <li class="pw-list-item">
        <h4 class="push-bottom-xs">Steafan Lieblich (DIE LINKE) zu “Abgeordnetenbestechung: bestrafen! #korrupt”</h4>
        <div class="push-bottom-s">
            <span class="medium">Position von Klaus Buchner:</span> <span class="poll-behavior"><span class="no block">Lehne ab</span></span>
        </div>
        <div class="float-left pw-kc-profile-picture push-bottom-s">
            <img title="" alt="" src="/sites/abgeordnetenwatch.de/files/styles/pw_portrait_ms/public/users/klausbuchner14.jpeg?itok=hMLULTPx" typeof="foaf:Image">
        </div>
        <div class="pw-kc-argumentation pushfloat-1">
            <blockquote>Arbeitsverbote bedeuten, dass diese Menschen von unseren Sozialeinrichtungen unterhalten werden müssen. Das ist für motivierte, z.T. gut ausgebildete und dringend benötigte Arbeitskräfte unsinnig und demotivierend.</blockquote>
        </div>
    </li>
    <li class="pw-list-item">
        <h4 class="push-bottom-xs">Steafan Lieblich (DIE LINKE) zu “Abgeordnetenbestechung: bestrafen! #korrupt”</h4>
        <div class="push-bottom-s">
            <span class="medium">Position von Klaus Buchner:</span> <span class="poll-behavior"><span class="neutral block">Lehne ab</span></span>
        </div>
        <div class="float-left pw-kc-profile-picture push-bottom-s">
            <img title="" alt="" src="/sites/abgeordnetenwatch.de/files/styles/pw_portrait_ms/public/users/klausbuchner14.jpeg?itok=hMLULTPx" typeof="foaf:Image">
        </div>
        <div class="pw-kc-argumentation pushfloat-1">
            <blockquote>Arbeitsverbote bedeuten, dass diese Menschen von unseren Sozialeinrichtungen unterhalten werden müssen. Das ist für motivierte, z.T. gut ausgebildete und dringend benötigte Arbeitskräfte unsinnig und demotivierend.</blockquote>
        </div>
    </li>
    <li class="pw-list-item">
        <h4 class="push-bottom-xs">Steafan Lieblich (DIE LINKE) zu “Abgeordnetenbestechung: bestrafen! #korrupt”</h4>
        <div class="push-bottom-s">
            <span class="medium">Position von Klaus Buchner:</span> <span class="poll-behavior"><span class="no block">Lehne ab</span></span>
        </div>
        <div class="float-left pw-kc-profile-picture push-bottom-s">
            <img title="" alt="" src="/sites/abgeordnetenwatch.de/files/styles/pw_portrait_ms/public/users/klausbuchner14.jpeg?itok=hMLULTPx" typeof="foaf:Image">
        </div>
        <div class="pw-kc-argumentation pushfloat-1">
            <blockquote>Arbeitsverbote bedeuten, dass diese Menschen von unseren Sozialeinrichtungen unterhalten werden müssen. Das ist für motivierte, z.T. gut ausgebildete und dringend benötigte Arbeitskräfte unsinnig und demotivierend.</blockquote>
        </div>
    </li>
    <li class="pw-list-item">
        <h4 class="push-bottom-xs">Steafan Lieblich (DIE LINKE) zu “Abgeordnetenbestechung: bestrafen! #korrupt”</h4>
        <div class="push-bottom-s">
            <span class="medium">Position von Klaus Buchner:</span> <span class="poll-behavior"><span class="no block">Lehne ab</span></span>
        </div>
        <div class="float-left pw-kc-profile-picture push-bottom-s">
            <img title="" alt="" src="/sites/abgeordnetenwatch.de/files/styles/pw_portrait_ms/public/users/klausbuchner14.jpeg?itok=hMLULTPx" typeof="foaf:Image">
        </div>
        <div class="pw-kc-argumentation pushfloat-1">
            <blockquote>Arbeitsverbote bedeuten, dass diese Menschen von unseren Sozialeinrichtungen unterhalten werden müssen. Das ist für motivierte, z.T. gut ausgebildete und dringend benötigte Arbeitskräfte unsinnig und demotivierend.</blockquote>
        </div>
    </li>
</ul>

<div class="clearfix push-bottom-l managed-content">
    <? echo $body[0]['value']; ?>
</div>

<h3>Ich habe die Petition unterschrieben, weil...</h3>

<div typeof="sioc:Post sioct:Comment" about="/comment/212190#comment-212190" class="comment comment-by-anonymous clearfix">

    <h3 class="element-invisible element-focusable" datatype="" property="schema:name"><a rel="bookmark" class="permalink" href="/comment/212190#comment-212190">Sehr geehrter Herr Hanneforth</a></h3>

    <div class="submitted clearfix">
        <h2 class="author dark"><span rel="sioc:has_creator"><span datatype="" property="schema:name" typeof="schema:Person sioc:UserAccount" xml:lang="" class="username">Prof. Dr. Maria...</span></span></h2>
        <div class="created"><a class="medium" href="#comment-212190">02.04.2015 um 12:20</a></div>
    </div>

    <div class="content">
        <span class="rdf-meta element-hidden" resource="/blog/2015-04-01/abgeordnete-und-ihre-merkwurdigen-facebookfreunde-aus-dem-irak" rel="sioc:reply_of"></span><div class="field field-name-comment-body field-type-text-long field-label-hidden"><div class="field-items"><div property="schema:comment content:encoded" class="field-item even"><p>Sehr geehrter Herr Hanneforth,</p>
                    <p>Ihre Bemühungen um Transparenz in der Politik erkenne ich an.<br>
                        Ihre Behauptung, ich hätte auf Ihre Anfrage nicht reagiert, ist aber schlicht falsch.<br>
                        Auf Ihre Anfrage habe ich mit E-Mail vom 18. März 2015, 13:18 Uhr, wie folgt geantwortet:</p>
                    <p>„Sehr geehrter Herr Hanneforth,<br>
                        herzlichen Dank für Ihre E-Mails vom 12.03. und 17.03.2015.<br>
                        Der starke Anstieg der Likes war mir und meinem Team in der Tat nicht aufgefallen und ich habe keine Erklärung für diese Entwicklung.<br>
                        Ich werde Ihren Hinweis aber gerne zum Anlass nehmen, die Statistik meiner Facebook-Seite in Zukunft genauer zu beobachten.<br>
                        Mit freundlichen Grüßen<br>
                        Maria Böhmer“</p>
                    <p>Zur nochmaligen Klarstellung betone ich, dass ich keine Likes gekauft habe.</p>
                    <p>Mit freundlichen Grüßen</p>
                    <p>Maria Böhmer</p>
                </div></div></div><span class="rdf-meta element-hidden" resource="/comment/212190#comment-212190" rel="schema:url"></span>      </div>

    </div>