#pragma once
#include "CoreMinimal.h"
#include "EAccelByteItemSource.generated.h"

UENUM(BlueprintType)
enum class EAccelByteItemSource : uint8 {
    NONE,
    PURCHASE,
    IAP,
    PROMOTION,
    ACHIEVEMENT,
    REFERRAL_BONUS,
    REDEEM_CODE,
    OTHER,
};

