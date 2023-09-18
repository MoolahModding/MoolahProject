#pragma once
#include "CoreMinimal.h"
#include "EAccelByteSessionType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteSessionType : uint8 {
    NONE,
    p2p,
    dedicated,
};

