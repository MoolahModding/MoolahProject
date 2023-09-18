#pragma once
#include "CoreMinimal.h"
#include "ESBZHackableActorInterruptReason.generated.h"

UENUM(BlueprintType)
enum class ESBZHackableActorInterruptReason : uint8 {
    Sabotage,
    NeedClearance,
    PendingSabotage,
};

