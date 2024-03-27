#pragma once
#include "CoreMinimal.h"
#include "EAccelByteGlobalAchievementListSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteGlobalAchievementListSortBy : uint8 {
    NONE,
    ACHIEVED_AT,
    ACHIEVED_AT_ASC,
    ACHIEVED_AT_DESC,
    CREATED_AT,
    CREATED_AT_ASC,
    CREATED_AT_DESC,
};

