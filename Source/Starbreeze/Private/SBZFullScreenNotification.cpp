#include "SBZFullScreenNotification.h"

USBZFullScreenNotification::USBZFullScreenNotification() {
    this->Text_Header = NULL;
    this->Text_Description = NULL;
    this->Widget_ControlsReference = NULL;
    this->bIsShowing = false;
}


void USBZFullScreenNotification::OnControlsReferenceClicked(FName InActionName) {
}

void USBZFullScreenNotification::DismissActiveNotification() {
}


