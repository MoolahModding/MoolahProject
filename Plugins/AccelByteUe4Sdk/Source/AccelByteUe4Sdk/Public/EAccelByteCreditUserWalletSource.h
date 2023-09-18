#pragma once
#include "CoreMinimal.h"
#include "EAccelByteCreditUserWalletSource.generated.h"

UENUM(BlueprintType)
enum class EAccelByteCreditUserWalletSource : uint8 {
    PURCHASE,
    IAP,
    PROMOTION,
    ACHIEVEMENT,
    REFERRAL_BONUS,
    REDEEM_CODE,
    REFUND,
    OTHER,
};

