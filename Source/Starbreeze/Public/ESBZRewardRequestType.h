#pragma once
#include "CoreMinimal.h"
#include "ESBZRewardRequestType.generated.h"

UENUM(BlueprintType)
enum class ESBZRewardRequestType : uint8 {
    HeistCompleted,
    Renown,
};

