#pragma once
#include "CoreMinimal.h"
#include "ESBZFrameInterpolator.generated.h"

UENUM(BlueprintType)
enum class ESBZFrameInterpolator : uint8 {
    None,
    DLSSG,
    FFXFI,
    MAX,
};

