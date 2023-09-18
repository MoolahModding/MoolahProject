#pragma once
#include "CoreMinimal.h"
#include "EAccelByteLootBoxRewardType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteLootBoxRewardType : uint8 {
    PROBABILITY_GROUP,
    REWARD_GROUP,
    REWARD,
};

