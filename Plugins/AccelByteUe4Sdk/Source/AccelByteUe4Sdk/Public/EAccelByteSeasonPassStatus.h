#pragma once
#include "CoreMinimal.h"
#include "EAccelByteSeasonPassStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteSeasonPassStatus : uint8 {
    DRAFT,
    PUBLISHED,
    RETIRED,
};

