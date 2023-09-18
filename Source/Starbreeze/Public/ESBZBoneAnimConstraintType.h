#pragma once
#include "CoreMinimal.h"
#include "ESBZBoneAnimConstraintType.generated.h"

UENUM(BlueprintType)
enum class ESBZBoneAnimConstraintType : uint8 {
    Static,
    FollowsBone,
};

