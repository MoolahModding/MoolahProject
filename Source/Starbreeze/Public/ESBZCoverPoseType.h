#pragma once
#include "CoreMinimal.h"
#include "ESBZCoverPoseType.generated.h"

UENUM(BlueprintType)
enum class ESBZCoverPoseType : uint8 {
    Stand,
    Crouch,
    None,
};

