#include "SBZActionPhaseBaseWidget.h"

USBZActionPhaseBaseWidget::USBZActionPhaseBaseWidget() {
    this->Widget_Playing = NULL;
    this->Widget_Spectating = NULL;
    this->Widget_Shared = NULL;
    this->Widget_ControlsReference = NULL;
    this->Widget_Chat = NULL;
    this->bIsChatDisabled = false;
}

void USBZActionPhaseBaseWidget::OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent) {
}

void USBZActionPhaseBaseWidget::OnStackLockChanged(bool bIsStackLocked) {
}

void USBZActionPhaseBaseWidget::OnControllerStateChanged(ASBZPlayerController* PlayerController, const FName& OldStateName, const FName& NewStateName) {
}

void USBZActionPhaseBaseWidget::OnActiveControlsReferenceChanged(const FSBZControlsReference& InControlsReference) {
}

void USBZActionPhaseBaseWidget::HideControlsReference() {
}




