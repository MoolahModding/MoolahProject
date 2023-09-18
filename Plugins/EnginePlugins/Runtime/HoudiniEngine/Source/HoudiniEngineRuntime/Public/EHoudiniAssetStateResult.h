#pragma once
#include "CoreMinimal.h"
#include "EHoudiniAssetStateResult.generated.h"

UENUM(BlueprintType)
enum class EHoudiniAssetStateResult : uint8 {
    None,
    Working,
    Success,
    FinishedWithError,
    FinishedWithFatalError,
    Aborted,
};

