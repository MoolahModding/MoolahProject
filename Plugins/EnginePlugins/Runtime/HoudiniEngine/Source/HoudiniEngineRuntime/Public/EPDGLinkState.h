#pragma once
#include "CoreMinimal.h"
#include "EPDGLinkState.generated.h"

UENUM(BlueprintType)
enum class EPDGLinkState : uint8 {
    Inactive,
    Linking,
    Linked,
    Error_Not_Linked,
};

