<?php

/**
 * @file
 *
 * Filter to rewrite facet items via a dedicated hook
 *
 */
class FacetapiFilterRewriteItems extends FacetapiFilter {
    public function execute(array $build) {


        $settings = $this->settings;
        if ($settings->facet == "im_field_user_constituency") {
          if (sizeof($build) == 1){
                return array();
            }
            foreach($build as $key => $item) {

                $build[$key]["#html"] = true;
                unset($build[$key]["#count"]);
                $vocterm = taxonomy_term_load($key);
                $location_names = array_unique( explode(",",$vocterm->field_constituency_ac_descriptor["und"]["0"]["value"]) );
                $i = 0;
                foreach($location_names as $name){
                    if ($i == 0) $build[$key]["#markup"] = $name;
                    else {
                        $build[$key."-".$i] = $build[$key];
                        $build[$key."-".$i]["#markup"] = $name;
                    }
                    $i++;
                }
            }
        }
        $build[0]["#html"] = true;
        $build[0]["#markup"] = "</a><div class='facet-notice'>Ihre Postleitzahlensuche ergab mehr als einen Treffer, bitte wählen Sie aus der Liste bitte Ihre(n) Stadt/Stadtteil bzw. Ihren Ort/Ortsteil heraus, um in Ihren Wahlkreis zu springen.</div>";
        return $build;
    }
}
