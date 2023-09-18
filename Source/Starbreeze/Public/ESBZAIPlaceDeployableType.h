#pragma once
#include "CoreMinimal.h"
#include "ESBZAIPlaceDeployableType.generated.h"

UENUM(BlueprintType)
enum class ESBZAIPlaceDeployableType : uint8 {
    Ammo,
    Armor,
    Health,
    MAX,
};

