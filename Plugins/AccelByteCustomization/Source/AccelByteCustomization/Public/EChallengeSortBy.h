#pragma once
#include "CoreMinimal.h"
#include "EChallengeSortBy.generated.h"

UENUM(BlueprintType)
enum class EChallengeSortBy : uint8 {
    NONE,
    NAME_ASC,
    NAME_DESC,
    ORDER_ASC,
    ORDER_DESC,
    TAGS_ASC,
    TAGS_DESC,
    STATUS_ASC,
    STATUS_DESC,
};

