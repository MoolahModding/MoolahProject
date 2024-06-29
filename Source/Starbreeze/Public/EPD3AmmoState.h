#pragma once
#include "CoreMinimal.h"
#include "EPD3AmmoState.generated.h"

UENUM(BlueprintType)
enum class EPD3AmmoState : uint8 {
    Normal,
    Low,
    Critical,
    Default = Normal,
};

