<?php

/**
 * @file
 * Template for Bedrock Variolite.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   -- Sidebar
 *   -- Content Header
 *   -- Content Main Column
 *   -- Content Secondary Column
 */
?>

<div class="panel-display variolite clearfix <?php if (!empty($class)): print $class; endif; ?>" <?php if (!empty($css_id)): print "id=\"$css_id\""; endif; ?>>

  <div class="variolite-sidebar panel-panel">
      <?php print $content['sidebar']; ?>
  </div><!-- /.variolite-sidebar -->

  <div class="variolite-content-container">
    <div class="variolite-content-header clearfix panel-panel">
        <?php print $content['content_header']; ?>
    </div><!-- /.variolite-content-container -->

    <div class="variolite-content-container-column-container clearfix">

      <div class="variolite-content-main-column variolite-column panel-panel">
          <?php print $content['content_main_column']; ?>
      </div><!-- /.variolite-content-main-column -->

      <div class="variolite-content-secondary-column variolite-column panel-panel">
          <?php print $content['content_secondary_column']; ?>
      </div><!-- /.variolite-content-main-column -->

    </div><!-- /.variolite-content-container-column-container -->

  </div><!-- /.variolite-content-container -->

</div><!-- /.variolite -->
