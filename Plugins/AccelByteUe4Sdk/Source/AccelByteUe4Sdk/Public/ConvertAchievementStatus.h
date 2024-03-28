#pragma once
#include "CoreMinimal.h"
#include "ConvertAchievementStatus.generated.h"

UENUM(BlueprintType)
enum class ConvertAchievementStatus : uint8 {
    NONE,
    IN_PROGRESS,
    UNLOCKED,
};

