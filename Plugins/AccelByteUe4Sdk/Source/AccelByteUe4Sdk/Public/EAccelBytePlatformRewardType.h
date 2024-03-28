#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformRewardType.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePlatformRewardType : uint8 {
    NONE,
    ITEM,
    CURRENCY,
};

