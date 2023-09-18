#pragma once
#include "CoreMinimal.h"
#include "EAccelByteGroupRequestType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteGroupRequestType : uint8 {
    NONE,
    INVITE,
    JOIN,
    JOINED,
};

