#pragma once
#include "CoreMinimal.h"
#include "ESBZInstigatingPlayerStateSource.generated.h"

UENUM(BlueprintType)
enum class ESBZInstigatingPlayerStateSource : uint8 {
    None,
    RangedWeapon,
    Explosion,
};

