<?php

class StudioRequestController extends EntityAPIController {

  public function create(array $values = array()) {
    global $user;
    $values += array(
      'created' => REQUEST_TIME,
      'changed' => REQUEST_TIME,
      'uid' => $user->uid,
    );
    return parent::create($values);
  }

  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    $wrapper = entity_metadata_wrapper('studiorequest', $entity);
    
    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }
}


/**
 * StudioRequest class.
 */
class StudioRequest extends Entity {
  protected function defaultLabel() {
    // This is normally a title, but in this case we are using id 
    return $this->studio_request_id;
  }

  protected function defaultUri() {
    return array('path' => 'studio-request/' . $this->identifier());
  }
}