#pragma once
#include "CoreMinimal.h"
#include "ESBZHumanShieldInstigatorState.generated.h"

UENUM(BlueprintType)
enum class ESBZHumanShieldInstigatorState : uint8 {
    None,
    ReachingSlot,
    EnterGrabbing,
    Grabbing,
    Choking,
    Exiting,
};

