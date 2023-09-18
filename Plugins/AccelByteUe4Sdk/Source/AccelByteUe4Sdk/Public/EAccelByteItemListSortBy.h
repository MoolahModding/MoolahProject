#pragma once
#include "CoreMinimal.h"
#include "EAccelByteItemListSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteItemListSortBy : uint8 {
    NONE,
    NAME,
    NAME_DESC,
    CREATEDAT,
    CREATEDAT_ASC,
    CREATEDAT_DESC,
    UPDATEDAT,
    UPDATEDAT_ASC,
    UPDATEDAT_DESC,
    DISPLAYORDER,
    DISPLAYORDER_ASC,
    DISPLAYORDER_DESC,
};

