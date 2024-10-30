#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineTacticType.generated.h"

UENUM(BlueprintType)
enum class ESBZOnlineTacticType : uint8 {
    Any,
    Stealth,
    Loud,
    Default = Any,
};

