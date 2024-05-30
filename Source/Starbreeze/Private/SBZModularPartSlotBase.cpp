#include "SBZModularPartSlotBase.h"
#include "SBZModularPartDataAsset.h"

USBZModularPartSlotBase::USBZModularPartSlotBase() {
    this->ModularPartClass = USBZModularPartDataAsset::StaticClass();
    this->ApplierClass = NULL;
    this->ApplierPriority = 0;
    this->ApplierInstance = NULL;
}

void USBZModularPartSlotBase::GetDisplayName(FText& OutDisplayName, bool& OutHasText) const {
}

USBZModularPartApplier* USBZModularPartSlotBase::GetApplierInstance() const {
    return NULL;
}


