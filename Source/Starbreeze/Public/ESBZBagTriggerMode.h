#pragma once
#include "CoreMinimal.h"
#include "ESBZBagTriggerMode.generated.h"

UENUM(BlueprintType)
enum class ESBZBagTriggerMode : uint8 {
    SecureAndDestroy,
    DestroyOnly,
    Teleport,
    Nothing,
};

