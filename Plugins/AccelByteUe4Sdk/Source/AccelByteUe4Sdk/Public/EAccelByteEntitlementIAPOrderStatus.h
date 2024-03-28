#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementIAPOrderStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteEntitlementIAPOrderStatus : uint8 {
    NONE,
    VERIFIED,
    FULFILLED,
    FAILED,
};

