#pragma once
#include "CoreMinimal.h"
#include "ESBZAntiAliasingMode.generated.h"

UENUM(BlueprintType)
enum class ESBZAntiAliasingMode : uint8 {
    Off,
    FXAA,
    Performance,
    Quality,
    Invalid = -0x1,
};

