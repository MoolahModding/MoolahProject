#pragma once
#include "CoreMinimal.h"
#include "ESBZFirstPartyPlatform.generated.h"

UENUM(BlueprintType)
enum class ESBZFirstPartyPlatform : uint8 {
    Steam,
    Playstation,
    Xbox,
    Epic,
    WindowsStore,
    MAX,
};

