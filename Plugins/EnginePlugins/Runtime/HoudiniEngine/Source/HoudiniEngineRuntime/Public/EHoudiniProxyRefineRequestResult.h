#pragma once
#include "CoreMinimal.h"
#include "EHoudiniProxyRefineRequestResult.generated.h"

UENUM(BlueprintType)
enum class EHoudiniProxyRefineRequestResult : uint8 {
    Invalid,
    None,
    PendingCooks,
    Refined,
};

