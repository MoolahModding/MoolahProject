#pragma once
#include "CoreMinimal.h"
#include "ESBZAICrewCharacterInteractableMode.generated.h"

UENUM(BlueprintType)
enum class ESBZAICrewCharacterInteractableMode : uint8 {
    PickUp,
    Revive,
    Uncuff,
    None,
    MAX,
};

