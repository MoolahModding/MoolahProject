#include "SBZFullscreenVideoWidget.h"

void USBZFullscreenVideoWidget::OnControlReferencePressed(FName ActionName) {
}

void USBZFullscreenVideoWidget::Close() {
}


USBZFullscreenVideoWidget::USBZFullscreenVideoWidget() {
    this->VideoImage = NULL;
    this->VideoPlayer = NULL;
    this->ShowInputDuration = 2.50f;
    this->ZOderChange = 1;
    this->Text_SubtitleText = NULL;
}

