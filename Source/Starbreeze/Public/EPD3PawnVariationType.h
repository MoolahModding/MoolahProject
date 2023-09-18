#pragma once
#include "CoreMinimal.h"
#include "EPD3PawnVariationType.generated.h"

UENUM(BlueprintType)
enum class EPD3PawnVariationType : uint8 {
    America,
    MAX,
    DEFAULT = 0x0,
};

