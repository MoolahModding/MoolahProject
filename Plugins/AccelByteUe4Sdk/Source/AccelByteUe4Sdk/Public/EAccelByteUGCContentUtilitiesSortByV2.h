#pragma once
#include "CoreMinimal.h"
#include "EAccelByteUGCContentUtilitiesSortByV2.generated.h"

UENUM(BlueprintType)
enum class EAccelByteUGCContentUtilitiesSortByV2 : uint8 {
    NONE,
    CREATED_TIME,
    CREATED_TIME_ASC,
    CREATED_TIME_DESC,
};

