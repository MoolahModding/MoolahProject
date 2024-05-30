#include "SBZMainMenuPrePlaningLoadoutSelection.h"

USBZMainMenuPrePlaningLoadoutSelection::USBZMainMenuPrePlaningLoadoutSelection() {
    this->bShouldUseActionBindings = true;
    this->FocusedPlayerLoadoutIndex = -1;
    this->bIsValidLoadout = false;
}

void USBZMainMenuPrePlaningLoadoutSelection::UnbindGamepadActions() {
}

void USBZMainMenuPrePlaningLoadoutSelection::SetFocusedPlayerLoadoutIndex(int32 NewFocusedPlayerLoadoutIndex) {
}

void USBZMainMenuPrePlaningLoadoutSelection::OnLocalLoadoutUpdated(const FSBZPlayerLoadoutConfig& InPlayerLoadout, int32 ModifiedPlayerLoadoutIndex) {
}




void USBZMainMenuPrePlaningLoadoutSelection::NativeOnFocusedPlayerLoadoutConfigChanged(const FSBZPlayerLoadoutConfig& NewPlayerLoadout) {
}

void USBZMainMenuPrePlaningLoadoutSelection::NativeOnActiveLoadoutChanged(int32 NewActiveLoadoutIndex) {
}

bool USBZMainMenuPrePlaningLoadoutSelection::IsFocusedPlayerLoadoutValid() const {
    return false;
}

int32 USBZMainMenuPrePlaningLoadoutSelection::GetFocusedPlayerLoadoutIndex() const {
    return 0;
}


void USBZMainMenuPrePlaningLoadoutSelection::BindGamepadActions() {
}



