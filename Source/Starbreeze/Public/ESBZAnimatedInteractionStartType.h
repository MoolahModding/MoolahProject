#pragma once
#include "CoreMinimal.h"
#include "ESBZAnimatedInteractionStartType.generated.h"

UENUM(BlueprintType)
enum class ESBZAnimatedInteractionStartType : uint8 {
    OnStart,
    OnCompleted,
};

