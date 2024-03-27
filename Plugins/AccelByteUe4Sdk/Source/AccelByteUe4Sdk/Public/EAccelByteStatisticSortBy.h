#pragma once
#include "CoreMinimal.h"
#include "EAccelByteStatisticSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteStatisticSortBy : uint8 {
    NONE,
    STAT_CODE,
    STAT_CODE_ASC,
    STAT_CODE_DESC,
    CREATED_AT,
    CREATED_AT_ASC,
    CREATED_AT_DESC,
    UPDATED_AT,
    UPDATED_AT_ASC,
    UPDATED_AT_DESC,
};

