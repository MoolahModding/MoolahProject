#include "SBZMenuMouseButton.h"
#include "Components/SlateWrapperTypes.h"

USBZMenuMouseButton::USBZMenuMouseButton() {
    this->bOverride_Cursor = true;
    this->Cursor = EMouseCursor::Hand;
    this->Visibility = ESlateVisibility::Visible;
}

void USBZMenuMouseButton::SelectButton() {
}




