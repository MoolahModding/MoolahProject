#pragma once
#include "CoreMinimal.h"
#include "ESBZDisabledAimOffsetType.generated.h"

UENUM(BlueprintType)
enum class ESBZDisabledAimOffsetType : uint8 {
    All,
    Head,
    UpperBody,
};

