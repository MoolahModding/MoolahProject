#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementItemIdentityType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteEntitlementItemIdentityType : uint8 {
    NONE,
    ITEM_ID,
    ITEM_SKU,
};

