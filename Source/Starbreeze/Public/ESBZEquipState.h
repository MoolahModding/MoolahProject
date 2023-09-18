#pragma once
#include "CoreMinimal.h"
#include "ESBZEquipState.generated.h"

UENUM(BlueprintType)
enum class ESBZEquipState : uint8 {
    Unequipped,
    Equipping,
    Equipped,
    Unequipping,
    MAX,
};

