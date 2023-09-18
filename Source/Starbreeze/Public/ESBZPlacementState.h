#pragma once
#include "CoreMinimal.h"
#include "ESBZPlacementState.generated.h"

UENUM(BlueprintType)
enum class ESBZPlacementState : uint8 {
    None,
    Invalid,
    Valid,
};

