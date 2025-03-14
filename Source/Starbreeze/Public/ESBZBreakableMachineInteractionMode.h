#pragma once
#include "CoreMinimal.h"
#include "ESBZBreakableMachineInteractionMode.generated.h"

UENUM(BlueprintType)
enum class ESBZBreakableMachineInteractionMode : uint8 {
    ForceOpen,
    Open,
    Loot,
    None,
    MAX,
};

