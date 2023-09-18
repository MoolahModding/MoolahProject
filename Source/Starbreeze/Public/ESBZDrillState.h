#pragma once
#include "CoreMinimal.h"
#include "ESBZDrillState.generated.h"

UENUM(BlueprintType)
enum class ESBZDrillState : uint8 {
    None,
    Drilling,
    Jammed,
    Done,
};

