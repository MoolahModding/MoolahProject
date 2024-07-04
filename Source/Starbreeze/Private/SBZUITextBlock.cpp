#include "SBZUITextBlock.h"

USBZUITextBlock::USBZUITextBlock() {
    this->ColorStyle = NULL;
    this->Style = NULL;
    this->ScrollStyle = NULL;
    this->bIsScrollingEnabled = false;
    this->bEnableHideTextOnEmpty = false;
    this->OnEmptyVisibility = ESlateVisibility::Collapsed;
    this->OnNotEmptyVisbility = ESlateVisibility::SelfHitTestInvisible;
}

void USBZUITextBlock::SetStyle(USBZTextStyle* InStyle) {
}

void USBZUITextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled) {
}

void USBZUITextBlock::SetColorStyle(USBZColorStyle* InStyle) {
}

void USBZUITextBlock::ResetScrollState() {
}


