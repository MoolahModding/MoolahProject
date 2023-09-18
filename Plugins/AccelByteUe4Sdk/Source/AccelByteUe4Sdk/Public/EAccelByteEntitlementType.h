#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteEntitlementType : uint8 {
    NONE,
    DURABLE,
    CONSUMABLE,
};

