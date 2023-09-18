#pragma once
#include "CoreMinimal.h"
#include "EPlayerReadyStatusValue.generated.h"

UENUM(BlueprintType)
enum class EPlayerReadyStatusValue : uint8 {
    Loading,
    NotReady,
    Ready,
    Transition,
    InGame,
};

