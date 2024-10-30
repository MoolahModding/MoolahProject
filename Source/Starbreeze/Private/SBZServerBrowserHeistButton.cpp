#include "SBZServerBrowserHeistButton.h"

USBZServerBrowserHeistButton::USBZServerBrowserHeistButton() {
    this->Button_IntroStory = NULL;
    this->Button_OutroStory = NULL;
    this->Border_HeistOutline = NULL;
    this->HeistType = ESBZHeistType::Hostable;
    this->bIsHeistOwned = false;
    this->bIsFriendHeist = false;
    this->bIsHeistButtonInnerNavigated = false;
}

void USBZServerBrowserHeistButton::ToggleHeistButtonInnerNavigation(bool bEnableInnerNavigation) {
}

FString USBZServerBrowserHeistButton::GetHeistSessionID() const {
    return TEXT("");
}


