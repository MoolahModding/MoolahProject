#pragma once
#include "CoreMinimal.h"
#include "ESBZInertializationState.generated.h"

UENUM(BlueprintType)
enum class ESBZInertializationState : uint8 {
    Inactive,
    Pending,
    Active,
};

