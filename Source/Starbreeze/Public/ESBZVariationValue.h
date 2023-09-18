#pragma once
#include "CoreMinimal.h"
#include "ESBZVariationValue.generated.h"

UENUM(BlueprintType)
enum class ESBZVariationValue : uint8 {
    A = 0x6,
    B = 0x5,
    C = 0x4,
    D = 0x3,
    E = 0x2,
    F = 0x1,
    G = 0x0,
};

