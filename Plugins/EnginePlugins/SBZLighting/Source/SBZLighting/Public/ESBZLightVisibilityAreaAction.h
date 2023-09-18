#pragma once
#include "CoreMinimal.h"
#include "ESBZLightVisibilityAreaAction.generated.h"

UENUM(BlueprintType)
namespace ESBZLightVisibilityAreaAction {
    enum Type {
        Enable,
        EnableShadows,
        Disable,
        Max,
    };
}

