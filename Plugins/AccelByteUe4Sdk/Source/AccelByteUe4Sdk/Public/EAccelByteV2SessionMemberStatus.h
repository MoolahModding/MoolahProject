#pragma once
#include "CoreMinimal.h"
#include "EAccelByteV2SessionMemberStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteV2SessionMemberStatus : uint8 {
    EMPTY,
    INVITED,
    JOINED,
    CONNECTED,
    LEFT,
    DROPPED,
    REJECTED,
    KICKED,
    TIMEOUT,
    DISCONNECTED,
    TERMINATED,
};

