#include "SBZMenuStackScreenWidgetWithTutorial.h"

USBZMenuStackScreenWidgetWithTutorial::USBZMenuStackScreenWidgetWithTutorial() {
    this->StackValue = TEXT("Default__SBZMenuStackScreenWidgetWithTutorial");
    this->TutorialDisplayAction = TEXT("UI_ShowTutorial");
    this->TutorialCloseAlternativeAction = TEXT("UI_Accept");
    this->CanvasPanel_Tutorial = NULL;
    this->Button_ToggleHelp = NULL;
    this->PopupType = ESBZPopupType::None;
    this->bIsTutorialShowing = false;
}

void USBZMenuStackScreenWidgetWithTutorial::ToggleShowingTutorial() {
}



void USBZMenuStackScreenWidgetWithTutorial::OnTutorialButtonSelected(USBZMenuMouseButton* Button) {
}

bool USBZMenuStackScreenWidgetWithTutorial::IsShowingTutorial() const {
    return false;
}


