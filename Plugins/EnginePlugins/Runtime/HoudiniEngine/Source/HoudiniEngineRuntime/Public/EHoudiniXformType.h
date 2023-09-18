#pragma once
#include "CoreMinimal.h"
#include "EHoudiniXformType.generated.h"

UENUM(BlueprintType)
enum class EHoudiniXformType : uint8 {
    None,
    IntoThisObject,
    Auto,
};

