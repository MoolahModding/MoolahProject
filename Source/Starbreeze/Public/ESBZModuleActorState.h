#pragma once
#include "CoreMinimal.h"
#include "ESBZModuleActorState.generated.h"

UENUM(BlueprintType)
enum class ESBZModuleActorState : uint8 {
    None,
    Failed,
    Disabled,
    Interacted,
    Cut,
    Hacked,
};

