#include "SBZObjectiveContainerWidget.h"

void USBZObjectiveContainerWidget::OnObjectiveRemoved(UObject* ObjectiveUObject) {
}

void USBZObjectiveContainerWidget::OnObjectiveAdded(UObject* ObjectiveUObject) {
}



USBZObjectiveContainerWidget::USBZObjectiveContainerWidget() {
    this->Panel_ObjectivesContainer = NULL;
    this->Panel_OptionalObjectivesContainer = NULL;
    this->ObjectiveWidgetClass = NULL;
}

