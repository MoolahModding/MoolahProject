#pragma once
#include "CoreMinimal.h"
#include "EAccelByteGameState.generated.h"

UENUM(BlueprintType)
enum class EAccelByteGameState : uint8 {
    OUT_OF_GAMEPLAY,
    IN_GAMEPLAY,
    STORE,
};

