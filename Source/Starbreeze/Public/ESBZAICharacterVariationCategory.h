#pragma once
#include "CoreMinimal.h"
#include "ESBZAICharacterVariationCategory.generated.h"

UENUM(BlueprintType)
enum class ESBZAICharacterVariationCategory : uint8 {
    Default,
    Rescue,
    Sabotage,
    MAX,
};

