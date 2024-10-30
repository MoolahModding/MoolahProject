#include "SBZPlayerCardContainer.h"

USBZPlayerCardContainer::USBZPlayerCardContainer() {
    this->CardContainerType = ESBZPlayerCardContainerType::PCCT_Friends;
    this->PlayerCardWidgetClass = NULL;
    this->ScrollBox_PlayerCardList = NULL;
    this->WrapBox_PlayerCards = NULL;
    this->Divider_I = NULL;
    this->Button_LeaveCrew = NULL;
    this->Button_CurrentPlatform = NULL;
    this->Button_OtherConsole = NULL;
    this->Button_GenericPC = NULL;
    this->CurrentlyFocusedButton = NULL;
}

void USBZPlayerCardContainer::UpdatePlayerEntries(bool bWasSuccessful) {
}

void USBZPlayerCardContainer::UpdateFriendFilterText(const FString& Text) {
}

void USBZPlayerCardContainer::UpdateCrewMembersList() {
}

void USBZPlayerCardContainer::TogglePlatformFilter(const FName& ToggleKey, const bool ToggleValue) {
}

void USBZPlayerCardContainer::SearchUser(const FString& UserName) {
}

void USBZPlayerCardContainer::RequestPartyLeave() {
}

void USBZPlayerCardContainer::RefreshCrewPanel() {
}





void USBZPlayerCardContainer::NativeOnOtherConsoleFilterSelected(USBZMenuButton* Button) {
}

void USBZPlayerCardContainer::NativeOnGenericPCFilterSelected(USBZMenuButton* Button) {
}

void USBZPlayerCardContainer::NativeOnCurrentPlatformFilterSelected(USBZMenuButton* Button) {
}

int32 USBZPlayerCardContainer::GetPartyMembersNum() const {
    return 0;
}

ESBZPlayerCardContainerType USBZPlayerCardContainer::GetCardContainerType() const {
    return ESBZPlayerCardContainerType::PCCT_Friends;
}


