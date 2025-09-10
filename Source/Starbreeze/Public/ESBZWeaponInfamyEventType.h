#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponInfamyEventType.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponInfamyEventType : uint8 {
    InfamyUpdated,
    VendorItemsUpdated,
    UIShowVendorItems,
};

