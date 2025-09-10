#pragma once
#include "CoreMinimal.h"
#include "EAccelByteWalletStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteWalletStatus : uint8 {
    NONE,
    ACTIVE,
    INACTIVE,
};

