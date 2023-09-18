#pragma once
#include "CoreMinimal.h"
#include "EChallengeStatusEnum.generated.h"

UENUM(BlueprintType)
enum class EChallengeStatusEnum : uint8 {
    INIT,
    INPROGRESS,
    COMPLETED,
    UNAVAILABLE,
};

