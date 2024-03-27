#pragma once
#include "CoreMinimal.h"
#include "EAccelByteSubscriptionSummarySubscribedBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteSubscriptionSummarySubscribedBy : uint8 {
    NONE,
    USER,
    PLATFORM,
};

