#pragma once
#include "CoreMinimal.h"
#include "ESBZLagReductionMode.generated.h"

UENUM(BlueprintType)
enum class ESBZLagReductionMode : uint8 {
    Off,
    On,
    OnPlusBoost,
    MAX,
};

