#pragma once
#include "CoreMinimal.h"
#include "EPD3AmmoState.generated.h"

UENUM(BlueprintType)
enum class EPD3AmmoState : uint8 {
    Normal,
    Low,
    Critical,
    Default = 0x0,
    Normal = 0x0,
};

