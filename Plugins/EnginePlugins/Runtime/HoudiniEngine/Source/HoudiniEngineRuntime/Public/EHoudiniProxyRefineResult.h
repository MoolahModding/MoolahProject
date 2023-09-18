#pragma once
#include "CoreMinimal.h"
#include "EHoudiniProxyRefineResult.generated.h"

UENUM(BlueprintType)
enum class EHoudiniProxyRefineResult : uint8 {
    Invalid,
    Failed,
    Success,
    Skipped,
};

