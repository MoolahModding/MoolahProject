#include "SBZObjectiveWidget.h"

void USBZObjectiveWidget::OnObjectiveUpdated() {
}



void USBZObjectiveWidget::OnObjectiveActivated() {
}






USBZObjectiveWidget::USBZObjectiveWidget() {
    this->SubObjectiveWidgetClass = NULL;
    this->Text_Objective = NULL;
    this->ProgressBar_Progress = NULL;
    this->Text_ProgressSpeed = NULL;
    this->Panel_SubObjectivesContainer = NULL;
    this->bIsActive = false;
    this->bIsTimed = false;
    this->Objective = NULL;
}

