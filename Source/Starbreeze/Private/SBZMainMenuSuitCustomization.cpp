#include "SBZMainMenuSuitCustomization.h"

USBZMainMenuSuitCustomization::USBZMainMenuSuitCustomization() {
    this->SuitSlotIndex = -1;
    this->StackValue = TEXT("Default__SBZMainMenuSuitCustomization");
}

USBZModularPartDataAsset* USBZMainMenuSuitCustomization::GetCosmeticItemInSlot(ESBZSuitPart SuitPart, const USBZCosmeticsPartSlot* InCosmeticPartSlot) {
    return NULL;
}


