#pragma once
#include "CoreMinimal.h"
#include "EAccelByteMatchmakingStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteMatchmakingStatus : uint8 {
    Unknown,
    Start,
    Timeout,
    Cancel,
    Done,
    Unavailable,
    Rejected,
};

