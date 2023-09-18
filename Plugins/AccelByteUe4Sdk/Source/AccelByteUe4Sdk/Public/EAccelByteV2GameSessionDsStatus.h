#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2GameSessionDsStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteV2GameSessionDsStatus : uint8 {
    EMPTY,
    NEED_TO_REQUEST,
    REQUESTED,
    AVAILABLE,
    FAILED_TO_REQUEST,
    ENDED,
    UNKNOWN,
    DS_ERROR,
};

