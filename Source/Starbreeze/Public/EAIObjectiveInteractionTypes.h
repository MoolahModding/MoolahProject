#pragma once
#include "CoreMinimal.h"
#include "EAIObjectiveInteractionTypes.generated.h"

UENUM(BlueprintType)
enum class EAIObjectiveInteractionTypes : uint8 {
    DirectInteraction,
    CutGlassInteraction,
    ThrowInteraction,
    MoveToAndWait,
    MAX,
};

