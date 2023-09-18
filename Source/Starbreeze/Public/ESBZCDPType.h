#pragma once
#include "CoreMinimal.h"
#include "ESBZCDPType.generated.h"

UENUM(BlueprintType)
enum class ESBZCDPType : uint8 {
    Float,
    Boolean,
    Integer,
    ColorRGB,
    ColorRGBA,
    SelectRBG,
    Pattern,
    Digits,
};

