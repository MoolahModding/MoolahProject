#pragma once
#include "CoreMinimal.h"
#include "EAccelByteGlobalAchievementContributorsSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteGlobalAchievementContributorsSortBy : uint8 {
    NONE,
    CONTRIBUTED_VALUE,
    CONTRIBUTED_VALUE_ASC,
    CONTRIBUTED_VALUE_DESC,
};

