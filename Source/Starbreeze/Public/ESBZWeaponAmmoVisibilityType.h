#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponAmmoVisibilityType.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponAmmoVisibilityType : uint8 {
    Never,
    Reload,
    Always,
};

