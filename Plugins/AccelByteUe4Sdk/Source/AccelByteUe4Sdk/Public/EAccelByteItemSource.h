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
    REWARD,
    GIFT,
    DLC,
    SELL_BACK,
    CONSUME_ENTITLEMENT,
    ORDER_REVOCATION,
    PAYMENT,
    EXPIRATION,
    IAP_CHARGEBACK_REVERSED,
    OTHER,
};

