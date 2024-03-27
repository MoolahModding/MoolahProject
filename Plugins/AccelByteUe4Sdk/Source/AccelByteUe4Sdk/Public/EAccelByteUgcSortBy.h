#pragma once
#include "CoreMinimal.h"
#include "EAccelByteUgcSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteUgcSortBy : uint8 {
    NAME,
    DOWNLOAD,
    LIKE,
    DATE,
    UPDATED_TIME,
};

