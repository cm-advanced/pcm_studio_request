<?php

/**
 * @file
 * Defines the inline entity form controller for PCMSTUDIOREQUEST Entities.
 */

class StudioRequestInlineEntityFormController extends EntityInlineEntityFormController {

  /**
   * Overrides EntityInlineEntityFormController::labels().
   */
    public function labels() {
      $entity_info = entity_get_info($this->entityType);
      $labels = array(
		             'singular' => $entity_info['label'],
		             'plural' => $entity_info['label'],
		           );
      return $labels;
    }

  /**
   * Overrides EntityInlineEntityFormController::entityForm().
   */
    public function entityForm($entity_form, &$form_state) {
      $entity_form = array_merge($entity_form, pcm_studio_request_form($entity_form, $form_state, $entity_form['#entity']));
      unset($entity_form['submit']);
      return $entity_form;
    }
}