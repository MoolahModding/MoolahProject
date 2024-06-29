#include "SBZFullscreenVideoWidget.h"
#include "Components/SlateWrapperTypes.h"

USBZFullscreenVideoWidget::USBZFullscreenVideoWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->StackValue = TEXT("Default__SBZFullscreenVideoWidget");
    this->VideoImage = NULL;
    this->VideoPlayer = NULL;
    this->ShowInputDuration = 2.50f;
    this->ZOderChange = 1;
    this->Text_SubtitleText = NULL;
}

void USBZFullscreenVideoWidget::OnControlReferencePressed(FName ActionName) {
}

void USBZFullscreenVideoWidget::Close() {
}



