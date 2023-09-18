#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2SessionConfigurationServerType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteV2SessionConfigurationServerType : uint8 {
    EMPTY,
    NONE,
    DS,
    P2P,
};

