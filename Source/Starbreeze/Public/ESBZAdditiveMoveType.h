#pragma once
#include "CoreMinimal.h"
#include "ESBZAdditiveMoveType.generated.h"

UENUM(BlueprintType)
enum class ESBZAdditiveMoveType : uint8 {
    Equipped,
    EquippedADS,
    LeftHandEquipped,
    LeftHandEquippedADS,
};

