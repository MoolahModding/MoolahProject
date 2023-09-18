#pragma once
#include "CoreMinimal.h"
#include "EAccelByteSubscriptionCycle.generated.h"

UENUM(BlueprintType)
enum class EAccelByteSubscriptionCycle : uint8 {
    WEEKLY,
    MONTHLY,
    QUARTERLY,
    YEARLY,
};

