#pragma once
#include "CoreMinimal.h"
#include "EAccelByteOptionalBool.generated.h"

UENUM(BlueprintType)
enum class EAccelByteOptionalBool : uint8 {
    NONE,
    OPT_YES,
    OPT_NO,
};

