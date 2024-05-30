#pragma once
#include "CoreMinimal.h"
#include "ESBZAntiAliasingMode.generated.h"

UENUM()
enum class ESBZAntiAliasingMode {
    Off,
    FXAA,
    Performance,
    Quality,
    DLAA,
    XeSS,
    Invalid = -1,
};

