#pragma once
#include "CoreMinimal.h"
#include "EAccelByteUserEntitlementAction.generated.h"

UENUM(BlueprintType)
enum class EAccelByteUserEntitlementAction : uint8 {
    NONE,
    GRANT,
    UPDATE,
    DECREMENT,
    REVOKE,
    DISABLE,
    ENABLE,
    SELL_BACK,
};

