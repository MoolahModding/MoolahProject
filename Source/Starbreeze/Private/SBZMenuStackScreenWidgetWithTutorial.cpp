#include "SBZMenuStackScreenWidgetWithTutorial.h"

USBZMenuStackScreenWidgetWithTutorial::USBZMenuStackScreenWidgetWithTutorial() {
    this->TutorialDisplayAction = TEXT("UI_ShowTutorial");
    this->TutorialCloseAlternativeAction = TEXT("UI_Accept");
    this->CanvasPanel_Tutorial = NULL;
    this->Button_ToggleHelp = NULL;
    this->TutorialType = ESBZTutorialType::None;
    this->bIsTutorialShowing = false;
    this->StackValue = TEXT("Default__SBZMenuStackScreenWidgetWithTutorial");
}

void USBZMenuStackScreenWidgetWithTutorial::ToggleShowingTutorial() {
}



void USBZMenuStackScreenWidgetWithTutorial::OnTutorialButtonSelected(USBZMenuMouseButton* Button) {
}

bool USBZMenuStackScreenWidgetWithTutorial::IsShowingTutorial() const {
    return false;
}


