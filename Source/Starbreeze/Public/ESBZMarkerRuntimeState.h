#pragma once
#include "CoreMinimal.h"
#include "ESBZMarkerRuntimeState.generated.h"

UENUM(BlueprintType)
enum class ESBZMarkerRuntimeState : uint8 {
    None,
    OffScreen,
    OnScreen,
    InVolume,
};

