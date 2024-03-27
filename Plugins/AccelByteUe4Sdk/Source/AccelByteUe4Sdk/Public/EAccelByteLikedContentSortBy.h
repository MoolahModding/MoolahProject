#pragma once
#include "CoreMinimal.h"
#include "EAccelByteLikedContentSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteLikedContentSortBy : uint8 {
    NAME,
    DOWNLOAD,
    LIKE,
    DATE,
};

