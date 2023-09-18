#pragma once
#include "CoreMinimal.h"
#include "ESBZThrowableState.generated.h"

UENUM(BlueprintType)
enum class ESBZThrowableState : uint8 {
    None,
    Spawned,
    Ready,
    AttachedForThrow,
    ThrownStillAttached,
    DetachedForThrow,
    Thrown,
    Canceled,
    Dropped,
};

