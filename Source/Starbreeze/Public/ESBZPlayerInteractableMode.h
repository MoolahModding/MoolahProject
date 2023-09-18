#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerInteractableMode.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerInteractableMode : uint8 {
    Revive,
    Uncuff,
    Disengage,
    MAX,
};

