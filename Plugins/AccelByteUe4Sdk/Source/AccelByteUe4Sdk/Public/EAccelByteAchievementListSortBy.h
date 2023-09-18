#pragma once
#include "CoreMinimal.h"
#include "EAccelByteAchievementListSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteAchievementListSortBy : uint8 {
    NONE,
    LISTORDER,
    LISTORDER_ASC,
    LISTORDER_DESC,
    CREATED_AT,
    CREATED_AT_ASC,
    CREATED_AT_DESC,
    UPDATED_AT,
    UPDATED_AT_ASC,
    UPDATED_AT_DESC,
};

