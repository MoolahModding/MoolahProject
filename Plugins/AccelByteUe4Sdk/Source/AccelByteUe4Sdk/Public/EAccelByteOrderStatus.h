#pragma once
#include "CoreMinimal.h"
#include "EAccelByteOrderStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteOrderStatus : uint8 {
    NONE,
    INIT,
    CHARGED,
    CHARGEBACK,
    CHARGEBACK_REVERSED,
    FULFILLED,
    FULFILL_FAILED,
    REFUNDING,
    REFUNDED,
    REFUND_FAILED,
    CLOSED,
    DELETED,
};

