#include "SBZObjectiveContainerWidget.h"

USBZObjectiveContainerWidget::USBZObjectiveContainerWidget() {
    this->Panel_ObjectivesContainer = NULL;
    this->Panel_OptionalObjectivesContainer = NULL;
    this->ObjectiveWidgetClass = NULL;
    this->bIsPaused = false;
}

void USBZObjectiveContainerWidget::OnObjectiveRemoved(UObject* ObjectiveUObject) {
}

void USBZObjectiveContainerWidget::OnObjectiveAdded(UObject* ObjectiveUObject) {
}



void USBZObjectiveContainerWidget::CheckDelayPausedAnimation(UWidgetAnimation* InAnimation) {
}



