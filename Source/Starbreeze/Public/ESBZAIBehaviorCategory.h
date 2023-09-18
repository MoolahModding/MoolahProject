#pragma once
#include "CoreMinimal.h"
#include "ESBZAIBehaviorCategory.generated.h"

UENUM(BlueprintType)
enum class ESBZAIBehaviorCategory : uint8 {
    None,
    Idle,
    Suspiscious,
    Combat,
    MAX,
};

