#pragma once
#include "CoreMinimal.h"
#include "EAccelByteWalletStatusChangedAction.generated.h"

UENUM(BlueprintType)
enum class EAccelByteWalletStatusChangedAction : uint8 {
    Enable,
    Disable,
    Unknown,
};

