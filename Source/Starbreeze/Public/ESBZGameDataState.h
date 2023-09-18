#pragma once
#include "CoreMinimal.h"
#include "ESBZGameDataState.generated.h"

UENUM(BlueprintType)
enum class ESBZGameDataState : uint8 {
    NotLoggedIn,
    NotLoaded,
    Loaded,
    ProgressNotLoaded,
};

