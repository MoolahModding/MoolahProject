#pragma once
#include "CoreMinimal.h"
#include "ESBZFireTokenType.generated.h"

UENUM(BlueprintType)
enum class ESBZFireTokenType : uint8 {
    Miss,
    Normal,
    Grenade,
    Sniper,
};

