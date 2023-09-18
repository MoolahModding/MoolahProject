#pragma once
#include "CoreMinimal.h"
#include "ESBZCameraState.generated.h"

UENUM(BlueprintType)
enum class ESBZCameraState : uint8 {
    Enabled,
    Disabled,
    Destroyed,
};

