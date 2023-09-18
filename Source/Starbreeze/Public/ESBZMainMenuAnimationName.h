#pragma once
#include "CoreMinimal.h"
#include "ESBZMainMenuAnimationName.generated.h"

UENUM(BlueprintType)
enum class ESBZMainMenuAnimationName : uint8 {
    IdleSequence,
    PrePlanningSequence,
    SuitVisualization,
    GloveVisualization,
};

