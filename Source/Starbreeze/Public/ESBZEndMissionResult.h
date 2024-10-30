#pragma once
#include "CoreMinimal.h"
#include "ESBZEndMissionResult.generated.h"

UENUM(BlueprintType)
enum class ESBZEndMissionResult : uint8 {
    Fail,
    Success,
    Timeout,
    Unknown,
};

