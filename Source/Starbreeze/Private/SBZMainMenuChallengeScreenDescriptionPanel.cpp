#include "SBZMainMenuChallengeScreenDescriptionPanel.h"


void USBZMainMenuChallengeScreenDescriptionPanel::SetChallengeData(const FSBZChallengeData& InChallengeData) {
}


USBZMainMenuChallengeScreenDescriptionPanel::USBZMainMenuChallengeScreenDescriptionPanel() {
    this->Panel_ChallengeStats = NULL;
    this->Panel_ItemRewards = NULL;
    this->ChallengeStatWidgetClass = NULL;
    this->ItemRewardWidgetClass = NULL;
    this->MaxStatWidgetsDisplayed = 3;
    this->MaxItemWidgetsDisplayed = 3;
}

