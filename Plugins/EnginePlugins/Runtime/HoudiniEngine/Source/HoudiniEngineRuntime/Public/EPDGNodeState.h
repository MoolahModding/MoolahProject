#pragma once
#include "CoreMinimal.h"
#include "EPDGNodeState.generated.h"

UENUM(BlueprintType)
enum class EPDGNodeState : uint8 {
    None,
    Dirtied,
    Dirtying,
    Cooking,
    Cook_Complete,
    Cook_Failed,
};

