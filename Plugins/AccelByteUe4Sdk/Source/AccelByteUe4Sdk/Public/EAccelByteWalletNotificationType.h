#pragma once
#include "CoreMinimal.h"
#include "EAccelByteWalletNotificationType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteWalletNotificationType : uint8 {
    WalletStatusChanged,
    WalletBalanceChanged,
    Unknown,
};

