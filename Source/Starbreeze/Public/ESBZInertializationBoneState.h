#pragma once
#include "CoreMinimal.h"
#include "ESBZInertializationBoneState.generated.h"

UENUM(BlueprintType)
enum class ESBZInertializationBoneState : uint8 {
    Invalid,
    Valid,
    Excluded,
};

