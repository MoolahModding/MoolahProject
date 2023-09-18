#pragma once
#include "CoreMinimal.h"
#include "ESBZLifeActionState.generated.h"

UENUM(BlueprintType)
enum class ESBZLifeActionState : uint8 {
    Stopped,
    Pending,
    Entering,
    Playing,
    Exiting,
};

