#include "SBZHUDWidgetBase.h"

USBZHUDWidgetBase::USBZHUDWidgetBase() {
    this->bHasRequiredTags = false;
}


void USBZHUDWidgetBase::OnUITagsChanged(const FGameplayTagContainer& UITagContainer) {
}

bool USBZHUDWidgetBase::HasRequiredTags() const {
    return false;
}


