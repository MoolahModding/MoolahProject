#pragma once
#include "CoreMinimal.h"
#include "EPDGWorkResultState.generated.h"

UENUM(BlueprintType)
enum class EPDGWorkResultState : uint8 {
    None,
    ToLoad,
    Loading,
    Loaded,
    ToDelete,
    Deleting,
    Deleted,
    NotLoaded,
};

