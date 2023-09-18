#pragma once
#include "CoreMinimal.h"
#include "ESBZTutorialType.generated.h"

UENUM(BlueprintType)
enum class ESBZTutorialType : uint8 {
    None,
    FirstTime,
    PhotoSensitivity,
    Crossplay,
    Tutorial,
    Skills,
    Vendors,
    Challenges,
    WeaponMods,
    WeaponCustomization,
    OverkillWeapon,
    HeistSelection,
    CharacterSelection,
    MaskInventory,
    MaskCustomization,
    SuitInventory,
    GloveInventory,
    LoadoutMenu,
};

