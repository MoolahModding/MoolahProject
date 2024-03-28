#include "SBZHUDWidgetBase.h"


void USBZHUDWidgetBase::OnUITagsChanged(const FGameplayTagContainer& UITagContainer) {
}

bool USBZHUDWidgetBase::HasRequiredTags() const {
    return false;
}

USBZHUDWidgetBase::USBZHUDWidgetBase() {
    this->bHasRequiredTags = false;
}

