#pragma once
#include "CoreMinimal.h"
#include "ESBZAIInvestigateState.generated.h"

UENUM(BlueprintType)
enum class ESBZAIInvestigateState : uint8 {
    None,
    Move,
    UrgentMove,
    Investigate,
    MAX,
};

