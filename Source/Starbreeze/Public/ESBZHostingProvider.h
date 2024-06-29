#pragma once
#include "CoreMinimal.h"
#include "ESBZHostingProvider.generated.h"

UENUM(BlueprintType)
enum class ESBZHostingProvider : uint8 {
    Accelbyte,
    AmazonGameLift,
    EdgeGap,
    MAX,
};

