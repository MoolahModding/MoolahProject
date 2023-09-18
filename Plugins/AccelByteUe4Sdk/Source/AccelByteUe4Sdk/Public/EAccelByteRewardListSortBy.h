#pragma once
#include "CoreMinimal.h"
#include "EAccelByteRewardListSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteRewardListSortBy : uint8 {
    NONE,
    NAMESPACE,
    NAMESPACE_ASC,
    NAMESPACE_DESC,
    REWARDCODE,
    REWARDCODE_ASC,
    REWARDCODE_DESC,
};

