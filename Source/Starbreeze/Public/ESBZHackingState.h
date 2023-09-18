#pragma once
#include "CoreMinimal.h"
#include "ESBZHackingState.generated.h"

UENUM(BlueprintType)
enum class ESBZHackingState : uint8 {
    NotHacked,
    Hacked,
    Overloaded,
    Disabled,
    Destroyed,
};

