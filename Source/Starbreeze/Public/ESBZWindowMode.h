#pragma once
#include "CoreMinimal.h"
#include "ESBZWindowMode.generated.h"

UENUM(BlueprintType)
enum class ESBZWindowMode : uint8 {
    FullScreen,
    Borderless,
    Windowed,
    Invalid = 0xFF,
};

