#pragma once
#include "CoreMinimal.h"
#include "ESBZHurtReactionPose.generated.h"

UENUM(BlueprintType)
enum class ESBZHurtReactionPose : uint8 {
    Standing,
    Crouching,
    LyingOnFront,
    LyingOnBack,
};

