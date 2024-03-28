#include "PD3KeyItemContainer.h"

void UPD3KeyItemContainer::OnSharedKeyItemCountChanged(const FSBZSharedKeyItemTagChangedEvent& SharedKeyItemTagChangedEventData) {
}

void UPD3KeyItemContainer::OnKeyItemCountChanged(const FSBZKeyItemCountChangedEvent& KeyItemCountChangedEventData) {
}

UPD3KeyItemContainer::UPD3KeyItemContainer() {
    this->Panel_KeyItems = NULL;
    this->MaxDisplayedKeyItems = 5;
    this->bIsShared = false;
    this->KeyItemWidgetClass = NULL;
}

