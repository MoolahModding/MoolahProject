#pragma once
#include "CoreMinimal.h"
#include "ESBZColorBlindMode.generated.h"

UENUM(BlueprintType)
enum class ESBZColorBlindMode : uint8 {
    Off,
    Deuteranope,
    Protanope,
    Tritanope,
    Invalid = 0xFF,
};

