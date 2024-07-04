#pragma once
#include "CoreMinimal.h"
#include "ESBZPowerUpChargesState.generated.h"

UENUM(BlueprintType)
enum class ESBZPowerUpChargesState : uint8 {
    NotPlaced,
    Placed,
    Interactable,
    Empty,
};

