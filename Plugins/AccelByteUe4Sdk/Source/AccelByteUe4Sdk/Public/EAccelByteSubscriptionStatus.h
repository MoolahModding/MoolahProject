#pragma once
#include "CoreMinimal.h"
#include "EAccelByteSubscriptionStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteSubscriptionStatus : uint8 {
    ACTIVE,
    EXPIRED,
    IN_GRACE_PERIOD,
    BILLING_RETRY_PERIOD,
    REVOKED,
    PENDING,
    PAUSED,
    ON_HOLD,
    CANCELED,
    UNKNOWN,
};

