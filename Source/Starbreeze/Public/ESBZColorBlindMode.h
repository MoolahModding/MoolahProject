#pragma once
#include "CoreMinimal.h"
#include "ESBZColorBlindMode.generated.h"

UENUM()
enum class ESBZColorBlindMode {
    Off,
    Deuteranope,
    Protanope,
    Tritanope,
    Invalid = -1,
};

