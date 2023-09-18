#pragma once
#include "CoreMinimal.h"
#include "EHoudiniRampPointConstructStatus.generated.h"

UENUM(BlueprintType)
enum class EHoudiniRampPointConstructStatus : uint8 {
    None,
    INITIALIZED,
    POSITION_INSERTED,
    VALUE_INSERTED,
    INTERPTYPE_INSERTED,
};

