#pragma once
#include "CoreMinimal.h"
#include "ESBZMatchmakingProvider.generated.h"

UENUM(BlueprintType)
enum class ESBZMatchmakingProvider : uint8 {
    Accelbyte,
    AmazonGameLift,
    EdgeGap,
    MAX,
};

