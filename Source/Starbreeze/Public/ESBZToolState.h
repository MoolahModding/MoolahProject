#pragma once
#include "CoreMinimal.h"
#include "ESBZToolState.generated.h"

UENUM(BlueprintType)
enum class ESBZToolState : uint8 {
    Ready,
    Activated,
    ActivatedUsing,
    ActivatedIdle,
    Canceled,
    Destroyed,
};

