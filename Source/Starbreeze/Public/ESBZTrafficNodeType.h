#pragma once
#include "CoreMinimal.h"
#include "ESBZTrafficNodeType.generated.h"

UENUM(BlueprintType)
enum class ESBZTrafficNodeType : uint8 {
    Spawner,
    Destination,
};

