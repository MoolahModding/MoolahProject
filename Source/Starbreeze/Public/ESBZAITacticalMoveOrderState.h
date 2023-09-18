#pragma once
#include "CoreMinimal.h"
#include "ESBZAITacticalMoveOrderState.generated.h"

UENUM(BlueprintType)
enum class ESBZAITacticalMoveOrderState : uint8 {
    None,
    Move,
    Wait,
    Breach,
    End,
    MAX,
};

