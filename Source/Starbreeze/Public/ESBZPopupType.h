#pragma once
#include "CoreMinimal.h"
#include "ESBZPopupType.generated.h"

UENUM(BlueprintType)
enum class ESBZPopupType : uint8 {
    None,
    FirstTime,
    PhotoSensitivity,
    GameSense,
    Telemetry,
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
    SoloMode,
    SeverBrowserLongIntro,
};

