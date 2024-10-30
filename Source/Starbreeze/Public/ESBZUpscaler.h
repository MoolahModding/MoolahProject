#pragma once
#include "CoreMinimal.h"
#include "ESBZUpscaler.generated.h"

UENUM(BlueprintType)
enum class ESBZUpscaler : uint8 {
    None,
    Unreal,
    NIS,
    DLSSSR,
    FSR3,
    XeSS,
    MAX,
};

