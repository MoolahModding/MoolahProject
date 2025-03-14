#pragma once
#include "CoreMinimal.h"
#include "ESBZHackableActorState.generated.h"

UENUM(BlueprintType)
enum class ESBZHackableActorState : uint8 {
    Inactive,
    Active,
    Hacking,
    PendingSabotage,
    Sabotaged,
    NeedClearance,
    Unlocked,
    GainedAccess,
};

