#pragma once
#include "CoreMinimal.h"
#include "ESBZRequestPresenceResult.generated.h"

UENUM(BlueprintType)
enum class ESBZRequestPresenceResult : uint8 {
    Success,
    AlreadyConnectedOnOtherPlatform,
    GetPresenceFailed,
};

