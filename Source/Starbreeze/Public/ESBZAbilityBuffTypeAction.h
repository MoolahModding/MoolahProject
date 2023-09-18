#pragma once
#include "CoreMinimal.h"
#include "ESBZAbilityBuffTypeAction.generated.h"

UENUM(BlueprintType)
enum class ESBZAbilityBuffTypeAction : uint8 {
    Gain,
    GainRefresh,
    Refresh,
    Consume,
};

