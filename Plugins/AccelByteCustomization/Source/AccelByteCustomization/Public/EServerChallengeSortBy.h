#pragma once
#include "CoreMinimal.h"
#include "EServerChallengeSortBy.generated.h"

UENUM(BlueprintType)
enum class EServerChallengeSortBy : uint8 {
    NONE,
    NAME_ASC,
    NAME_DESC,
    ORDER_ASC,
    ORDER_DESC,
    TAGS_ASC,
    TAGS_DESC,
    CREATED_ASC,
    CREATED_DESC,
};

