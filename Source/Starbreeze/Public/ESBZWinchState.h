#pragma once
#include "CoreMinimal.h"
#include "ESBZWinchState.generated.h"

UENUM(BlueprintType)
enum class ESBZWinchState : uint8 {
    None,
    HookAvailable,
    HookGrabbed,
    HookAttached,
};

