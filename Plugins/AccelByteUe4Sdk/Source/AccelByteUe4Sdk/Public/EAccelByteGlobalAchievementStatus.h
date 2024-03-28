#pragma once
#include "CoreMinimal.h"
#include "EAccelByteGlobalAchievementStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteGlobalAchievementStatus : uint8 {
    NONE,
    IN_PROGRESS,
    UNLOCKED,
};

