#pragma once
#include "CoreMinimal.h"
#include "ESBZHackableActorState.generated.h"

UENUM(BlueprintType)
enum class ESBZHackableActorState : uint8 {
    Inactive,
    Active,
    Hacking,
    Sabotaged,
    NeedClearance,
    Unlocked,
    GainedAccess,
    PendingSabotage,
};

