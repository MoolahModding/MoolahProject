#include "SBZSubtitleWidget.h"

void USBZSubtitleWidget::HandlePlayerControllerInitialized() {
}

USBZSubtitleWidget::USBZSubtitleWidget() {
    this->MinDisplayTime = 2.00f;
    this->DisplayTimePerCharacter = 0.07f;
    this->bSettingsPreview = false;
    this->Text_SubtitleText = NULL;
    this->SubtitleStringTable = NULL;
}

