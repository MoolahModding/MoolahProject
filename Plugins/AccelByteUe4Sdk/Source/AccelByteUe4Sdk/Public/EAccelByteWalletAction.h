#pragma once
#include "CoreMinimal.h"
#include "EAccelByteWalletAction.generated.h"

UENUM(BlueprintType)
enum class EAccelByteWalletAction : uint8 {
    NONE,
    CREDIT,
    PAYMENT,
    DEBIT,
};

