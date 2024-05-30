#pragma once
#include "CoreMinimal.h"
#include "ESBZThrowableType.generated.h"

UENUM(BlueprintType)
enum class ESBZThrowableType : uint8 {
    None,
    Flash,
    Gas,
    Frag,
    Knife,
    Shock,
    MAX,
};

