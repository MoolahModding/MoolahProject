#pragma once
#include "CoreMinimal.h"
#include "ESBZCurrentPlatform.generated.h"

UENUM(BlueprintType)
enum class ESBZCurrentPlatform : uint8 {
    EP_UNKNOWN,
    EP_LINUX,
    EP_PC,
    EP_MAC,
    EP_XBOX,
    EP_PLAYSTATION,
    EP_MAX UMETA(Hidden),
};

