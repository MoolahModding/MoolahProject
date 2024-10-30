#pragma once
#include "CoreMinimal.h"
#include "ESBZConsumableInteractableMode.generated.h"

UENUM(BlueprintType)
enum class ESBZConsumableInteractableMode : uint8 {
    Pickup,
    Use,
    None,
    MAX,
};

