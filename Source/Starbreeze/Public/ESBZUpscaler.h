#pragma once
#include "CoreMinimal.h"
#include "ESBZUpscaler.generated.h"

UENUM(BlueprintType)
enum class ESBZUpscaler : uint8 {
    None,
    Unreal,
    NIS,
    DLSSSR,
    FSR2,
    XeSS,
    MAX,
};

