#pragma once
#include "CoreMinimal.h"
#include "ESBZPoseType.generated.h"

UENUM(BlueprintType)
enum class ESBZPoseType : uint8 {
    FullBody,
    UpperBody,
    UpperBodyEquipped,
    UpperBodyEquippedReady,
    UpperBodyEquippedRelaxed,
    UpperBodyUsingEquipped,
    UpperBodyLeftHandEquipped,
    UpperBodyLeftHandEquippedUsing,
};

