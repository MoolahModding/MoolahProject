#pragma once
#include "CoreMinimal.h"
#include "ESBZAimOffsetType.generated.h"

UENUM(BlueprintType)
enum class ESBZAimOffsetType : uint8 {
    Head,
    UpperBody,
    UpperBodyCrouched,
    Custom,
    None,
};

