#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementUpdatedAction.generated.h"

UENUM(BlueprintType)
enum class EAccelByteEntitlementUpdatedAction : uint8 {
    Grant,
    Sell,
    Split,
    Delete,
    Update,
    Transfer,
    Consume,
    Revoke,
    Disable,
    Enable,
    Unknown,
};

