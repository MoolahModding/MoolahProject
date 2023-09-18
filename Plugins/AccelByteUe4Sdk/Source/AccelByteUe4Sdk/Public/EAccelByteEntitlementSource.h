#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementSource.generated.h"

UENUM(BlueprintType)
enum class EAccelByteEntitlementSource : uint8 {
    NONE,
    PURCHASE,
    IAP,
    PROMOTION,
    ACHIEVEMENT,
    REFERRAL_BONUS,
    REDEEM_CODE,
    REWARD,
    GIFT,
    OTHER,
};

