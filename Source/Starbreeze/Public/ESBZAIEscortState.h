#pragma once
#include "CoreMinimal.h"
#include "ESBZAIEscortState.generated.h"

UENUM(BlueprintType)
enum class ESBZAIEscortState : uint8 {
    None,
    GoToEscortPoint,
    Pickup,
    Start,
    Warn,
    EscortEndWarning,
    MAX,
};

