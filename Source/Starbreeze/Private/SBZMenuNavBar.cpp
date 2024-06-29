#include "SBZMenuNavBar.h"

USBZMenuNavBar::USBZMenuNavBar() {
    this->NavigationButtonClass = NULL;
    this->Panel_ButtonContainer = NULL;
    this->bIsAffectedByInstallProgress = false;
}

void USBZMenuNavBar::SetActiveTab(const FName& InTabName) {
}



void USBZMenuNavBar::OnInstallStateChanged(bool NewState) {
}

void USBZMenuNavBar::OnForwardInputPressed() {
}

void USBZMenuNavBar::OnBackwardInputPressed() {
}

bool USBZMenuNavBar::HasStackFocus() const {
    return false;
}

TArray<FSBZNavButtonParameters> USBZMenuNavBar::GetNavigationParameters() const {
    return TArray<FSBZNavButtonParameters>();
}


