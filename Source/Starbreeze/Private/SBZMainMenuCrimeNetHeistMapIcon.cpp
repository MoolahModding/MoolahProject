#include "SBZMainMenuCrimeNetHeistMapIcon.h"
#include "Components/SlateWrapperTypes.h"

USBZMainMenuCrimeNetHeistMapIcon::USBZMainMenuCrimeNetHeistMapIcon() {
    this->bOverride_Cursor = true;
    this->Cursor = EMouseCursor::Hand;
    this->Visibility = ESlateVisibility::Visible;
    this->HeistData = NULL;
}



void USBZMainMenuCrimeNetHeistMapIcon::InitializeHeistData(const UPD3HeistDataAsset* InHeistData) {
}

UPD3HeistDataAsset* USBZMainMenuCrimeNetHeistMapIcon::GetHeistData() const {
    return NULL;
}



