#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponCustomizationSubScreen.generated.h"

UENUM(BlueprintType)
enum class ESBZWeaponCustomizationSubScreen : uint8 {
    WeaponSlot,
    WeaponPart,
    CosmeticSlot,
    CosmeticWearNTear,
    CosmeticBaseDesign,
    CosmeticMaterial,
    CosmeticPattern,
    CosmeticSticker,
    CosmeticCharm,
};

