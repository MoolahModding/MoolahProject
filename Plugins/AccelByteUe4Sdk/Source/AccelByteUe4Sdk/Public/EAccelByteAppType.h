#pragma once
#include "CoreMinimal.h"
#include "EAccelByteAppType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteAppType : uint8 {
    NONE,
    GAME,
    SOFTWARE,
    DLC,
    DEMO,
};

