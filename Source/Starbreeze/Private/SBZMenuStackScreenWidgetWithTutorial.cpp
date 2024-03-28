#include "SBZMenuStackScreenWidgetWithTutorial.h"

void USBZMenuStackScreenWidgetWithTutorial::ToggleShowingTutorial() {
}



void USBZMenuStackScreenWidgetWithTutorial::OnTutorialButtonSelected(USBZMenuMouseButton* Button) {
}

bool USBZMenuStackScreenWidgetWithTutorial::IsShowingTutorial() const {
    return false;
}

USBZMenuStackScreenWidgetWithTutorial::USBZMenuStackScreenWidgetWithTutorial() {
    this->TutorialDisplayAction = TEXT("UI_ShowTutorial");
    this->TutorialCloseAlternativeAction = TEXT("UI_Accept");
    this->CanvasPanel_Tutorial = NULL;
    this->Button_ToggleHelp = NULL;
    this->PopupType = ESBZPopupType::None;
    this->bIsTutorialShowing = false;
}

