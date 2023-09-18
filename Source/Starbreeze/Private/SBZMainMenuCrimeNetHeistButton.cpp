#include "SBZMainMenuCrimeNetHeistButton.h"

USBZMainMenuCrimeNetHeistButton::USBZMainMenuCrimeNetHeistButton() {
    this->HeistData = NULL;
    this->HeistIndex = -1;
}


void USBZMainMenuCrimeNetHeistButton::InitializeHeistDataFromSoftObjectPath(const FSoftObjectPath& InHeistSoftObjectPath) {
}

FSoftObjectPath USBZMainMenuCrimeNetHeistButton::GetHeistLevelPath() const {
    return FSoftObjectPath{};
}

UPD3HeistDataAsset* USBZMainMenuCrimeNetHeistButton::GetHeistData() const {
    return NULL;
}


