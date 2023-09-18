#pragma once
#include "CoreMinimal.h"
#include "ESBZProjectileImpactType.generated.h"

UENUM(BlueprintType)
enum class ESBZProjectileImpactType : uint8 {
    Light,
    Medium,
    Heavy,
};

