#pragma once
#include "CoreMinimal.h"
#include "EAccelByteLeaderboardTimeFrame.generated.h"

UENUM(BlueprintType)
enum class EAccelByteLeaderboardTimeFrame : uint8 {
    ALL_TIME,
    CURRENT_SEASON,
    CURRENT_MONTH,
    CURRENT_WEEK,
    TODAY,
};

