#pragma once
#include "CoreMinimal.h"
#include "EAccelByteSubscriptionSummaryStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteSubscriptionSummaryStatus : uint8 {
    NONE,
    INIT,
    ACTIVE,
    CANCELLED,
    EXPIRED,
};

