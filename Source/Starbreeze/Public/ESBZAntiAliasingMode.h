#pragma once
#include "CoreMinimal.h"
#include "ESBZAntiAliasingMode.generated.h"

UENUM(BlueprintType)
enum class ESBZAntiAliasingMode : uint8 {
    Off,
    FXAA,
    Performance,
    Quality,
    DLAA,
    FSR3,
    XeSS,
    Max,
};

