#pragma once
#include "CoreMinimal.h"
#include "ESBZAIVisibilityStances.generated.h"

UENUM(BlueprintType)
enum class ESBZAIVisibilityStances : uint8 {
    None,
    Crouch,
    Stand,
    Invalid,
};

