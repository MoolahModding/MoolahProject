#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformRewardSource.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePlatformRewardSource : uint8 {
    NONE,
    PURCHASE,
    IAP,
    PROMOTION,
    ACHIEVEMENT,
    REFERRAL_BONUS,
    REDEEM_CODE,
    REWARD,
    GIFT,
    DLC,
    OTHER,
    SELL_BACK,
    CONSUME_ENTITLEMENT,
    ORDER_REVOCATION,
    DLC_REVOCATION,
    PAYMENT,
    EXPIRATION,
};

