#pragma once
#include "CoreMinimal.h"
#include "ESBZCosmeticDestructionType.generated.h"

UENUM(BlueprintType)
enum class ESBZCosmeticDestructionType : uint8 {
    Bullet,
    Explosion,
    Melee,
};

