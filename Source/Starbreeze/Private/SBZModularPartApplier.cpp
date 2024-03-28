#include "SBZModularPartApplier.h"
#include "Templates/SubclassOf.h"

bool USBZModularPartApplier::NeedConfig() const {
    return false;
}

TArray<TSubclassOf<USBZModularPartDataAsset>> USBZModularPartApplier::GetExpectedParts(const USBZModularPartDataAsset* PartAsset) const {
    return TArray<TSubclassOf<USBZModularPartDataAsset>>();
}

bool USBZModularPartApplier::DoesConfigNeedParts() const {
    return false;
}

USBZModularPartConfig* USBZModularPartApplier::CreateNewConfig() {
    return NULL;
}

USBZModularPartApplier::USBZModularPartApplier() {
}

