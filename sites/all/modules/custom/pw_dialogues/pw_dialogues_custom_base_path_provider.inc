<?php

/**
 * @file
 * Our custom base path provider.
 */

/**
 * Custom FacetApiPrettyPathsBasePathProvider.
 */
class PwDialoguesCustomBasePathProvider implements FacetApiPrettyPathsBasePathProvider {

  /**
   * @param FacetapiUrlProcessorPrettyPaths $urlProcessor
   * @return base path.
   */
  public function getBasePath(FacetapiUrlProcessorPrettyPaths $urlProcessor) {
    return drupal_get_path_alias($urlProcessor->getPathWithoutSegments());
  }

}
 