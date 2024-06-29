#pragma once
#include "CoreMinimal.h"
#include "ESBZRandomRewardReason.generated.h"

UENUM(BlueprintType)
enum class ESBZRandomRewardReason : uint8 {
    HeistSuccessfullyCompleted,
    RenownLeveledUp,
    InfamyLeveledUp,
};

