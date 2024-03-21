#include "SBZMainMenuCrimeNetHeistButton.h"



void USBZMainMenuCrimeNetHeistButton::InitializeHeistDataFromSoftObjectPath(const FSoftObjectPath& InHeistSoftObjectPath) {
}

FSoftObjectPath USBZMainMenuCrimeNetHeistButton::GetHeistLevelPath() const {
    return FSoftObjectPath{};
}

UPD3HeistDataAsset* USBZMainMenuCrimeNetHeistButton::GetHeistData() const {
    return NULL;
}

USBZMainMenuCrimeNetHeistButton::USBZMainMenuCrimeNetHeistButton() {
    this->HeistData = NULL;
    this->HeistCollectionIndex = -1;
    this->HeistIndex = -1;
}

