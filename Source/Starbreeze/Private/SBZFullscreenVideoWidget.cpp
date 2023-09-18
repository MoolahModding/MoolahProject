#include "SBZFullscreenVideoWidget.h"
#include "Components/SlateWrapperTypes.h"

USBZFullscreenVideoWidget::USBZFullscreenVideoWidget() {
    this->VideoImage = NULL;
    this->VideoPlayer = NULL;
    this->ShowInputDuration = 2.50f;
    this->ZOderChange = 1;
    this->Text_SubtitleText = NULL;
    this->StackValue = TEXT("Default__SBZFullscreenVideoWidget");
    this->Visibility = ESlateVisibility::Collapsed;
}

void USBZFullscreenVideoWidget::OnControlReferencePressed(FName ActionName) {
}

void USBZFullscreenVideoWidget::Close() {
}



