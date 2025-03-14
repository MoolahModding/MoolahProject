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

bool USBZServerBrowserHeistButton::ShouldBeJoinedThroughFriend() {
    return false;
}

void USBZServerBrowserHeistButton::OnSessionChangedPopupClosed(FName ActionName) {
}

void USBZServerBrowserHeistButton::JoinMatchThroughFriend() {
}

FString USBZServerBrowserHeistButton::GetHeistSessionID() const {
    return TEXT("");
}


