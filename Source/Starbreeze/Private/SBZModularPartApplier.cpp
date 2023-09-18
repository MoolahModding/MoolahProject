#include "SBZModularPartApplier.h"

USBZModularPartApplier::USBZModularPartApplier() {
}

bool USBZModularPartApplier::NeedConfig() const {
    return false;
}

TArray<UClass*> USBZModularPartApplier::GetExpectedParts(const USBZModularPartDataAsset* PartAsset) const {
    return TArray<UClass*>();
}

bool USBZModularPartApplier::DoesConfigNeedParts() const {
    return false;
}

USBZModularPartConfig* USBZModularPartApplier::CreateNewConfig() {
    return NULL;
}


