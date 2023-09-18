#pragma once
#include "CoreMinimal.h"
#include "ESBZPlaceableChargeState.generated.h"

UENUM(BlueprintType)
enum class ESBZPlaceableChargeState : uint8 {
    None,
    Activating,
    Thrown,
    Placed,
    Canceled,
};

