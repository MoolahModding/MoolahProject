#pragma once
#include "CoreMinimal.h"
#include "ESBZThermiteBurnState.generated.h"

UENUM(BlueprintType)
enum class ESBZThermiteBurnState : uint8 {
    Inactive,
    Unlit,
    Completed,
    Burning,
    CriticalBurning,
    FlashOver,
};

