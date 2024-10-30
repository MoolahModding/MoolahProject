#pragma once
#include "CoreMinimal.h"
#include "EFiniteStateMachineStateEvent.generated.h"

UENUM(BlueprintType)
enum class EFiniteStateMachineStateEvent : uint8 {
    ENTER,
    EXIT,
};

