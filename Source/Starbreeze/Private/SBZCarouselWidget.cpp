#include "SBZCarouselWidget.h"
#include "Layout/Clipping.h"

USBZCarouselWidget::USBZCarouselWidget() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->ActiveIndex = 0;
    this->ScrollInterval = 1.00f;
    this->ScrollSpeed = 5.00f;
}

void USBZCarouselWidget::StopScrolling() {
}

void USBZCarouselWidget::StartScrolling(float InScrollInterval) {
}

void USBZCarouselWidget::SetActiveWidgetIndex(int32 Index) {
}

void USBZCarouselWidget::SetActiveWidget(UWidget* Widget) {
}

void USBZCarouselWidget::PreviousPage() {
}

void USBZCarouselWidget::NextPage() {
}

UWidget* USBZCarouselWidget::GetWidgetAtIndex(int32 Index) const {
    return NULL;
}

int32 USBZCarouselWidget::GetActiveIndex() const {
    return 0;
}


