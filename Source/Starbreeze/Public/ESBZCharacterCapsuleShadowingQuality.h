#pragma once
#include "CoreMinimal.h"
#include "ESBZCharacterCapsuleShadowingQuality.generated.h"

UENUM(BlueprintType)
enum class ESBZCharacterCapsuleShadowingQuality : uint8 {
    Disabled,
    Low,
    Medium,
    High,
    Epic,
};

