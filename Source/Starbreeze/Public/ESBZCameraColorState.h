#pragma once
#include "CoreMinimal.h"
#include "ESBZCameraColorState.generated.h"

UENUM(BlueprintType)
enum class ESBZCameraColorState : uint8 {
    None,
    AIControlled,
    Hacked,
    Friendly,
};

