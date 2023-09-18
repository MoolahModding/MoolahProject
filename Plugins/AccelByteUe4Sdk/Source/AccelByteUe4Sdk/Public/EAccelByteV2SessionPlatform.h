#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2SessionPlatform.generated.h"

UENUM(BlueprintType)
enum class EAccelByteV2SessionPlatform : uint8 {
    Unknown,
    Steam,
    EOS,
    Xbox,
    PS4,
    PS5,
};

