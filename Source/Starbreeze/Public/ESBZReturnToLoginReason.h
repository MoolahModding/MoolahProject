#pragma once
#include "CoreMinimal.h"
#include "ESBZReturnToLoginReason.generated.h"

UENUM(BlueprintType)
enum class ESBZReturnToLoginReason : uint8 {
    Unknown,
    FailedToFetchBackendData,
};

