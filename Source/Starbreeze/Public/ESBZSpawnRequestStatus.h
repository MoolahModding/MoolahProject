#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnRequestStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZSpawnRequestStatus : uint8 {
    Pending,
    Started,
    Finished,
    Canceled,
    TimedOut,
};

