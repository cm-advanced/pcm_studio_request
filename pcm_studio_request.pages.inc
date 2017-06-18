<?php

/**
 * Studio Request view callback.
 */
function pcm_airing_conflict_view($studiorequest) {
  drupal_set_title(entity_label('studiorequests', $studiorequest));
  return entity_view('studiorequests', array(entity_id('studiorequest', $studiorequest) => $studiorequest), 'full');
}
