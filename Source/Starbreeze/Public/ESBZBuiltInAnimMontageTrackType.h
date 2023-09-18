#pragma once
#include "CoreMinimal.h"
#include "ESBZBuiltInAnimMontageTrackType.generated.h"

UENUM(BlueprintType)
enum class ESBZBuiltInAnimMontageTrackType : uint8 {
    X,
    Y,
    Z,
    Pitch,
    Yaw,
    Roll,
};

