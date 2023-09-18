#pragma once
#include "CoreMinimal.h"
#include "ESBZMarkerState.generated.h"

UENUM(BlueprintType)
enum class ESBZMarkerState : uint8 {
    Suspicious,
    Alerted,
    Alarm,
    Escalate,
    Escort,
    PreEscort,
    Arrest,
    Sabotage,
    Bag,
    Investigate,
    None,
};

