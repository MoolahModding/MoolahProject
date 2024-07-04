#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerHandRigTransformType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlayerHandRigTransformType : uint8 {
    None,
    Default,
    Crouched,
};

