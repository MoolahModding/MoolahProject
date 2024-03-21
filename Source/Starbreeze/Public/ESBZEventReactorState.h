#pragma once
#include "CoreMinimal.h"
#include "ESBZEventReactorState.generated.h"

UENUM(BlueprintType)
enum class ESBZEventReactorState : uint8 {
    Inactive,
    Normal,
    Glitched,
    VeryGlitched,
    Destroyed,
    MAX,
};

