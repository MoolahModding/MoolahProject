#include "SBZHUDLootSecureNotification.h"

USBZHUDLootSecureNotification::USBZHUDLootSecureNotification() {
}

USBZBagType* USBZHUDLootSecureNotification::PeekNextBag() const {
    return NULL;
}


bool USBZHUDLootSecureNotification::HasBagsInQueue() const {
    return false;
}

USBZBagType* USBZHUDLootSecureNotification::GetNextBagInQueue() {
    return NULL;
}

int32 USBZHUDLootSecureNotification::GetLootBagDisplayValue(const USBZBagType* InBagSecured) {
    return 0;
}

FText USBZHUDLootSecureNotification::GetLootBagDisplayName(const USBZBagType* InBagSecured) {
    return FText::GetEmpty();
}


