#pragma once
#include "CoreMinimal.h"
#include "ESBZSessionState.generated.h"

UENUM(BlueprintType)
enum class ESBZSessionState : uint8 {
    Ready,
    HostingInProgress,
    SearchInProgress,
    JoinInProgress,
    LeaveInProgress,
};

