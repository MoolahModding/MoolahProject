#pragma once
#include "CoreMinimal.h"
#include "ESBZObjectiveState.generated.h"

UENUM(BlueprintType)
enum class ESBZObjectiveState : uint8 {
    None,
    Active,
    Failed,
    Complete,
    Disabled,
};

