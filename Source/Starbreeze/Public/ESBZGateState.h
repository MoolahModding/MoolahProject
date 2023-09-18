#pragma once
#include "CoreMinimal.h"
#include "ESBZGateState.generated.h"

UENUM(BlueprintType)
enum class ESBZGateState : uint8 {
    OpenForward,
    OpenBackward,
    SlammedClose,
    Closed,
    Locked,
    Sealed,
    Barricaded,
    BreachedForward,
    BreachedBackward,
    SlammedOpenForward,
    SlammedOpenBackward,
};

