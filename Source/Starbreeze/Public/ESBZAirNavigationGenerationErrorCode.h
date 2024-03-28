#pragma once
#include "CoreMinimal.h"
#include "ESBZAirNavigationGenerationErrorCode.generated.h"

UENUM(BlueprintType)
enum class ESBZAirNavigationGenerationErrorCode : uint8 {
    Success,
    MaxSizeExceeded,
    MaxNodesExceeded,
};

