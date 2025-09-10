#pragma once
#include "CoreMinimal.h"
#include "EAccelByteWalletBalanceChangedAction.generated.h"

UENUM(BlueprintType)
enum class EAccelByteWalletBalanceChangedAction : uint8 {
    Payment,
    Debit,
    Expire,
    Credit,
    Transaction_cancelled,
    Unknown,
};

