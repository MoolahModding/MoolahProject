#pragma once
#include "CoreMinimal.h"
#include "ESBZChromaDevice.generated.h"

UENUM(BlueprintType)
enum class ESBZChromaDevice : uint8 {
    Keyboard,
    Mouse,
    Headset,
    Mousepad,
    Keypad,
    ChromaLink,
    NumDevices,
};

