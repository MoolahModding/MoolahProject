#pragma once
#include "CoreMinimal.h"
#include "ESBZInventoryEquipmentType.generated.h"

UENUM(BlueprintType)
enum class ESBZInventoryEquipmentType : uint8 {
    PrimaryWeapon,
    SecondaryWeapon,
    OverkillWeapon,
    Armor,
    Placeable,
    Throwable,
    Tools,
    Skills,
};

