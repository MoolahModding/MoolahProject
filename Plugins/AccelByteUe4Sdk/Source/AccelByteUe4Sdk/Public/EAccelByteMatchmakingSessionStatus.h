#pragma once
#include "CoreMinimal.h"
#include "EAccelByteMatchmakingSessionStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteMatchmakingSessionStatus : uint8 {
    None,
    Matched,
    Done,
    Cancel,
    Timeout,
    SessionInQueue,
    SessionFull,
    SessionTimeout,
};

