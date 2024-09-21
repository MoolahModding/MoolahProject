#include "SBZMainMenuChallengeCategorySelectionScreen.h"

USBZMainMenuChallengeCategorySelectionScreen::USBZMainMenuChallengeCategorySelectionScreen() {
    this->StackValue = TEXT("Default__SBZMainMenuChallengeCategorySelectionScreen");
    this->HorizontalBox_ChallengeCategorySelection = NULL;
    this->Widget_ChallengeScreen = NULL;
    this->ChallengeCategoryButton = NULL;
    this->PanelButtonPadding = 10.00f;
}

void USBZMainMenuChallengeCategorySelectionScreen::NativeOnCategoryButtonSelected(USBZMenuButton* InCategoryButton) {
}


