#pragma once
#include "CoreMinimal.h"
#include "ESBZToggleState.generated.h"

UENUM(BlueprintType)
enum class ESBZToggleState : uint8 {
    Off,
    On,
    Invalid = -0x1,
};

