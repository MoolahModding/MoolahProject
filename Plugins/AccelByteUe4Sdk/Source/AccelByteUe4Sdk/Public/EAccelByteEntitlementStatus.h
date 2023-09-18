#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteEntitlementStatus : uint8 {
    NONE,
    ACTIVE,
    INACTIVE,
    CONSUMED,
    REVOKED,
};

