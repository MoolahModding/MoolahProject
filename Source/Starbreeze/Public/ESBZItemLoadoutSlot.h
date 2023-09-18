#pragma once
#include "CoreMinimal.h"
#include "ESBZItemLoadoutSlot.generated.h"

UENUM(BlueprintType)
enum class ESBZItemLoadoutSlot : uint8 {
    Throwable,
    Placeable,
    Tool,
    Armour,
    OverkillWeapon,
};

