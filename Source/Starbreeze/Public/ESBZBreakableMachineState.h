#pragma once
#include "CoreMinimal.h"
#include "ESBZBreakableMachineState.generated.h"

UENUM(BlueprintType)
enum class ESBZBreakableMachineState : uint8 {
    Closed,
    Open,
    OpenBroken,
    None,
};

