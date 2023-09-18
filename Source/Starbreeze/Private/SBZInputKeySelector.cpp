#include "SBZInputKeySelector.h"

USBZInputKeySelector::USBZInputKeySelector() {
    this->Button_Background = NULL;
    this->Widget_InputKey = NULL;
}

void USBZInputKeySelector::SetSelectedKey(const FInputChord& InSelectedKey) {
}

FEventReply USBZInputKeySelector::OnPreviewMouseButtonDown_Internal(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

FEventReply USBZInputKeySelector::OnPreviewKeyDown_Internal(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

FEventReply USBZInputKeySelector::OnMouseWheel_Internal(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

FEventReply USBZInputKeySelector::OnMouseButtonDown_Internal(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

FEventReply USBZInputKeySelector::OnKeyUp_Internal(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

FEventReply USBZInputKeySelector::OnKeyDown_Internal(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

void USBZInputKeySelector::OnFocusLost_Internal(FFocusEvent InFocusEvent) {
}

void USBZInputKeySelector::OnClicked_Internal() {
}


